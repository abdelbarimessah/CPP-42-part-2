#include "BitcoinExchange.hpp"

bool check_y_m_d(std::string year, std::string month, std::string day)
{
	int yearr, monthh, dayy;
	yearr = atoi(year.c_str());
	monthh = atoi(month.c_str());
	dayy = atoi(day.c_str());

	if(dayy < 1 || dayy > 31)
		return false;
	if(monthh < 1 || monthh > 12)
		return false;
	if(yearr < 0 || yearr > 2024)
		return false;
	if(monthh == 2 && dayy > 29)
		return false;
	return true;
}


bool checkDate(std::string date)
{
    if(date.size() != 10)
		return false;
	for(int i = 0; i < 10; i++)
	{
		if(i == 4 || i == 7)
		{
			if(date[i] != '-')
				return false;
		}
		else if(!isdigit(date[i]))
			return false;
	}
	if(!check_y_m_d(date.substr(0, 4), date.substr(5, 2), date.substr(8, 2)))
		return false;
	return true;
}


bool checkValue(std::string value)
{


    int i = 0;
	int k = 0;
    float number = std::atof(value.c_str());
    if(number < 0)
    {
        std::cerr << "Error: not a positive number." << std::endl;
        return false;
    }
    else if(number > 1000)
    {
        std::cerr << "Error: too large a number." << std::endl;   
        return false;
    }
	while(value[i])
	{
		if(value[i] != '.'  && !isdigit(value[i]))
		{
			return false;
		}
		if (value[i] == '.' )
		{
			k++;
		}
		i++;
	}
	if(k > 1)
    {
        std::cerr << "Error: not a positive number." << std::endl;
		return false;
    }
	return true;
}



int main(int argc, char **argv)
{
    if(argc != 2)
    {
        std::cout << "Error: not enough number of argument !" << std::endl;
        return (1);
    }
    else
    {
        BitcoinExchange btc;
        if(btc.readData("data.csv"))
            return 0;
        std::ifstream inputFile(argv[1]);
        if(inputFile.fail())
		{
			std::cerr << "Error: Could not open the FILE" << argv[1] << " check again !" << std::endl;
			return 0;
		}
        else
        {
            std::string line;
            int firstLineCount = 0;
            while(std::getline(inputFile, line))
            {
                if(line == "date | value" && firstLineCount == 0)
                {
                    firstLineCount++;
                    continue;
                }
                int i = 0;
                int k = 0;
                while (line[i])
                {
                    if(line[i] == '|')
                        k++;
                    i++;
                }
                if(k != 1)
                {
                    std::cerr << "Error: bad input => " << line << std::endl;
                    continue;
                }
                char *cstr = new char[line.size() + 1];
				strcpy(cstr, line.c_str());
				char *token = strtok(cstr, " |");
				if(!token)
				{
					std::cerr << "Error: bad input => " << line << std::endl;
                    delete[] cstr;
					continue;
				}
                std::string date = token;
                token = strtok(NULL, " |");
				if(!token)
				{
					std::cerr << "Error: bad input => " << line << std::endl;
                    delete[] cstr;
					continue;
				}
                if(!checkDate(date))
                {
					std::cerr << "Error: invalid date => " << line << std::endl;
                    delete[] cstr;
					continue;
                }
                if(!checkValue(token))
                {
                    delete[] cstr;
					continue;
                }
                float number = std::atof(token);
                btc.printResult(date, number);
                delete[] cstr;
            }   
        }
    }
    return 0;
}

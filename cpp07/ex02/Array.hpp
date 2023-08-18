#ifndef ARRAY_HPP
#define ARRAY_HPP

template <typename T>
class Array
{
    private:
        T *array;
        size_t size;
    public:
        Array()
        {
            new array[0]
        }
        Array(unsigned int n)
        {
            
        }
        ~Array();
};




#endif





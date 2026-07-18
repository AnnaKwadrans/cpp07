#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template<typename T>
class Array
{
        private:
                T               *_elements;
                unsigned int    _size;

        public:
                // Construction with no parameter: Creates an empty array
                Array<T>(void);
                // Construction with an unsigned int n as a parameter: Creates an array of n elements
                // initialized by default.
                //Tip: Try to compile int * a = new int(); then display *a.
                Array<T>(unsigned int n);
                Array<T>(const Array & src);

                Array<T>   &operator=(const Array<T> & src);
                // When accessing an element with the [ ] operator, if its index is out of bounds, an
                // std::exception is thrown.
                T       &operator[](unsigned int index);

                // A member function size() that returns the number of elements in the array. This
                // member function takes no parameters and must not modify the current instance.
                unsigned int    size(void) const;

                ~Array();
};

# include "Array.tpp"

//std::ostream    &operator<<(std::ostream os, const Array<T> & a);

#endif

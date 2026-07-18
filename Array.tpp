#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _elements(NULL), _size(0) {}
                // Construction with an unsigned int n as a parameter: Creates an array of n elements
                // initialized by default.
                //Tip: Try to compile int * a = new int(); then display *a.
template<typename T>
Array<T>::Array(unsigned int n) : _elements(new T [n]), _size(n) {}
                //Array<T>(const Array & src);

                //Array<T>   &operator=(const Array<T> & src);
                // When accessing an element with the [ ] operator, if its index is out of bounds, an
                // std::exception is thrown.
                //T       &operator[](unsigned int index);

                // A member function size() that returns the number of elements in the array. This
                // member function takes no parameters and must not modify the current instance.
                //unsigned int    size(void) const;

template<typename T>
Array<T>::~Array() {
        delete [] this->_elements;
}
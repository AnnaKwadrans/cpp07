#include "Array.hpp"

template<typename T>
Array<T>::Array(void) : _elements(NULL), _size(0) {}

template<typename T>
Array<T>::Array(unsigned int n) : _elements(new T [n]), _size(n) {}

template<typename T>
Array<T>::Array(const Array & src) : _elements(new T [src._size]), _size(src._size) {
        for (unsigned int i = 0; i < src._size; i++)
                this->_elements[i] = src._elements[i];
}

template<typename T>
Array<T>   &Array<T>::operator=(const Array<T> & src) {
        if (&this != src)
        {
                delete [] this->_elements;
                this->_elements = new T [src._size];
                for (unsigned int i = 0; i < src._size; i++)
                        this->_elements[i] = src._elements[i];
                this->_size = src._size;
        }
        return (*this);
}

template<typename T>
T       &Array<T>::operator[](unsigned int index) {
        if (index >= this->_size)
                throw OutOfBoundsException();
        return (this->_elements[index]);
}

template<typename T>
unsigned int    Array<T>::size(void) const {
        return (this->_size);
}

template<typename T>
Array<T>::~Array() {
        delete [] this->_elements;
}

template<typename T>
const char      *Array<T>::OutOfBoundsException::what() const throw() {
        return ("Index out of bounds");
}

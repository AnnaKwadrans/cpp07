#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>

template<typename T>
class Array
{
        private:
                T               *_elements;
                unsigned int    _size;

        public:
                Array<T>(void);
                Array<T>(unsigned int n);
                Array<T>(const Array & src);

                Array<T>   &operator=(const Array<T> & src);

                T       &operator[](unsigned int index);

                unsigned int    size(void) const;

                ~Array();


                class OutOfBoundsException : public std::exception
                {
                        public:
                                const char      *what() const throw();
                };
};

# include "Array.tpp"

#endif

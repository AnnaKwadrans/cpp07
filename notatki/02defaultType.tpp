#include <iostream>
#include <iomanip>

template<typename T = float>
class Vertex
{
    public:

        Vertex(T const &x, T const &y, T const &z) : _x(x), _y(y), _z(z) {}
        ~Vertex() {}

        T const &getX(void) const { return this->_x; }
        T const &getY(void) const { return this->_y; }
        T const &getZ(void) const { return this->_z; }

    private:

        T const _x;
        T const _y;
        T const _z;

        Vertex(void);

};

template<typename T>
std::ostream    &operator<<(std::ostream &os, Vertex<T>const &v) {
    
    std::cout.precision(1); 
    os << setiosflags(std::ios::fixed);
    os << "Vertex( " << v.getX() << ", "
        << v.getY() << ", "
        << v.getZ() << " )";
    
        return (os);
}

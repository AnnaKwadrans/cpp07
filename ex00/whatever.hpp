template<typename T>
class Swap
{
    public:

        Swap<T>(void);
        Swap<T>(T const &x, T const &y);
        Swap<T>(Swap<T> const &src);
        ~Swap();

    private:

        T   _x;
        T   _y;


};


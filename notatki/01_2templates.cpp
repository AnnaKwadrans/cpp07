#include <iostream>

template<typename T>
// template<typename T, U>
class List {
    
    public:
        List<T>(T const & content) {
            //
        }

        List<T>(List<T> const & list) {
            //
        }

        List<T>(void) {
            //
        }

    private:
        T       _content;
        list<T> *_next;

};

int main(void)
{
    List<int>       a(42);
    //List<int, float>       a(42, 3.14f);
    List<float>     b(3.14f);
    List<List<int>> c(a);

    

    return (0);
}
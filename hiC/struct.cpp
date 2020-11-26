#include <iostream>

struct POD
{
    int i {9};
    int j;

    POD(int x, int y)
        : i{x}, j{y}
    {
        std::cout << "init POD" << std::endl;
    };

    POD()
    {
        std::cout << "default init POD" << i << std::endl;
    }
};

class ADT
{
public:
    ADT(int x, int y);
    void op();

private:
    int a;
    int b;
};

int main()
{
    POD dpod;
    POD dpod2{};
    POD pod{1, 2};
    std::cout << pod.i << ":" << pod.j << std::endl;
}
#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base() = default;
};

class Derived : public Base
{
    int* array{};
public:
    Derived(int size) : array{ new int[size] } {}
    ~Derived() override
    {
        cout << "Derived destruct\n";
        delete[] array;
    }
};


int main()
{
    Base* obj = new Base();

    delete obj;
}

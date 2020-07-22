#include <iostream>
#include <vector>
#include <initializer_list>

using namespace std;

struct X
{
    X() { cout << "X()" << endl; }
    X(const X &) { cout << "X(const X&)" << endl; }
    X &operator=(const X &)
    {
        cout << "X& operator=(const X&)" << endl;
        return *this;
    }
    ~X() { cout << "~X()" << endl; }
};

void f(const X x)
{
    vector<X> vec;
    vec.push_back(x);
}

int main()
{
    X *px = new X;
    f(*px);
    delete px;
    return 0;
}
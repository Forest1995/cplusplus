#include <iostream>
using namespace std;

void swap(int &r1, int &r2)
{
    int temp = r1;
    r1 = r2;
    r2 = temp;
}

int main()
{
    int v1 = 0;
    int v2 = 0;
    cout << "Please enter two numbers: ";
    cin >> v1 >> v2;
    swap(v1, v2);
    cout << v1 << "  " << v2 << endl;
    return 0;
}

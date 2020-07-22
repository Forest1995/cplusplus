#include <iostream>
using namespace std;

void swap(int *p1, int *p2)
{
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

int main()
{
    int v1 = 0;
    int v2 = 0;
    cout << "Please enter two numbers: ";
    cin >> v1 >> v2;
    swap(&v1, &v2);
    cout << v1 << "  " << v2 << endl;
    return 0;
}

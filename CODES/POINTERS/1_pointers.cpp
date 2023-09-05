// POINTERS

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int a = 5;
    int *p = &a;
    int *q = &a;
    cout << a << endl;
    cout << &a << endl;
    cout << p << endl;
    cout << q << endl;
    cout << &p << endl;
    cout << &q << endl;
    cout << *p << endl;
    cout << *q << endl;

    // (*q)++;
    // *(q++);
    cout << q << endl;
    cout << *q << endl;

}
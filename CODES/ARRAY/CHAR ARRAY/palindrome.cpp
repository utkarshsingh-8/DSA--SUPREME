// CHECK GIVEN STRING IS PLAINDROME OR NOT

#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    char name[30];
    cout << "Enter a String" << endl;
    cin.getline(name, 30);
    cout << "String is: " << name << endl;
    int start = 0, end = strlen(name) - 1;

    while (start <= end)
    {
        swap(name[start], name[end]);
        start++;
        end--;
    }
    cout << "String is: " << name << endl;
}
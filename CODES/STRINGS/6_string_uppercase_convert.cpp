#include <iostream>
#include <vector>
using namespace std;

void convertUppercase(string &str)
{
    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 'a' + 'A';
    }
}

int main()
{
    string str;
    cout << "Enter the String: " << endl;
    getline(cin, str);

    convertUppercase(str);
    cout << "The Reverse of the string is: " << str;
    return 0;
}
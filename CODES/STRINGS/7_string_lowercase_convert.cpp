#include <iostream>
#include <vector>
using namespace std;

void convertLowercase(string &str)
{
    int n = str.size();

    for (int i = 0; i < n; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] - 'A' + 'a';
    }
}

int main()
{
    string str;
    cout << "Enter the String: " << endl;
    getline(cin, str);

    convertLowercase(str);
    cout << "The Reverse of the string is: " << str;
    return 0;
}
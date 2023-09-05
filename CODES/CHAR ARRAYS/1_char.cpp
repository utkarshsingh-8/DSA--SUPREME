// CHAR ARRAY IS A DATA STRUCTURE THAT STORES CHAR TYPE DATA

#include <bits/stdc++.h>
using namespace std;

// LENGTH OF THE STRING
/*int getLength(char name[])
{
    int length = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {
        length++;
    }

    return length;
}*/

// REVERSE A STRING
/*void reverse(char name[])
{
    int start = 0, end = strlen(name) - 1;
    while (start <= end)
    {
        char temp = name[start];
        name[start] = name[end];
        name[end] = temp;
        start++;
        end--;
    }
    cout << "The string after reverse is: " << name << endl;
}*/

// REPLACE SPACES BETWEEN STRING
/*void replaceSpaces(char name[])
{
    for (int i = 0; name[i] !='\0'; i++)
    {
        // if(name[i]==32)
        if(name[i]==' ')
        {
            name[i]='@';
        }
    }
    cout << "The string after: " << name << endl;
}*/

// CHECK STRING IS PALINDROME OR NOT
/*bool isPalindrome(char name[])
{
    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     if (name[i] != name[strlen(name) - i - 1])
    //     {
    //         return false;
    //     }
    // }

    // int start = 0, end = strlen(name) - 1;
    // while (start <= end)
    // {
    //     if (name[start] == name[end])
    //     {
    //         start++;
    //         end--;
    //     }
    //     else
    //     {
    //         return false;
    //     }
    // }

    return true;
}*/

// CONVERT A LOWERCASE STRING INTO UPPERCASE
/*void convertUppercase(char name[])
{
    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     name[i] = name[i] - 32;
    // }

    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = name[i] - 'a' + 'A';
    }

    cout << "The Given String in Uppercase is: " << name;
}*/

// CONVERT A UPPERCASE STRING INTO LOWERCASE
void convertLowercase(char name[])
{
    // for (int i = 0; name[i] != '\0'; i++)
    // {
    //     name[i] = name[i] + 32;
    // }

    for (int i = 0; name[i] != '\0'; i++)
    {
        name[i] = name[i] + 'a' - 'A';
    }

    cout << "The Given String in Uppercase is: " << name;
}

int main()
{
    // char name[15];
    // cin >> name;
    // cout << "Name is :" << name;

    // char name[15];
    // cin.getline(name,15);
    // cout << "Name is :" << name;

    // char name[20];
    // cout << "Enter the String" << endl;
    // cin >> name;
    // cout << "The Length of the string is: " << strlen(name) << endl;
    // cout << "The Length of the string is: " << getLength(name) << endl;

    // char name[20];
    // cout << "Enter the String" << endl;
    // cin >> name;
    // cout << "The string before reverse is: " << name << endl;
    // reverse(name);

    // char name[30];
    // cout << "Enter the String" << endl;
    // cin.getline(name,30);
    // cout << "The string before: " << name << endl;
    // replaceSpaces(name);

    // char name[20];
    // cout << "Enter the String" << endl;
    // cin >> name;
    // cout << name << endl;
    // bool value = isPalindrome(name);
    // if (value)
    // {
    //     cout << "The string is Palindrome";
    // }
    // else
    // {
    //     cout << "The string is not Palindrome";
    // }

    // char name[20];
    // cout << "Enter the String in lowercase" << endl;
    // cin >> name;
    // convertUppercase(name);

    // char name[20];
    // cout << "Enter the String in uppercase" << endl;
    // cin >> name;
    // convertLowercase(name);

    // char name[15] = "UTKARSH";
    // cout << name << " ";
    // name[1] = '\0';
    // name[3] = '\0';
    // name[5] = '\0';
    // cout << name;
}
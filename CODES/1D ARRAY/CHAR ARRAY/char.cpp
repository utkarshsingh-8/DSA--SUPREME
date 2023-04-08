#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    // char name[20]; //😵‍💫😵‍💫😵‍💫
    // cout << "Enter your name" << endl;
    // cin >> name;
    // cout << "Your name is " << name ;

    // char name[20]; //😵‍💫😵‍💫😵‍💫
    // cin >> name;
    // cin>>name[3];
    // for (int i = 0; i < 9; i++)
    // {
    //     cout << "Value at Index" << i << " is " << name[i] << endl;
    // }

    // char name[30]; //😵‍💫😵‍💫😵‍💫
    // cin>>name;
    // cin.getline(name, 15);
    // cout << "Name is: " << name;

    // LENGTH OF STING 😵‍💫😵‍💫😵‍💫
    // char name[30];
    // cin.getline(name, 30);
    // cout << "Name is: " << name << endl;
    // // cout << "THe length of the string is " << strlen(name);
    // cout << endl;
    // int i, count = 0;
    // while (name[i] != '\0')
    // {
    //     count++;
    //     i++;
    // }
    // for (; name[i] != '\0';)
    // {
    //     count++;
    //     i++;
    // }
    // cout << "THe length of the string is " << count;

    // REVERSE A STING 😵‍💫😵‍💫😵‍💫
    // char name[30];
    // cout << "Enter a String" << endl;
    // cin.getline(name, 30);
    // cout << "String Before REVERSE is: " << name << endl;
    // int start = 0, end = strlen(name) - 1;
    // while (start <= end)
    // {
    //     swap(name[start], name[end]);
    //     start++;
    //     end--;
    // }
    // for (; start <= end;)
    // {
    //     swap(name[start], name[end]);
    //     start++;
    //     end--;
    // }
    // cout << "String after REVERSE is: " << name << endl;

    // REPLACES ALL STRING😵‍💫😵‍💫😵‍💫 .
    // char name[30];
    // cout << "Enter a String" << endl;
    // cin.getline(name, 30);
    // cout << "String is: " << name << endl;
    // int i = 0;
    // while (name[i] != '\0')
    // {
    //     if (name[i] == 32)
    //     {
    //         name[i] = '@';
    //     }
    //     i++;
    // }
    // for (i = 0; i < strlen(name); i++)
    // {
    //     if (name[i] == ' ')
    //     {
    //         name[i] = '@';
    //     }
    // }
    // cout << "String is: " << name << endl;

    // CHECK STRING IS PALINDROME OR NOT
    char name[30];
    cout << "Enter a String" << endl;
    cin.getline(name, 30);
    cout << "String is: " << name << endl;
    int start = 0, end = strlen(name) - 1;
    // while (start <= end)
    // {
    //     swap(name[start], name[end]);
    //     start++;
    //     end--;
    // }
    // cout << "String is: " << name << endl;


    return 0;
}
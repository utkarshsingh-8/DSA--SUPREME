#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    map<string, int, greater<string>> map1 = {{"a", 2}, {"b", 3}};

    auto pair1 = make_pair("c", 4);
    map1.insert(pair1);

    map1["d"] = 5;

    for (auto element : map1)
    {
        cout << element.first << " " << element.second;
        cout << endl;
    }

    return 0;
}
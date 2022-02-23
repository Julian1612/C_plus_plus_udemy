#include <iostream>
#include <string>
#include <array>

using namespace std;

int main (int argc, const char * argv[])
{
    array<int, 4> numbers = {1, 2, 3, 4};
    cout << numbers[0] << endl;
    cout << endl;
    // Going throw an arry with an for loop
    for (int i = 0; i < numbers.size(); i++)
    {
        cout << numbers[i] << endl;
    }
    cout << endl;
    // More dimensional arr 
    array<array<int, 2>, 3> a = 
    {{
        {1, 2},
        {3, 4},
        {5, 6}
    }};
    cout << a[0][0] << endl;
    cout << a[0].size() << endl;
    return (0);
}

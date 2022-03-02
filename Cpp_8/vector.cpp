#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main (int argc, const char * argv[])
{
    vector<string> name;

    name.push_back("Max");
    name.push_back("Monika");
    cout << name.size() << endl;
    cout << name.at(1) << endl;

    // Vector with for loop

    for (int i = 0; i < name.size(); i++)
    {
        cout << name.at(i) <<endl;
    }

    return (0);
}
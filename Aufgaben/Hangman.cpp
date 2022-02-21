#include <iostream>
#include <string>

using namespace std;

int main (int argc, const char * argv[])
{
    string word;
    string searched;
    int i;

    cout << "Enter a Word: ";
    cin >> word;
    cout << "The following word is searched for: ";
    i = 0;
    while (i < word.length())
    {
        searched.append("_");
        i++;
    }
    cout << searched;
    while (searched.find("_") != std::string::npos)
    {
       
    }
    return (0);
}

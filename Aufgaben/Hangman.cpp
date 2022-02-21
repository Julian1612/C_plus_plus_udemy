#include <iostream>
#include <string>

using namespace std;

int main (int argc, const char * argv[])
{
    string word;
    string searched;
    char input;
    int i;
    int trys;

    i = 0;
    trys = 10;
    cout << "Enter a Word: ";
    cin >> word;
    cout << "The following word is searched for: ";
    while (i < word.length())
    {
        searched.append("_");
        i++;
    }
    cout << searched << endl;
    while (searched.find("_") != std::string::npos && trys > 0)
    {
        cin >> input;
        for (int j = 0; j < word.length(); j++)
        {
            if(word[j] == input)
                searched[j] = input;
        }
        if (searched.find(input) == std::string::npos)
        {
            trys --;
        }
        cout << "The following word is searched for: " << searched << " " << trys << " trys left" << endl;
    }

    if (trys == 0)
    {
        cout << "GAME OVER" << endl;
    }
    else
    {
        cout << "\nWin, the correct Word is " << word << " you got " << trys << " trys left" << endl;
    }
    return (0);
}

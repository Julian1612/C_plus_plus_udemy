#include <iostream>
#include <string>

using namespace std;

bool palindrom(string word)
{
    int i;
    int j;

    i = 0;
    j = (word.length() - 1);
    while (j > 0)
    {
        if(word[i] != word[j])
            return (false);
        i++;
        j--;
    }
    return (true);
}

int main (int argc, const char * argv[])
{
    bool a;
    
    a = palindrom("HOFFEN");
    if (a == true)
        cout << "This is a palindrom" << endl;
    else
        cout << "This is not a palindrom" << endl;
    return (0);
}

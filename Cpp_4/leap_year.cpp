#include <iostream>

using namespace std;

/* int main (int argc, const char * argv[])
{
    int i;
    for (i = 2010; i <= 2022; i++)
    {
        if (i == 2012 || i == 2016 || i == 2020)
        {
            continue;
        }
        else
        {
            cout << i << endl;
        }
    }
    return (0);
} */

int main (int argc, const char * argv[])
{
    int i;
    for (i = 2010; i <= 2022; i++)
    {
        if (!(i % 4 == 0 && i % 100 != 0))
        {
            cout << i << endl;
        }
    }
    return (0);
}
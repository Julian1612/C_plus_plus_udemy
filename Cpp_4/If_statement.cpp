#include <iostream>

using namespace std;

int main (int argc, const char * argv[])
{
    int alter;
    double promille;

    cout << "How old are you ?" << endl;
    cin >> alter;
    cout << "How much promille you have ?" << endl;
    cin >> promille;

    if (alter >= 21 && promille <= 0.2)
    {
        cout << "You are allowed to drive !" << endl;
    }
    else if (alter >= 21 && promille >= 0.2)
    {
        cout << "You are not allowed to drive !!" << endl;
    }
    else if (alter <= 21 && promille >= 0.0)
    {
        cout << "You are not allowed to drive !!" << endl;
    }
    else
    {
        cout << "You are allowed to drive !" << endl;
    }
    return (0);
}

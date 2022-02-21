#include <iostream>

using namespace std;

int main (int argc, const char * argv[])
{
    double a;
    double b;
    double sum;

    cout << "Gebe eine beliebige Zahl ein: " << endl;
    cin >> a;
    cout << "Gebe eine zweite beliebige Zahl ein: " << endl;
    cin >> b;
    sum = a + b;
    cout << "Die Summe ist: " << sum;
    return (0);
}

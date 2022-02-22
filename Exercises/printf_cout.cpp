#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main (int argc, const char * argv[])
{
    double a;

    a = 212.123443232343;

    // out put number with two numbers after decimal point with cout 
    cout << setprecision(4) << a << endl;

    // out put number with two numbers after decimal point with printf 
    printf("%.1f", a);
    return (0);
}

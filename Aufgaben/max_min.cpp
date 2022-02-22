#include <iostream>
using namespace std;

int maximum_0(int a, int b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

int maximum_1(int a, int b, int c)
{
    if (a > b && a > c)
        return (a);
    else if (b > a && b > c)
        return (b);
    else
        return (c);
}

int maximum_2(int a, int b, int c, int d)
{
    if (a > b && a > c && a > d)
        return (a);
    else if (b > a && b > c && b > d)
        return (b);
    else if (c > a && c > b && c > d)
        return (c);
    else
        return (d);
}

int main (int argc, const char * argv[])
{
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;

    a = 2001;
    b = 2222;
    c = 2223;
    d = 9999;
    e = maximum_0(a, b);
    f = maximum_1(a, b, c);
    g = maximum_2(a, b, c, d);
    cout << "Das Maximum der Zahlen " << a << " und " << b << " ist: " << e << endl; 
    cout << "Das Maximum der Zahlen " << a << ", " << b << " und " << c << " ist: " << f << endl; 
    cout << "Das Maximum der Zahlen " << a << ", " << b << ", " << c << " und " << d << " ist: " << g << endl; 
    return (0);
}

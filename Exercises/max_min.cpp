#include <iostream>
using namespace std;

int maximum(int a, int b)
{
    cout << "Option 1" << endl;
    if (a >= b)
        return (a);
    else
        return (b);
}

int maximum(int a, int b, int c)
{
    cout << "Option 2" << endl;
    if (a >= b && a >= c)
        return (a);
    else if (b >= a && b >= c)
        return (b);
    else
        return (c);
}

int maximum(int a, int b, int c, int d)
{
    cout << "Option 3" << endl;
    if (a >= b && a >= c && a >= d)
        return (a);
    else if (b >= a && b >= c && b >= d)
        return (b);
    else if (c >= a && c >= b && c >= d)
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

    a = 334;
    b = 22222;
    c = 221;
    d = 92222999;
    e = maximum(a, b);
    f = maximum(a, b, c);
    g = maximum(a, b, c, d);
    cout << "Das Maximum der Zahlen " << a << " und " << b << " ist: " << e << endl; 
    cout << "Das Maximum der Zahlen " << a << ", " << b << " und " << c << " ist: " << f << endl; 
    cout << "Das Maximum der Zahlen " << a << ", " << b << ", " << c << " und " << d << " ist: " << g << endl; 
    return (0);
}

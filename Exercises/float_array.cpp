#include <iostream>
#include <string>
#include <array>

using namespace std;

int main (int argc, const char * argv[])
{
    double sum;
    double ave;
    int index;

    sum = 0;
    double a[] = {1.2, 1.2, 1.2, 1.2, 1.2, 1.2, 1.2};
    index = sizeof(a) / sizeof(*a);
    for (int i = 0; i < index; i++)
    {
        sum += a[i];
    }
    ave = sum / index;
    cout << ave;
    return (0);
}

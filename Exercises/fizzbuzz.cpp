#include <iostream>
#include <string>

using namespace std;

void fizzbuzz(int n)
{
    int counter;

    counter = 1;
    while (counter <= n)
    {
        if (counter % 3 == 0 && counter % 5 == 0)
            cout << "FizzBuzz" << endl;
        else if (counter % 3 == 0)
            cout << "Fizz" << endl;
        else if (counter % 5 == 0)
            cout << "Buzz" << endl;
        else
            cout << counter << endl;
        counter++;
    }
}

int main (int argc, const char * argv[])
{
    fizzbuzz(22);
    return (0);
}
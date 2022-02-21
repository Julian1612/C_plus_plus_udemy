#include <iostream>
#include <string>

using namespace std;

int main (int argc, const char * argv[])
{
    string name = "Erika";


    // String bearbeiten
    name[0] = 'X';
    cout << name << endl;

    // Am ende was dran hängen 
    name.append("!!!");
    cout << name << endl;

    return (0);
}
#include <iostream>
#include <string>

using namespace std;

int main (int argc, const char * argv[])
{
    string name;
    char a;

    name = "Erika Mueller";

    // änge des Strings ermitteln 
    cout << name.length() << endl;

    // Auf einzelnes Zeichen zugreifen
    a = name[4];
    cout << a <<endl;

    // Auf einen Teilstring zugreifen
    cout << name.substr(0, 5) << endl;

    // In einem string ein Zeichensuchen 
    cout << name.find("a") << endl;
    cout << name.find("x") << endl;

    return (0);
}

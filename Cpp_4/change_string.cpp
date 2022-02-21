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

    // Zeichen im String hinzufügen
    name.insert(4, ",");
    cout << name << endl;

    // Zeichen entfernen 
    name.erase(5, 3);
     cout << name << endl;

    return (0);
}
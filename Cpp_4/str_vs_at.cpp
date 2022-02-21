#include <iostream>
#include <string>

using namespace std;

int main (int argc, const char * argv[])
{
    string name = "Erika Mueller";

    cout << name[2] << endl;
    cout << name.at(2) << endl;

    cout << name[13] << endl;
    cout << name.at(13) << endl; //Überprüft ob auf den char zugegriffen werden darf 
    return (0);
}

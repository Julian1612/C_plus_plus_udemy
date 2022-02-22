#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/* int main (int argc, const char * argv[])
{
    
    ofstream file ("/users/julianschneider/Desktop/output.txt");
    file << "Hallo Welt" << endl;

    return (0);
} */

/* int main (int argc, const char * argv[])
{
    ifstream file ("/users/julianschneider/Desktop/output.txt");
    if (file.is_open())
    {
        string a;
        string b;
        file >> a;
        file >> b;

        cout << a << endl;
        cout << b << endl;
        file.close();
    }

    return (0);
} */

/* int main (int argc, const char * argv[])
{
    ifstream file ("/users/julianschneider/Desktop/output.txt");
    
    while (!file.eof())
    {
        string a;
        file >> a;
        cout << a << " ";
    }
    
    file.close();

    return (0);
}
 */

int main (int argc, const char * argv[])
{
    cout << "Enter your name: " << endl;

    string name;

    getline(cin, name);

    cout << name << endl;

    return (0);
}

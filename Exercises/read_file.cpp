#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int count_words()
{
    int word_counter;
    string a;
    ifstream file ("/users/julianschneider/Desktop/faust.txt");

    if (file.is_open())
    {
        word_counter = 0;
        while (!file.eof())
        {
            file >> a;
            word_counter++;
        }
    }
    else
    {
        cout << "It was not possible to open this file" << endl;
        return (0);
    }
    file.close();
    return (word_counter);
}


int count_lines()
{
    int lines_counter;
    string a;
    ifstream file ("/users/julianschneider/Desktop/faust.txt");

    if (file.is_open())
    {
        lines_counter = 0;
        while (!file.eof())
        {
            getline(file, a);
            lines_counter++;
        }
    }
    else
    {
        cout << "It was not possible to open this file" << endl;
        return (0);
    }
    file.close();
    return (lines_counter);
}

int main (int argc, const char * argv[])
{
    int lines;
    int words;

    lines = count_lines();
    words = count_words();
    cout << "There are " << lines << " lines in this text and " << words << " words." << endl;
    return (0);
}

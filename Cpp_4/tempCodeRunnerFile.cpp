int main (int argc, const char * argv[])
{
    int i;
    for (i = 2010; i <= 2022; i++)
    {
        if (!(i % 4 == 0 && i % 100 != 0))
        {
            cout << i << endl;
        }
    }
    return (0);
}
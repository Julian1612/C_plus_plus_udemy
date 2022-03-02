#include <iostream>
#include <array>
using namespace std;

int input_x(int player)
{
    int x;

    cout << "It's player " << player << "'s turn" << endl;
    cout << "Where do you want to place your figure ? (Y-Position)" << endl;
    cin >> x;
    return (x - 1);
}

int input_y()
{
    int y;

    cout << "Where do you want to place your figure ? (X-Position)" << endl;
    cin >> y;
    return (y - 1);
}

int check(int matchfield[][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (matchfield[i][0] == 1 && matchfield[i][1] == 1 && matchfield[i][2] == 1)
            return (1);
        if (matchfield[i][0] == 2 && matchfield[i][1] == 2 && matchfield[i][2] == 2)
            return (1);
    }
    for (int i = 0; i < 3; i++)
    {
        if (matchfield[0][i] == 1 && matchfield[1][i] == 1 && matchfield[2][i] == 1)
            return (1);
        if (matchfield[0][i] == 2 && matchfield[1][i] == 2 && matchfield[2][i] == 2)
            return (1);
    }
    if (matchfield[0][0] == 1 && matchfield[1][1] == 1 && matchfield[2][2] == 1)
        return (1);
    else if (matchfield[0][0] == 2 && matchfield[1][1] == 2 && matchfield[2][2] == 2)
        return (1);
    else
        return (0);
}

void matchfield()
{
    int x;
    int y;
    int player;
    int check_game;
    
    player = 1;
    int matchfield[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}};
    while (true)
    {
        x = input_x(player);
        y = input_y();
        if (matchfield[x][y] == 0)
        {
            matchfield[x][y] = player;
            for ( int i = 0; i < 3; i++)
            {
                for (int j = 0; j < 3; j++)
                {
                    cout << " | ";
                    cout << matchfield[i][j];
                }
                cout << endl;
            }
            check_game = check(matchfield);
            if (check_game == 1)
            {
                cout << endl << "Player " << player << " winn !!" << endl << endl; 
                break;
            }
            if (player == 1)
            player = 2;
            else
            player = 1;
        }
        else
            cout << endl << "This spot is already taken choose an other one" << endl << endl;
    }
}

int main (int argc, const char * argv[])
{
    matchfield();
    return (0);
}


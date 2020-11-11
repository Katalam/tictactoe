#include <iostream>
#include "main.h"

using namespace std;

int main()
{
    int sqr[_sqrs];
    for (int i = 0; i < _sqrs; i++)
    {
        sqr[i] = i + 1;
    }
    for (int i = 0; i < 3; i++)
    {
        sum_rows[i] = 0;
        sum_columns[i] = 0;
        if (i < 2)
            sum_diag[2] = 0;
    }
    system("cls||clear");
    cout << "New Game started. Getting ready!\n";
    print_game(sqr);
    for (int i = 0; i < _sqrs; i++)
    {
        int idx;
        cout << "Player " << (i % 2) + 1 << "\n";
        cout << "Enter square number: ";
        cin >> idx;
        idx--;
        while (idx > 8 || idx < 0 || sqr[idx] > 9)
        {
            cout << "Try again!\n";
            cin >> idx;
            idx--;
        }
        if ((i % 2) == 0)
        {
            sqr[idx] = 10;
            increment_sums(idx);
        }
        else
        {
            sqr[idx] = 11;
            decrement_sums(idx);
        }
        system("cls||clear");
        print_game(sqr);
        int w = check_win(sqr);
        if (w > 0)
        {
            cout << "The winner is player " << w;
            return 0;
        }
    }
    return 0;
}

void print_game(int *sqr)
{
    for (int i = 0; i < _sqrs; i++)
    {
        cout << "  ";
        if (sqr[i] == 10)
            cout << "X";
        else if (sqr[i] == 11)
            cout << "O";
        else
            cout << sqr[i];
        if ((i % 3) == 2)
            cout << "\n";
    }
}



void increment_sums(int idx)
{
    sum_rows[idx / 3]++;
    sum_columns[idx % 3]++;
    if ((idx % 4) == 0)
        sum_diag[1]++;
    if (idx == 2 || idx == 4 || idx == 6)
        sum_diag[0]++;
}

void decrement_sums(int idx)
{
    sum_rows[idx / 3]--;
    sum_columns[idx % 3]--;
    if ((idx % 4) == 0)
        sum_diag[1]--;
    if (idx == 2 || idx == 4 || idx == 6)
        sum_diag[0]--;
}

int check_win(int *sqr)
{
    for (int i = 0; i < 3; i++)
    {
        if (sum_rows[i] > 2) return 1;
        if (sum_rows[i] < -2) return 2;
        if (sum_columns[i] > 2) return 1;
        if (sum_columns[i] < -2) return 2;
        if (i < 2)
        {
            if (sum_diag[i] > 2) return 1;
            if (sum_diag[i] < -2) return 2;
        }
    }
    return 0;
}

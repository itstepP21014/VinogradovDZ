#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 33

void generate (char mas[][N], int size);
void output (char mas[][N], int size);
void playGame(int mass[][SIZE]);
int chekWinGame(int mass[][SIZE]);

int main()
{
    srand(time(NULL));
    char mas[N][N];
    int size=N;
    generate (mas, size);
    printf ("Hi! Let's play a game.\n\nRules:\n1. One player goes to '0', the other 'x'\n2. The objective of the first player - to build a straight line of the six '0'\n3. The task of the second player to the first player to prevent blocking his line of 'x'\n\n");
    output (mas, size);
    return 0;
}

void generate (char mas[][N], int size)
{
    for (int i=0; i<size; ++i)
    {
        for (int j=0; j<size; ++j)
        {
            mas[i][j]='*';
        }
    }
    for (int i=0; i<size; i++)
    {
        mas[0][i]=i;
    }
    for (int i=0; i<size; i++)
    {
        mas[i][0]=i;
    }
    mas[15][3]='0';
    mas[6][21]='0';
    mas[19][23]='0';
    mas[30][7]='0';
    mas[6][9]='0';
}

void output (char mas[][N], int size)
{
    for (int i=0; i<size; ++i)
    {
        for (int j=0; j<size; ++j)
        {
            printf ("%c ", mas[i][j] );
        }
        printf ("\n");
    }
    printf ("\n\n");
}

void playGame(int mass[][SIZE])
{
    drwka(mass);
    int exit = 0;

    while(!exit)
    {
        keypad(stdscr, true);
        int action = getch();

        switch(action)
        {
        case KEY_UP:
            if(row == 0)
            {
                row = SIZE - 1;
            }
            else
            {
                --row;
            }

            break;

        case KEY_DOWN:
            if(row == SIZE - 1)
            {
                row = 0;
            }
            else
            {
                ++row;
            }

            break;

        case KEY_LEFT:
            if(cols == 0)
            {
                cols = SIZE - 1;
            }

            else
            {
                --cols;
            }

            break;

        case KEY_RIGHT:
            if(cols == SIZE - 1)
            {
                cols = 0;
            }

            else
            {
                ++cols;
            }

            break;

        case 111:
            if(mass[row][cols] == 0)
            {
                mass[row][cols] = 1;
                ticta++;
                exit=1;
            }

            break;

        case 120:
            if(mass[row][cols] == 0)
            {
                mass[row][cols] = 2;
                ticta++;
                exit=1;
            }

            break;
        }

        drwka(mass);
    }
}

int chekWinGame(int mass[][SIZE])
{
    int xx, yy;
    int flags_chek = 0;

    for(int k = 0; k < SIZE; k++)
    {
        for(int i = 0; i < SIZE; i++)
        {
            for(int m = -1; m < 2; m++)
            {
                for(int n = -1; n < 2; n++)
                {
                    if(mass[i][k] != 0)
                    {
                        flags_chek = 0;
                        xx = i;
                        yy = k;

                        for(int p = 0; p < 4; p++, xx += m, yy += n)
                        {
                            if(mass[i][k] == mass[xx + m][yy + n] && !(n == 0 && m == 0)) flags_chek++;

                            if(flags_chek == 4) return mass[i][k];
                        }
                    }
                }
            }
        }
    }

    if(ticta == SIZE * SIZE - 4) return -1;

    return 0;
}
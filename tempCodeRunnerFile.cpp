#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

char map[20][20];
char player = 'o';
char player2 ='W';
char walk;

int x = 18;
int y = 3;

int xx = 18;
int yy = 7;

void mapel(){
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            map[i][j] = ' ';
        }
    }
    map[x][y] = player;
    map[xx][yy] = player2;
}

void tampilkan(){
        for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            cout << map[i][j];
        }
        cout << endl;
    }
}

int main (){

do
{
    system("cls");
    mapel();
    tampilkan();
    walk = getch();

    if (walk == 'w' || walk == 'W')
    {
        if ([x-1][y] = ' ')
        {
            x--;
            [x+1][y] = ' ';
            [x][y] = player;
        } 
    } else if (walk == 'o' || walk == 'O')
    {
        if ([xx-1][yy] = ' ')
        {
            xx--;
            [xx+1][yy] = ' ';
            [xx][yy] = player2;
        }
            
    }
    
} while (y < 20000);




return 0; }

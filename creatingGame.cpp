#include <iostream>
#include <windows.h>
#include <conio.h>
using namespace std;

char map[20][20];
char player = 'o';
char player2 ='W';
char start[] = {'S','L', 'T', 'A', 'T'};
char walk;

int x = 18;
int y = 3;

int xx = 18;
int yy = 7;

int xxx = 19;
int yyy = 3;

void mapel(){
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            map[i][j] = '.';
        }
    }
    map[x][y] = player;
    map[xx][yy] = player2;
    for (int k = 0; k < 5; k++)
    {
        map[xxx][yyy + 1] = start[k];
        
    }
    
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
        if (map[x-1][y] == ' ')
        {
            x--;
            map[x+1][y] = ' ';
            map[x][y] = player;
        } 
    } else if (walk == 'o' || walk == 'O')
    {
        if (map[xx-1][yy] == ' ')
        {
            xx--;
            map[xx+1][yy] = ' ';
            map[xx][yy] = player2;
        }
            
    }
    
} while (y < 20000);




return 0; }

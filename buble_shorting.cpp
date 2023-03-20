//
#include <iostream>
#include <stdlib.h>
using namespace std;

void bubble_short (int array[], int size){
    int temp, i, j;

    for ( i = 0; i < size-1; i++)
    {
        for ( j = 0; j < size-1-i; j++)
        {
            if (array[j] > array[j+1])
            {
                temp = array[j];
                array[j] = array [j+1];
                array[j+1] = temp;
            }
            
        }
        
    }
    
}

int main(){
    int data_size = 30;
    int values[data_size],i;

    //Data yang belum diurutkan diambil dari hasil random
    cout << "data yang belum urut : " << endl;
    for ( i = 0; i < data_size; i++)
    {
        values[i] = rand() % 100;
        cout << values[i] << " ";
    }
    
    cout << endl;

    bubble_short(values, data_size);

    //data yang sudah diurutkan
    cout << "data yang sudah diurutkan : " << endl;
    for ( i = 0; i < data_size; i++)
    {
        cout << values[i] << " ";
    }
    
}
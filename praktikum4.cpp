#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    float TB, BB, U, BMR, TA, TS, NilaiAktifitas, NilaiStress;
    float KE;
    char jenisk[30], stress[30], Aktifitas[30];

    printf("==========================");
    printf("\n|| Perhitungan Energi ||");
    printf("\n========================");

    printf("\n\nMasukkan Tinggi Badan (cm) :");
    scanf("%f", &TB);
    printf("Masukkan Berat Badan (cm) :");
    scanf("%f", &BB);
    printf("Masukkan Umur :");
    scanf("%f", &U);
    printf("Masukkan jenis kelamin (L/P) :");
    scanf("%s", &jenisk);

    if (strcmp(jenisk, "L") == 0)
    {
        BMR = 66 + (13.7 * BB) + (5 * TB) + (6.8 * U);
        printf("==========================");
        printf("\n||   TINGKAT AKTIFITAS  ||");
        printf("\n||\t\t\t||");
        printf("\n|| \t1. Ringan \t||");
        printf("\n|| \t2. Sedang \t||");
        printf("\n|| \t3. Berat  \t||");
        printf("\n||\t\t\t||");
        printf("\n=========================");
        printf("\nPilihan :");

        scanf("%s", &Aktifitas);
        if (strcmp(Aktifitas, "1") == 0)
        {
            NilaiAktifitas = 1.65;
        }
        else if (strcmp(Aktifitas, "2") == 0)
        {
            NilaiAktifitas = 1.76;
        }
        else if (strcmp(Aktifitas, "3") == 0)
        {
            NilaiAktifitas = 2.10;
        }
    }
    else
    {
        if (strcmp(jenisk, "P") == 0)
        {
            BMR = 65.5 + (9.6 * BB) + (1.7 * TB) + (4.7 * U);
            printf("==========================");
            printf("\n||   TINGKAT AKTIFITAS  ||");
            printf("\n||\t\t\t||");
            printf("\n|| \t1. Ringan \t||");
            printf("\n|| \t2. Sedang \t||");
            printf("\n|| \t3. Berat  \t||");
            printf("\n||\t\t\t||");
            printf("\n=========================");
            printf("\nPilihan :");

            cin.ignore();
            scanf("%s", &Aktifitas);
            if (strcmp(Aktifitas, "1") == 0)
            {
                NilaiAktifitas = 1.55;
            }
            else if (strcmp(Aktifitas, "2") == 0)
            {
                NilaiAktifitas = 1.7;
            }
            else if (strcmp(Aktifitas, "3") == 0)
            {
                NilaiAktifitas = 2.0;
            }
        }
    }

    cin.ignore();
    printf("==========================");
    printf("\n||   TINGKAT STRESS  ||");
    printf("\n||\t\t\t||");
    printf("\n|| \t1. Ringan \t||");
    printf("\n|| \t2. Sedang \t||");
    printf("\n|| \t3. Berat  \t||");
    printf("\n||\t\t\t||");
    printf("\n=========================");
    printf("\nPilihan :");
    scanf("%s", &stress);

    if (strcmp(stress, "1") == 0)
    {
        NilaiStress = 1.4;
    }
    else if (strcmp(stress, "2") == 0)
    {
        NilaiStress = 1.5;
    }
    else if (strcmp(stress, "3") == 0)
    {
        NilaiStress = 2.0;
    }
    KE = BMR * NilaiAktifitas * NilaiStress;
    printf("\n Kebutuhan Energi = %.2f", KE);
}

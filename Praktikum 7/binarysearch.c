// Nama File : binarysearch.c
// Deskripsi : Program Binary search
// Nama : Thifa Ziada Taqiyya
// NIM  : 24060121130080

#include <stdio.h>
#include <stdlib.h>

void BinSearch1 (int T[], int N, int X, int *IX)
{
    //kamus lokal
    int upper, lower, mid;

    //algoritma
    upper = N-1;
    lower = 0;
    mid = (upper + lower)/2;

    while (X != T[mid] && lower < upper){
        if (X > T[mid]){
            lower = mid + 1;
        }
        else {
            upper = mid -1;
        }
        mid = (upper + lower)/2;
    }
    if (X == T[mid]){
        *IX = mid;
    }
    else {
        *IX = -1;
    }
}

// Nama File : main.c
// Deskripsi : Program utama Binary search
// Nama : Thifa Ziada Taqiyya
// NIM  : 24060121130080

#include <stdio.h>
#include <stdlib.h>
#include "binsearch.h"

int main ()
{
    //kamus
    int arr[] = {13,8,20,0,3,1,9,18,35,43,98};
    int x = 35;
    int n = sizeof(arr) / sizeof(arr[0]);
    int ix;
    int i;

    //algoritma
    printf("=================================================================================\n");
    printf ("Program Mencari Suatu Nilai Dalam Sebuah Array/Tabel dengan Binary Search\n");
    printf("=================================================================================\n");
    printf("\nTabel = { ");
    for (i = 0; i < n-1; i++){
        printf("%d, ", arr[i]);
    }
    printf("%d }\n", arr[10]);
    printf("\nPanjang Tabel = %d\n", n);
    printf("\nNilai yang dicari = %d\n", x);
    printf("\n--------------------------------------------------------------------------------\n");

    BinSearch1(arr, n, x, &ix);
    if (ix == -1){
        printf("\nElemen %d tidak ditemukan dalam tabel.\n", x);
    }
    else {
        printf("\nElemen %d ditemukan pada index ke-%d.\n", x, ix);
    }
    printf("\n=================================================================================\n");
    return 0;

}

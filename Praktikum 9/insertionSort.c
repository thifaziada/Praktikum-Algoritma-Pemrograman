// Nama : Thifa Ziada Taqiyya
// NIM : 24060121130080
// Nama File : insertionSort.c
// Deskripsi : membuat algoritma pengurutan dengan insertion sort

#include <stdio.h>
void insertionSort(int array[], int n){
    //kamus Lokal
    int i, j, key;

    // Algoritma
    for (i = 1; i < n; i++){
        key = array[i];
        j = i-1;
        while(j >= 0 && array[j] > key){
            array[j+1] = array[j];
            j--;
        }
        array[j+1] = key;
    }
}
int main(){
    //kamus lokal
    int array[] = {20, 33, 9, 11, 13, 8, 20, 3, 7, 5, 10, 100, 53};
    int n;

    //algoritma
    n = sizeof(array) / sizeof(array[0]);

    insertionSort(array, n);

    printf("Hasil pengurutannya adalah sebagai berikut:\n");
    for (i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}


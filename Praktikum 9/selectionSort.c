// Nama : Thifa Ziada Taqiyya
// NIM : 24060121130080
// Nama File : selectionSort.c
// Deskripsi : membuat algoritma pengurutan dengan selection sort

void selectionSort(int arr[], int n){
    // Kmaus Lokal
    int i, j, min, swap;
    for(i = 0; i < (n-1); i++){
        min = i;
        for (j = i + 1; j < n; j++){
            if(arr[j] < arr[min]){
                min = j;
      }
    }
    if(min != i){
      swap = arr[i];
      arr[i] = arr[min];
      arr[min] = swap;
    }
  }
}
int main(){
    // Kamus
    int array[] = {20, 33, 9, 11, 13, 8, 20, 3, 7, 5, 10, 100, 53};
    int n, i;

    // Algoritma
    n = sizeof(array) / sizeof(array[0]);

    selectionSort(array, n);

    printf("Hasil pengurutannya adalah sebagai berikut:\n");
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}

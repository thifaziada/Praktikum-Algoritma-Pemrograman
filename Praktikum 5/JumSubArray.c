/* Nama File    : JumSubArray.c */
/* Deskripsi    : Menghitung penjumlahan sub array */
/* Nama         : Thifa Ziada Taqiyya */
/* NIM          : 24060121130080 */

#include <stdio.h>

int main (){
/*Kamus*/
    int N, i, j, sum;

/*Algoritma*/
    printf("Masukkan banyak elemen (N): ");
    scanf("%d",&N);

    int T[N];
    sum = 0;
    printf("Masukkan masing-masing elemen: \n");
    for (i = 0; i < N; i++) scanf("%d",&T[i]);
    for (i = 0; i < N; i++){
        for (j = i; j < N; j++){
            sum += T[j];
        }
    }
    printf("Jumlah sub array adalah %d",sum);

    return 0;

}

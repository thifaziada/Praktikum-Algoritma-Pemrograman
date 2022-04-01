/* Nama File    : selisihLintasan.c */
/* Deskripsi    : Menghitung selisih antara lintasan terpanjang dan mintasan terpendek */
/* Nama         : Thifa Ziada Taqiyya */
/* NIM          : 24060121130080 */

#include <stdio.h>

int main (){
/*Kamus*/
    int N, i, max, min;

/*Algoritma*/
    printf("Masukkan banyak data lintasan (N): ");
    scanf("%d",&N);

    printf("Masukkan panjang setiap lintasannya: \n");
    int ara[N];
    for (i = 0; i < N; i++){
        scanf("%d",&ara[i]);
    }
    max = ara[0];
    min = ara[0];
    for (i = 0; i < N; i++){
        if (ara[i] > max){
            max = ara[i];
        }
        if (ara[i] < min){
            min = ara[i];
        }
    }
    printf("Selisih lintasan terpanjang dan terpendek adalah %d", max-min);

    return 0;
}


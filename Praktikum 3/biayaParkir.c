/* Nama File: biayaParkir.c */
/* Deskripsi: Menghitung biaya parkir tergantung pada lamanya waktu parkir */
/* Nama: Thifa Ziada Taqiyya */
/* NIM: 24060121130080 */

#include <stdio.h>

int main() {
    /* Kamus */
    int i;
    int b;

    /* Algoritma */
    printf("Menghitung Biaya Parkir\n");
    printf("------------------------------------------------------\n");

    printf("\nMasukkan lamanya waktu parkir (jam): ");
    scanf("%d",&i);
    printf("------------------------------------------------------\n");

    if (i <= 0) {
        printf("\nMasukan tidak sesuai\n");
        printf("------------------------------------------------------\n");
    }
    else {
        if (i<=2) {
            b = 2000;
        }
        else {
            b = 2000+((i-2)*500);
        }
    }
    printf("\nBiaya Parkir yang harus dibayar adalah: Rp.%d",b);
    printf("\n------------------------------------------------------\n");
    return 0;



}


/* Nama File: UpahKerja.c */
/* Deskripsi: Menghitung upah kerja berdasa */
/* Nama: Thifa Ziada Taqiyya */
/* NIM: 24060121130080 */

#include <stdio.h>

int main() {
    /* Kamus */
    int gol;
    int jam;
    int u;

    /* Algoritma */
    printf("Menghitung upah kerja berdasarkan lamanya jam kerja\n");
    printf("---------------------------------------------------\n");
    printf("\nMasukkan lamanya waktu kerja (jam/minggu): ");
    scanf("%d",&jam);
    printf("Masukkan golongan: ");
    scanf("%d",&gol);
    printf("---------------------------------------------------\n");

     if (jam <= 0) {
        printf("\nMasukan Jam Tidak Sesuai\n");
        printf("---------------------------------------------------\n");
    }
    else if (jam <= 40) {
        switch (gol) {
        case 1:
            u = jam * 1000;
            break;
        case 2:
            u = jam * 1500;
            break;
        case 3:
            u = jam * 2000;
            break;
        case 4:
            u = jam *2500;
            break;
        default:
            printf("\nMasukan golongan tidak tersedia\n");
            printf("---------------------------------------------------\n");
            break;
        }
    }
    else if (jam > 40) {
        switch(gol){
        case 1:
            u = (40*1000) + ((jam-40)*(1.5*1000));
            break;
        case 2:
            u = (40*1500) + ((jam-40)*(1.5*1500));
            break;
        case 3:
            u = (40*2000) + ((jam-40)*(1.5*2000));
            break;
        case 4:
            u = (40*2500) + ((jam-40)*(1.5*2500));
            break;
        default:
            printf("\nMasukan golongan tidak tersedia\n");
            printf("---------------------------------------------------\n");
            break;
        }
    }

    printf("\nUpah yang diterima adalah: Rp.%d", u);
    printf("\n---------------------------------------------------\n");
}



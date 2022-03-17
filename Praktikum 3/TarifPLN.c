/* Nama File: TarifPLN.c */
/* Deskripsi: Menghitung besarnya tarif listrik berdasarkan golongan tarif dan pemakaian daya listrik */
/* Nama: Thifa Ziada Taqiyya */
/* NIM: 24060121130080 */

#include <stdio.h>

int main() {
    /* Kamus */
    int gol;
    int daya;
    int t;

    /* Algoritma */
    printf("Menghitung besar tarif listrik\n");
    printf("-----------------------------------------------\n");
    printf("\nMasukkan golongan tarif: ");
    scanf("%d",&gol);
    printf("Masukkan pemakaian daya listrik: ");
    scanf("%d",&daya);
    printf("-----------------------------------------------\n");

    if (daya <= 0) {
        printf("\nMasukan daya tidak sesuai");
        printf("\n-----------------------------------------------\n");
    }
    else if (daya > 0 && daya <= 100){
        switch(gol){
        case 1:
            t = 1000*100;
            break;
        case 2:
            t = 2000*100;
            break;
        default:
            printf("Masukan golongan tidak tersedia\n");
            break;
        }
    }
    else if (daya > 100 && daya < 1000) {
        switch(gol){
        case 1:
            t = 1000*daya;
            break;
        case 2:
            t = 2000*daya;
            break;
        default:
            printf("Masukan golongan tidak tersedia\n");
            break;
        }
    }
    else if (daya >= 1000) {
        switch(gol){
        case 1:
            t = (1000*daya) + (0.1*(1000*daya));
            break;
        case 2:
            t = (2000*daya) + (0.1*(2000*daya));
            break;
        default:
            printf("Masukan golongan tidak tersedia\n");
            break;
        }
    }
    printf("\nTarif listrik yang harus dibayar adalah: Rp.%d",t);
    printf("\n-----------------------------------------------\n");
}


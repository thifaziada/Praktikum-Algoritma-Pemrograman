/* Nama File: HargaDiskon.c */
/* Deskripsi: Menghitung harga diskon berdasarkan jenis diskon */
/* Nama: Thifa Ziada Taqiyya */
/* NIM: 24060121130080 */

#include <stdio.h>

int main() {
    /* Kamus */
    char j;
    int h0;
    int h;
    int d;

    /* Algoritma */
    printf("Menghitung Harga Diskon\n");
    printf("------------------------------------------------------\n");

    printf("\nMasukkan jenis diskon ('A'/'B'/'C'): ");
    scanf("%c", &j);
    printf("\nMasukkan harga: Rp.");
    scanf("%d", &h0);
    printf("------------------------------------------------------\n");

    if (h0 <= 200 || h0 >= 10000) {
        printf("\nMasukan Harga tidak sesuai\n");
    }
    else {
        switch (j){
        case 'A':
            d = (0.1 * h0);
            h = h0 - d;
            break;

        case 'B':
            d = (0.15 * h0);
            h = h0 - d;
            break;

        case 'C':
            d = (0.2 * h0);
            h = h0 - d;
            break;
        default:
            d = 0;
            h = h0;
            printf("\nJenis diskon tidak tersedia\n");
            break;
        }
        printf("------------------------------------------------------\n");
        printf("\nAnda mendapat diskon sebesar: Rp.%d",d);

        printf("\n\nBesarnya Harga setelah diberikan diskon adalah: Rp.%d",h);
    }

    printf("\n--------------------------------------------------------\n");
    return 0;

}


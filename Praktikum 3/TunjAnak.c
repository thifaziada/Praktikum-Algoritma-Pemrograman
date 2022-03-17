/* Nama File: TunjAnak.c */
/* Deskripsi: Menghitung besarnya tunjangan anak berdasarkan jumlah anak dan besar gaji pokok */
/* Nama: Thifa Ziada Taqiyya */
/* NIM: 24060121130080 */

#include <stdio.h>

int main() {
    /* Kamus */
    int a;
    int g;
    int t;

    /* Algoritma */
    printf("Menghitung besarnya tunjangan anak\n");
    printf("-----------------------------------------------\n");
    printf("\nMasukkan jumlah anak: ");
    scanf("%d", &a);
    printf("Masukkan gaji pokok: ");
    scanf("%d", &g);
    printf("-----------------------------------------------\n");

    if (g <= 0){
        printf("Masukan gaji tidak sesuai\n");
        printf("\n-----------------------------------------------\n");
    }
    else {
        if (a<0){
        printf("\nMasukan jumlah anak tidak sesuai\n");
        printf("\n-----------------------------------------------\n");
    }
    else if (a<=3){
        t = a * (0.1*g);
        printf("\nTunjangan anak yang diberikan adalah: Rp.%d",t);
        printf("\n-----------------------------------------------\n");
    }
    else if (a>3){
        t = 3 * (0.1*g);
        printf("\nTunjangan anak yang diberikan adalah: Rp.%d",t);
        printf("\n-----------------------------------------------\n");
    }
    }

    return 0;
}



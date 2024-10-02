#include <stdio.h>
#include <math.h>

// Fungsi untuk menghitung sisi miring
double hitungSisiMiring(double a, double b) {
    return sqrt(a * a + b * b);
}

// Prosedur untuk meminta input dari pengguna
void inputSisi(double *a, double *b) {
    printf("Masukkan panjang sisi tegak (a): ");
    scanf("%lf", a);
    printf("Masukkan panjang sisi datar (b): ");
    scanf("%lf", b);
}

int main() {
    double a, b, sisiMiring;

    // Memanggil prosedur untuk input
    inputSisi(&a, &b);

    // Menghitung sisi miring menggunakan fungsi
    sisiMiring = hitungSisiMiring(a, b);

    // Menampilkan hasil
    printf("Panjang sisi miring segitiga adalah: %.2lf\n", sisiMiring);

    return 0;
}

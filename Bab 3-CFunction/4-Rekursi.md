[<< Materi Sebelumnya (Scope)](3-Scope.md)

# 4.4 - Rekursi

Secara sederhana, rekursi adalah suatu perilaku di mana suatu fungsi **memanggil dirinya sendiri**

## Base Case

Supaya tidak terjadi **infinite loop**, maka perlu adanya **base case** untuk menghentikan proses rekursi yang sedang berjalan. Kode di atas dapat dimodifikasi menjadi:

```c
#include <stdio.h>

// Fungsi untuk menghitung faktorial secara rekursif
int faktorial(int n) {
    // Jika n adalah 0, faktorialnya 1 (dasar rekursi)
    if (n == 0) {
        return 1;
    } else {
        // Panggil diri sendiri dengan n-1
        return n * faktorial(n - 1);
    }
}

int main() {
    int angka = 5; // Angka yang akan dihitung faktorialnya
    int hasil = faktorial(angka); // Memanggil fungsi faktorial
    printf("Faktorial dari %d adalah %d\n", angka, hasil);
    return 0;
}

// Faktorial dari 5 adalah 120
```

## Contoh Kasus

Berikut adalah program untuk menghitung nilai dari 1+2+3+...+n secara rekursif

```c
#include <stdio.h>

/* fungsi untuk menghitung 1+2+3+...+n */
int hitung(int n) {
    if (n == 1) {
        return 1;
    }
    return hitung(n - 1) + n;
}

int main() {
    int angka, hasil;

    printf("Masukkan angka (n) : ");
    scanf("%d", &angka);

    /* hasil = 1+2+3+...+angka */
    hasil = hitung(angka);
    printf("Hasil perhitungan : %d\n", hasil);

    return 0;
}

/*
Output:

Masukkan angka (n) : 5
Hasil perhitungan : 15
*/
```

Analisis rekursi di atas untuk `n = 5` yaitu:

1. hitung(5) berarti hitung(4) + 5
2. hitung(4) berarti hitung(3) + 4
3. hitung(3) berarti hitung(2) + 3
4. hitung(2) berarti hitung(1) + 2
5. hitung(1) berarti 1 (rekursi berhenti)
6. maka nilai dari hitung(2) = hitung(1) + 2 = 1 + 2 = 3
7. maka nilai dari hitung(3) = hitung(2) + 3 = 3 + 3 = 6
8. maka nilai dari hitung(4) = hitung(3) + 4 = 6 + 4 = 10
9. maka nilai dari hitung(5) = hitung(4) + 5 = 10 + 5 = 15

Sehingga hasilnya 15 untuk n = 5 dan memenuhi 1+2+3+4+5 = 15

## Contoh lain (Fibonacci)

```c
#include <stdio.h>

// Fungsi untuk menghitung bilangan Fibonacci secara rekursif
int fibonacci(int n) {
    // Jika n adalah 0, hasilnya 0
    if (n == 0) {
        return 0;
    }
    // Jika n adalah 1, hasilnya 1
    else if (n == 1) {
        return 1;
    } 
    // Panggil diri sendiri untuk menghitung Fibonacci dari n-1 dan n-2
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int angka = 6; // Angka yang ingin kita cari bilangan Fibonacci-nya
    int hasil = fibonacci(angka); // Memanggil fungsi Fibonacci
    printf("Bilangan Fibonacci ke-%d adalah %d\n", angka, hasil);
    return 0;
}

```

[Menuju Daftar Materi >>](../DaftarMateri.md)

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

double hitung_volume_n_kubus(double panjang_sisi, int n) {
	double total_volume = 0.0;
	int i;

	/* ulang sebanyak n kali */
	for (i = 1; i <= n; i++) {
		/* hitung volume 1 kubus */
		double volume_satu_kubus = panjang_sisi * panjang_sisi * panjang_sisi;

		/* tambahkan ke total volume */
		total_volume = total_volume + volume_satu_kubus;
	}

	return total_volume; /* hasil dari fungsi adalah total volume seluruh kubus */
}

int main() {
    
    int hasilKubus1 = hitung_volume_n_kubus(5, 3);
    int hasilKubus2 = hitung_volume_n_kubus(10, 5);

    printf("Volume kubus 1: %d\n", hasilKubus1);
    printf("Volume kubus 2: %d\n", hasilKubus2);
    
    
    
    // int angka = 5; // Angka yang akan dihitung faktorialnya
    // int hasil1 = faktorial(5); // Memanggil fungsi faktorial
    // // 5 x 4 x 3 x 2 x 1 = 120
    // int hasil2 = faktorial(4); // Memanggil fungsi faktorial
    // // 4 x 3 x 2 x 1 = 24
    // // factorial(angka) --> faktorial(5)
    // // factorial(n) --> faktorial(5)


    // printf("%d dan %d\n", hasil1, hasil2);
    // return 0;
}

// cara panggil  fungsi
// nama_function(parameter) 

// Faktorial dari 5 adalah 120
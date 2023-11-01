#include <iostream>
using namespace std;

int main() {
    int usd_tabungan = 12000;
    int eur_tabungan = 20000;

    int kurs_usd_rupiah = 15000;
    double kurs_eur_usd = 0.997;

    // Menghitung total tabungan dalam Rupiah
    int total_tabungan_rupiah = (usd_tabungan * kurs_usd_rupiah) + (eur_tabungan * kurs_eur_usd * kurs_usd_rupiah);

    int harga_mobil_rupiah = 425000000;

    // Menghitung sisa uang setelah membeli mobil
    int sisa_uang_rupiah = total_tabungan_rupiah - harga_mobil_rupiah;

    cout << "Total tabungan Pak Anto dalam Rupiah: Rp. " << total_tabungan_rupiah << endl;
    cout << "Sisa uang Pak Anto setelah membeli mobil: Rp. " << sisa_uang_rupiah << endl;

    return 0;
}
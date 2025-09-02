#include <iostream>
using namespace std;

int main() {
    int pilihan, jumlah, total = 0;
    char lanjut;

    cout << "===== MENU KASIR =====" << endl;
    cout << "1. Nasi Goreng - Rp15000" << endl;
    cout << "2. Mie Ayam    - Rp12000" << endl;
    cout << "3. Es Teh      - Rp5000" << endl;

    // Perulangan agar bisa pesan lebih dari satu menu
    do {
        cout << "\nPilih menu (1-3): ";
        cin >> pilihan;

        cout << "Jumlah pesanan: ";
        cin >> jumlah;

        // Hitung total berdasarkan pilihan
        if (pilihan == 1) {
            total += 15000 * jumlah;
            cout << "Anda memesan " << jumlah << " Nasi Goreng" << endl;
        } else if (pilihan == 2) {
            total += 12000 * jumlah;
            cout << "Anda memesan " << jumlah << " Mie Ayam" << endl;
        } else if (pilihan == 3) {
            total += 5000 * jumlah;
            cout << "Anda memesan " << jumlah << " Es Teh" << endl;
        } else {
            cout << "Pilihan tidak valid!" << endl;
        }

        // Tanya apakah mau tambah pesanan
        cout << "Tambah pesanan lain? (y/n): ";
        cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    // Tampilkan total akhir
    cout << "\n===== STRUK PEMBELIAN =====" << endl;
    cout << "Total yang harus dibayar: Rp" << total << endl;
    cout << "Terima kasih sudah membeli!" << endl;

    return 0;
}

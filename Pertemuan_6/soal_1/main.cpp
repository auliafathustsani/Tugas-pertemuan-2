#include <iostream>
#include <string>
using namespace std;

struct barang {
    int kode;
    string nama;
    float harga;
    int jumlah;
};

int main() {
    int n = 3;  // hardcoded number of items
    int totaljumlah = 0;
    float totalharga = 0.0, ratarataharga;
    
    // Hardcoded items
    barang barang[50] = {
        {101, "Pensil", 3000.0, 10},
        {102, "Buku", 15000.0, 5},
        {103, "Penggaris", 5000.0, 8}
    };
    
    // Calculate total jumlah and total harga
    for (int i = 0; i < n; i++) {
        totaljumlah += barang[i].jumlah;
        totalharga += barang[i].harga * barang[i].jumlah;
    }

    // Calculate average price
    ratarataharga = totalharga / totaljumlah;
    
    // Print results
    cout << "Jumlah semua barang :" << totaljumlah << endl;
    cout << "Harga rata-rata barang :" << ratarataharga << endl;
    
    return 0;
}

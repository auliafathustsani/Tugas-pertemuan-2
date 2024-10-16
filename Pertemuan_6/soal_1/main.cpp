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
        {101, "Beras", 13000.0, 2},
        {102, "Tahu", 5000.0, 3},
        {103, "Wortel", 12000.0, 5}
    };
    
    // Calculate total jumlah and total harga
    for (int i = 0; i < n; i++) {
        totaljumlah += barang[i].jumlah;
        totalharga += barang[i].harga * barang[i].jumlah;
    }

    // Calculate average price
    ratarataharga = totalharga / totaljumlah;

    // Expected output (hardcoded in the program)
    int expected_jumlah = 14;
    float expected_ratarata = 10100.0;

    // Print results
    cout << "Jumlah semua barang :" << totaljumlah << endl;
    cout << "Harga rata-rata barang :" << ratarataharga << endl;

    // Check if the actual results match the expected results
    if (totaljumlah == expected_jumlah && ratarataharga == expected_ratarata) {
        cout << "Test Passed" << endl;
    } else {
        cout << "Test Failed" << endl;
    }

    return 0;
}

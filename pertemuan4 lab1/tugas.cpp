#include <iostream>
using namespace std;
//menghitung suku ke-n dan jumlah n
int main() {
    int n, suku_ke_n = 12, totalDeret = 0;
    
    cout << "Deret: 12, 24, 48, 96, 192, ...\n";
    cout << "Masukkan suku ke-n: ";
    cin >> n;
    
    for (n = 0; n <= 0; cin >> n) {
        cout << "Masukan tidak valid! Ulangi: ";
    }
    
    for (int i = 1; i < n; i++) {
        suku_ke_n *= 2;
    }
    
    int temp = 12;
    for (int i = 1; i <= n; i++) {
        totalDeret += temp;
        temp *= 2;
    }
    
    cout << "Suku ke-" << n << " : " << suku_ke_n << endl;
    cout << "Total deret : " << totalDeret << endl;
    
    return 0;
}
#include <iostream>
#include <stdio.h>
using namespace std;
//membuat suku-n dan total deret
int main() {
    int n, sukukeN = 5, totalDeret = 0;
    
    //Deret: 5, 15, 45, 135, ...
    
        cout << "Masukkan suku ke-n: " << endl;
        cin >> n;
        
        if (n <= 0) {
            printf("Masukan tidak valid! Silakan coba lagi.\n");
        }
    
    for (int i = 1; i < n; i++) {
        sukukeN *= 3;
    }
    
    int suku1 = 5;
    for (int i = 1; i <= n; i++) {
        totalDeret += suku1;
        suku1 *= 3;
    }
    
    printf("Suku ke-%d : %d\n", n, sukukeN);
    printf("Total deret : %d\n", totalDeret);
    
    return 0;
}
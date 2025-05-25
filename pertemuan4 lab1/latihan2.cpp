#include <iostream>
using namespace std;
//membuat kalimat vokal menjadi kapital
int main() {
    string kalimat;
    int i;

    cout << "Masukan Kalimat : ";
    getline(cin, kalimat);//membuat kalimat spasi kebaca
    //membuat huruf vokal menjadi kapital
    for (i = 0; i < kalimat.length(); i++) {
        char c = tolower(kalimat[i]); 
        if (c == 'a' || c == 'i' || c == 'u' || c == 'e' || c == 'o') {
            kalimat[i] = toupper(kalimat[i]);
        }
    }
    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;
    return 0;
}
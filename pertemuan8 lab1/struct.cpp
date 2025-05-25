#include <iostream>
#include <string>
#include <vector>
//membuat data mahasiswa
using namespace std;

struct Alamat {
    string jalan;
    string kota;
    int kodepos;
};

struct Mahasiswa
{
   string nama;
   int umur;
   float ipk;
   Alamat alamat; // nested  struct
};

int main() {
    Mahasiswa mhs1;
    
    // mhs1.alamat.jalan ="Jalan Sakti Lubis" ;
    // mhs1.alamat.kota =" kota Medan ";
    // mhs1.alamat.kodepos = 20155;

    // cout << " Alamat :" << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodepos<<endl;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout << "Masukan bamnyak mahasiswa :";
    cin >> n;
    
    for(int i = 0; i<n; i++){
        cout <<"Mahasiswa "<< i + 1 <<endl;

        cin.get();
        cout << "Masukan nama :";
        getline(cin, mhs1.nama);

        cout<< "Masukan Umur :";
        cin >> mhs1.umur;

        cout<< "Masukan IPK :";
        cin >> mhs1.ipk;

        mahasiswa.push_back(mhs1);
    }

    for(int i = 0; i<n ;i++){
        cout << " Mahasiswa "<< i + 1 <<endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK : " << mahasiswa[i].ipk << endl;

    }

}

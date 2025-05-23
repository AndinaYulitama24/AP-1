#include <iostream>
using namespace std;

//fungsi tanpa nilai balikan 
void tampilkanpesan(){
    cout<< "==== SELAMAT DATANG DI AP 1 ===="<<endl;
}

//fungsi dengan nilai balikan
int tambah(int a, int b){
    return a + b;
}

//funsi overload
int kali(int a, int b){
    return a * b;
}
double kali(double a, double b){
    return a * b;
}

//fungsi rekursif : menghitung nilai faktorial
int faktorial(int n){
    if(n==0 || n==1){
    return 1;
    }
    else{
        return n * faktorial(n-1);
    }
}
int main(){
    system("CLS");
    
    //menggunakan fungsi tanpa nilai balikan
    tampilkanpesan();

    int x = 5,y = 3;

    //menggunakan fungsi dengan nilai balikan
    int hasilTambah = tambah(x,y);
    cout<< "hasil penjumlahan "<< hasilTambah<<endl;

    //menggunakan funsi overloat 
    int hasilkaliInt = kali(x, y);
    double hasilKaliDouble = kali(5.5,2.0);
    cout<< " hasil perkalian (int) :"<< hasilkaliInt<< endl;
    cout <<"hasil perkalian (double) :"<< hasilKaliDouble <<endl;

    //menggunakan fungsi rekursif
    int angka = 5;
    cout <<"Faktorial dari" << angka << " adalah "<< faktorial(angka)<<endl;

}   
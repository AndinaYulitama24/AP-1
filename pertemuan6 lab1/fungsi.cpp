#include <iostream>
using namespace std;

/*fungsi tanpa nilai balikan, yaitu fungsi yang tidak mengembalikan nilai apa pun setelah eksekusi selesai*/
void tampilkanpesan(){
    cout<< "==== SELAMAT DATANG DI AP 1 ===="<<endl;
}

/*fungsi dengan nilai balikan, yaitu fungsi yang mengembalikan sebuah nilai setelah selesai menjalankan tugasnya*/
int tambah(int a, int b){
    return a + b;
}

/*funsi overload, yaitu  untuk melindungi sistem atau perangkat dari beban yang berlebihan*/
int kali(int a, int b){
    return a * b;
}
double kali(double a, double b){
    return a * b;
}

/*fungsi rekursif, yaitu menghitung nilai faktorial*/
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
    
    /*menggunakan fungsi tanpa nilai balikan,yaitu fungsi yang tidak mengembalikan nilai apa pun*/
    tampilkanpesan();

    int x = 5,y = 3;

    /*menggunakan fungsi dengan nilai balikan, yaitu sebuah fungsi memiliki kemampuan untuk mengembalikan nilai tertentu setelah eksekusi selesai*/
    int hasilTambah = tambah(x,y);
    cout<< "hasil penjumlahan "<< hasilTambah<<endl;

    /*menggunakan funsi overloat, yaitu mendefinisikan beberapa fungsi dengan nama yang sama, tetapi dengan parameter yang berbeda*/
    int hasilkaliInt = kali(x, y);
    double hasilKaliDouble = kali(5.5,2.0);
    cout<< " hasil perkalian (int) :"<< hasilkaliInt<< endl;
    cout <<"hasil perkalian (double) :"<< hasilKaliDouble <<endl;

    /*menggunakan fungsi rekursif, yaitu menggunakan suatu fungsi yang memanggil dirinya sendiri dalam definisinya*/
    int angka = 5;
    cout <<"Faktorial dari" << angka << " adalah "<< faktorial(angka)<<endl;

}   
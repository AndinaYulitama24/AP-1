#include <iostream>// header untuk c++
#include <cstdio> // header untuk getch() dan getch()
using namespace std;

int main (){
    string name;
    char kom, jeniskelamin;
    int nim;
    float ip;
    /* ini untuk komentar
    beberpa baris*/
    cout <<"hello world "<< endl;
    cout <<"masukan nama ;";
    // cin >> name;
    getline(cin,name); // agar karakter spasi bisa terbaca

    cout <<"masukan Kom :";
    cin >> kom;

    cout <<"masukan nim :";
    cin >> nim;
    
    cout <<"masukan ip :";
    cin >> ip;

    cout << "masukan jenis kelamin (L/P :)";
    jeniskelamin = getchar(); //agar karakter langsung tampil,jadi ga perlu tekan enter
    
    /* untuk output*/
    cout <<"/n"<< name <<endl;
    cout << kom << endl;
    cout << nim <<endl;
    cout << ip << endl;
    putchar(jeniskelamin); // untuk menpilkan karakter jenis kelamin

    getchar(); // karakter yang diketik ga ditampilkan
}
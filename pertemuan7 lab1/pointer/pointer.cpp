#include <iostream>
using namespace std;

void penjumlahan(int a, int b){ //parameter formal
    cout << a + b << endl;
}
void penjumlahanPointer (int *a, int *b){
    *a += *b;
    cout << *a << endl;
}

void doubleValue (int *a){
    *a *=2;
    cout << *a <<endl;
}
int main(){
    system("CLS");

    /*Deklarasi Pointer,yaitu memberi nama pada variabel pointer dan menentukan tipe objek yang ditunjuk oleh variabel tersebut*/
    int number = 35;
    int *pointer_number = &number;

    // cout << "isi variabel number = " << number <<endl;
    // cout<< " Alamat memory variabel number = "<< &number<<endl;
    // cout << "Isi variabel pointer number = "<<pointer_number<<endl;
    // cout << "Isi Variabel yang ditunjuk olej  pointer_number = "<< *pointer_number<<endl;
    // cout << "Alamat Memory variabel pointer_number = " << &pointer_number<<endl;
    // cout << endl;


    /*Pointer Operation,yaitu serangkaian tindakan yang melibatkan pointer, yaitu variabel yang menyimpan alamat memori dari variabel lain*/
    // *pointer_number = 25;
    //  cout << "isi variabel number = " << number <<endl;
    //  cout<< " Alamat memory variabel number = "<< &number<<endl;
    //  cout << "Isi variabel pointer number = "<<pointer_number<<endl;
    //  cout << "Isi Variabel yang ditunjuk olej  pointer_number = "<< *pointer_number<<endl;
    //  cout << "Alamat Memory variabel pointer_number = " << &pointer_number<<endl;
    //  cout << endl;


    /*Pointer in Array, yaitu penggunaan pointer untuk menunjuk ke elemen-elemen dalam sebuah array, atau untuk menunjuk ke array itu sendiri*/
    // int num[] = {1, 2, 3, 4, 5,};
    // int *pointer_num = num;
    //  cout << "isi variabel num = " << num[0] <<endl;
    //  cout<< " Alamat memory variabel num = "<< &num[3] <<endl;
    //  cout << "Isi variabel pointer num = "<<pointer_num <<endl;
    //  cout << "Isi Variabel yang ditunjuk olej  pointer_num = "<< *pointer_num <<endl;
    //  cout << "Alamat Memory variabel pointer_num = " << &pointer_num<<endl;
    //  cout << endl;

    //  *pointer_num += 5; // 6
    //  cout << "isi variabel num = " << num[0] <<endl;
    //  cout << "Alamat memory variabel num = "<< &num[0] <<endl;
    //  cout << "Isi variabel pointer num = "<<pointer_num <<endl;
    //  cout << "Isi Variabel yang ditunjuk olej  pointer_num = "<< *pointer_num <<endl;
    //  cout << "Alamat Memory variabel pointer_num = " << &pointer_num<<endl;
    //  cout << endl;

    /*Pointer in parameter,yaitu penggunaan pointer untuk menunjuk ke elemen-elemen dalam sebuah array, atau untuk menunjuk ke array itu sendiri*/
    // int num1 = 5;
    // int num2 = 7;
    // penjumlahan(num1, num2);
    // cout << num1 << endl;
    // cout << num2 << endl;
    // penjumlahanPointer(&num1, &num2);
    // cout << num1 << endl;
    // cout << num2 << endl;

    /*Pointer in Pointer,yaitu variabel yang menyimpan alamat memori dari sebuah pointer lain, bukan nilai langsung*/
    // int score = 4;
    // int *pointer_score = &score;
    // int **ptr_pointer_score = &pointer_score;

    // cout <<"Isi variabel score " << score << "dan alamta memorinya" << &score <<endl;
    // cout <<"Isi Variabel pointer_score " << pointer_score <<  " dan isi variabel yang ditunjuk oleh pointer score "  << *pointer_score <<" alamat memory pointer_score " << &pointer_score <<endl;
    // cout <<"Isi Variabel ptr_pointer_score " << pointer_score <<  " dan isi variabel yang ditunjuk oleh ptr_pointer_score "  << **ptr_pointer_score  <<" alamat memory ptr_pointer_score " << &ptr_pointer_score  <<endl;

    /*Dynamic pointer,yaitu pointer yang menyimpan alamat memori yang dialokasikan secara dinamis selama program berjalan*/
    // int *ptr = new int;
    // *ptr = 30;
    // cout << "isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;

    // delete ptr; //deallocation
    // cout << "isi variabel ptr = " << *ptr << " alamat variabel ptr = " << &ptr << endl;

    //contoh
    // int n;
    // cout << " masukan sebuah angka = ";
    // cin >> n;

    // doubleValue(&n);
    // cout << "nilai angka setelah di kali 2 = "<< n <<endl;

}
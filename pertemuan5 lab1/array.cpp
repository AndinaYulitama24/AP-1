#include <iostream>
#include<string>
#include<array>
using namespace std;

int main(){
    // Array Declarattion & initianlization
    /*2 cara membuat array*/ 

    //cara 1 :array kosong
    // string nama[5];

    // nama[0] ="alya";
    // nama[1] ="Parul";
    // nama[2] ="syukron";
    // nama[3] ="Aurick";
    // nama[4] ="Dzakwan";

    //cara 2 : array yang langsung diisi
    //  string nama[5]={"Alya","Parul","syukron","Aurick","Dzakwan"};
    //string nama[5]={"Alya","Parul","syukron","Aurick","Dzakwan"};

    // Ascending Element in Array
    // cout << nama[0]<<endl;
    // cout << nama[1]<<endl;
    // cout << nama[2]<<endl;
    // cout << nama[3]<<endl;
    // cout << nama[4]<<endl;

    // Menggunakan looping
    //  for (int i = 0; i < 5;i++){
    //    cout << nama[i]<<endl;
    //  }

    // Descending element in array use looping
    // for (int i = 4; i >= 0;i--){
    //     cout << nama[i]<<endl;
    // }

    //Multidemensional array 
    //1 3 5
    //2 4 6

    // int matrix[2][3] = {{1,3,5},{2,4,6}};
    // for (int i = 0; i < 2;i++){
    //     for(int j = 0; j < 3;j++){
    //         cout<<matrix[i][j]<<" ";
    //     }
    //     cout << endl;
    // }

    // int matrix[4][6] = {{1,3,5,7,9,11},{2,4,6,8,10,12},{1,2,3,4,5,6},{3,4,5,6,7,8}};
    //  for (int i=0;i<4;i++){
    //      for(int j = 0;j < 6;j++){
    //         cout<<matrix[i][j]<<"\t"; 
    //     }
    //      cout << endl;
    //  }

    //String (array of characters)
    // string nama ="Andin";
    // cout<< nama [0]<<endl;
    // cout<< nama [2]<<endl;

    // for(int i = 0;i < nama.length(); i++){
    //     cout << nama [i]<<endl;
    // }

    // string s1 ="Hallo";
    // string s2 ="world";

    /*1. s1 = s2*/
    // s1 = s2;
    // cout <<"s1 ="<<s1<<endl;

    /*n2. s1 =s1 +s2 */
    // s1 ="Hello";
    // cout<<"hasil:"<<s1 +s2<<endl;

    /*3.s1.length*/
    // cout <<s1.length()<<endl;
    // cout<<(s1 + s2).length()<<endl;

    /*4. s1.substr(n,m)*/
    // cout<<s1.substr(2,4)<<endl;
    // cout<<(s1+s2).substr(5,3)<<endl;

    // Operator sizeof()
    // int angka =10;
    // cout << sizeof(angka);

    // int nilai[]={10,20,30,40,50};
    // cout<<sizeof(nilai);

    // string s="Andin";
    // cout<<sizeof(s);
    // cout << s.length();

    // string name_karyawan[] = {"Alya","Parul","syukron","Aurick","Dzakwan"};
    // int n = sizeof(name_karyawan)/sizeof(string);
    // cout<<n<<endl;

   //Array library
//    array<float, 5> nilai = {87.2,900,100,95.7,78.5};
//    cout<<"nilai :";
//    for(int i = 0;1 < nilai.size();i++){
//     cout<<nilai[i]<<" ";
//    }
//    for(float n : nilai){
//     cout<<n<<" ";
//    }
}
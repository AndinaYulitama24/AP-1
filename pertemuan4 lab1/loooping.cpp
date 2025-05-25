#include <iostream>
using namespace std;
//menghitung jumlah deret
int main(){
    int bil,i;
    float jumlah;
    cout<<"input bilangan :";
    cin>>bil;
    jumlah=0;
    for(i=1;i<=bil;i++){
        jumlah=jumlah+(float)i/(i+1); //rumus
    }
    cout.precision(3);
    cout<<"jumlah adalah:"<<jumlah;
}
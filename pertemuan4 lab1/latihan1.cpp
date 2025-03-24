#include <iostream>
using namespace std;
int main(){
    string kalimat;
    int i;

    cout<<"Masukan Kalimat :";
    getline(cin, kalimat);

    for(i = 0; i < kalimat.length();i++){
        kalimat[i] = toupper(kalimat[i]);
    }
    cout <<"kalimat dalm huruf kapitaln :"<<kalimat<<endl;

    return 0;
    }
#include <iostream>
using namespace std ;

class ContohAkses {
    private :
        int privateVar;

    protected :
        int protectedVar;

    public :
        int publicVar;
    
    // constructor
    ContohAkses(){
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3 ;
    }

    void tampilkanSemua(){
        cout <<" Akses dari dalam class :"<< endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

class Turunan : public ContohAkses {
    public :
    void aksesProctected(){
        cout << protectedVar << endl;
        cout << publicVar << endl;
        // cout << privateVar << endl; //errorgb   
    }
};

int main(){
    ContohAkses obj;
    obj.tampilkanSemua();

    cout << "\nAkses dari luar class :" << endl;
    // cout << obj.privateVar << endl; // error
    // cout << obj.protectedVar << endl; // error
    cout << obj.publicVar << endl;

    cout <<"\n Akses dari kelas Turunana "<< endl;
    Turunan tur;
    tur.aksesProctected();


}
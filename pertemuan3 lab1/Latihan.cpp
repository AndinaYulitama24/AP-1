#include <iostream>
using namespace std;
int main(){
    int nilai ;
    
    system("CLS");

    cout << "masukan nilai: " ;
    cin >> nilai;

    if (nilai % 10==0){
        cout<<"masuk bilang kelipan 10\n";
    }
    else if (nilai % 5==0)
    {
        cout<<"masuk bilang kelipan 5\n";
    }
    else{
        cout<<"tidak masuk keduannya\n";
    }
    

}

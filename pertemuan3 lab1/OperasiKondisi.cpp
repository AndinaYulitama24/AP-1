#include <iostream>
using namespace std;

int main(){
    int nilai ;
    
    system("CLS");

    cout << "masukan nilai: " ;
    cin >> nilai;

    //^if statement
    // if(nilai <= 65){
    //    cout <<"anda tidak lulus"<<endl;
    // }

    //^if-else statement
    //if (nilai<= 65){
    //   cout <<"anda tidak lulus" ;

    // }else{
    //  cout<<"anda lulus !"<<endl;
    // }

    //^if eles if statement
    // if (nilai==100){
    //  cout<<"anda keceh"<<endl;

    //}else if (nilai <= 65){
    //    cout<<"anda tidak lulus"<<endl;
    //}else{
    //   cout<<"anda lulus "<<endl;
    //}

    //^nested if
    //if(nilai <= 65){
    //    cout<<"anda tidak lulus"<<endl;
    //}else {
    //    if (nilai==100){
    //        cout<<"anda lulus dan anda keceh"<<endl;
    //    } else {
    //        cout<<"anda lulus"<<endl;
    //    }
    //}

    //^switch case
//switch (nilai){
//      case 1:
//          cout<<"senin"<<endl;
//          break;
//      case 2:
//          cout<<"selasa"<<endl;
//          break;
//      case 3:
//          cout<<"rabu"<<endl;
//          break;
//      case 4:
//          cout<<"kamis"<<endl;
//          break;
//      case 5:
//          cout<<"jum'at"<<endl;
//          break;
//      case 6:
//          cout<<"sabtu"<<endl;
//          break;
//      case 7:
//          cout<<"minggu"<<endl;
//          break;
//      default: 
//          cout << "inputan tidak valid"<<endl;
//          break;
//    }

//^switch range
//switch (nilai){
//    case 85 ... 100 : cout<<"A"<<endl; break;
//    case 80 ... 84 : cout<<"B+"<<endl; break;
//    case 75 ... 79 : cout<<"B"<<endl; break;
//    case 70 ... 74 : cout<<"C+"<<endl; break;
//    case 65 ... 69 : cout<<"C"<<endl; break;
//    case 60 ... 64 : cout<<"D+"<<endl; break;
//    default : cout<<"E"<<endl;break;
    
//}

// ^ternary operatot
// if (nilai % 2==0){
//    cout<< "genap nih"<< endl;
//} else {
//     cout<<" ganjil sih"<<endl;
//}
// string checkNum =(nilai % 2==0)? "genap":"ganjil";
// cout<<nilai<<"tuh bilangan "<<checkNum << "sih "<<endl;

}
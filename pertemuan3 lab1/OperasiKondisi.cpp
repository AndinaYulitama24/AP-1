#include <iostream>
using namespace std;

int main(){
    int nilai ;
    
    system("CLS");

    cout << "masukan nilai: " ;
    cin >> nilai;

    /*if statement,yaitu pernyataan yang kondisinya terpenuhi*/
    // if(nilai <= 65){
    //    cout <<"anda tidak lulus"<<endl;
    // }

    /*if-else statement,yaitu pernyataan yang berdasarkan kondisi yang diberikan*/

    //if (nilai<= 65){
    //   cout <<"anda tidak lulus" ;
    // }else{
    //  cout<<"anda lulus !"<<endl;
    // }

    //^if eles if statement,yaitu pernyataan if maupun else dapat berupa pernyataan tunggal mauupun majemuk*/

    // if (nilai==100){
    //  cout<<"anda keceh"<<endl;
    //}else if (nilai <= 65){
    //    cout<<"anda tidak lulus"<<endl;
    //}else{
    //   cout<<"anda lulus "<<endl;
    //}

    /*nested if,yaitu sebuah struktur percabangan yang bisa juga di dalam struktur percabangan yang lain*/

    //if(nilai <= 65){
    //    cout<<"anda tidak lulus"<<endl;
    //}else {
    //    if (nilai==100){
    //        cout<<"anda lulus dan anda keceh"<<endl;
    //    } else {
    //        cout<<"anda lulus"<<endl;
    //    }
    //}

/*switch case,yaitu pernyataan yang digunakan untuk menjalan kan salah satu pernyataan dari beberapa kemukinan pernyataan*/
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

/*switch range,yaitu pernyataan switch untuk membandingkan nilai dengan rentang nilai*/
//switch (nilai){
//    case 85 ... 100 : cout<<"A"<<endl; break;
//    case 80 ... 84 : cout<<"B+"<<endl; break;
//    case 75 ... 79 : cout<<"B"<<endl; break;
//    case 70 ... 74 : cout<<"C+"<<endl; break;
//    case 65 ... 69 : cout<<"C"<<endl; break;
//    case 60 ... 64 : cout<<"D+"<<endl; break;
//    default : cout<<"E"<<endl;break;
    
//}

/*ternary operator, yaitu untuk mengekspresikan pernyataan kondisional dalam satu baris kode*/
// if (nilai % 2==0){
//    cout<< "genap nih"<< endl;
//} else {
//     cout<<" ganjil sih"<<endl;
//}
// string checkNum =(nilai % 2==0)? "genap":"ganjil";
// cout<<nilai<<"tuh bilangan "<<checkNum << "sih "<<endl;

}
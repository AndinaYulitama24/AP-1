#include <iostream>

using namespace std;

int main() {
  
  float jari_jari, volume, luas_permukaan;
  const float pi = 3.14159265358979323846; 

  cout << "Masukkan jari-jari bola: ";
  cin >> jari_jari;

  volume = (float)4 / (float)3 * pi * jari_jari * jari_jari * jari_jari;
  luas_permukaan = 4 * pi * jari_jari * jari_jari;

  cout << "Volume bola: " << volume << endl;
  cout << "Luas permukaan bola: " << luas_permukaan << endl;

  return 0;
}
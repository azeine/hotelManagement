#include <iostream>
#include <string>

using namespace std;

void mainMenu() {
  cout << "1. Fitur1" << "\n";
  cout << "2. Fitur2" << "\n";
  cout << "3. Fitur3" << "\n";
  cout << "4. Exit" << endl;
}

void choice() {
  cout << "Masukan Pilihan: ";
  int inp = 0;
  cin >> inp;
  switch (inp) {
    case 1:
      // Fitur 1
      break;
    case 2:
      // Fitur 2
      break;
    case 3:
      // Fitur 3
      break;
    case 4:
      system("CLS");
      exit(0);
      break;
    default:
      system("CLS");
      cout << "ERROR : Masukan pilihan yang benar" << endl;
      mainMenu();
      choice();
      break;
  }
}

int main() {
  system("CLS");
  cout << "Selamat datang ke Aplikasi Managemen Hotel\n" << endl;
  mainMenu();
  choice();
  return 0;
}
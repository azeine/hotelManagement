#include <iostream>
#include <string>

using namespace std;

/* Cross-platform clear screen
https://stackoverflow.com/questions/228617/ */
void clear_screen() {
  #ifdef _WIN32
    system("cls");
  #else
    system("clear");
  #endif
}

void mainMenu() {
  cout << "1. Tentang Kami" << "\n";
  cout << "2. Fitur2" << "\n";
  cout << "3. Fitur3" << "\n";
  cout << "4. Exit" << endl;
}

void about() {
  clear_screen();
  cout << "Kami Kelompok 4 \n";
  cout << "1. Azis \n";
  cout << "2. Rifki \n";
  cout << "3. Rafki \n";
  cout << "4. Sahel \n";
  cout << "5. Rivaldy\n";
}
 
void choice() {
  cout << "Masukan Pilihan: ";
  int inp = 0;
  cin >> inp;
  switch (inp) {
    case 1:
      about();
      break;
    case 2:
      // Fitur 2
      break;
    case 3:
      // Fitur 3
      break;
    case 4:
      clear_screen();
      exit(0);
      break;
    default:
      clear_screen();
      cout << "ERROR : Masukan pilihan yang benar" << endl;

      /* Fix infinite cout if user entered other than int. 
      https://stackoverflow.com/questions/23162950/ */
      cin.clear();
      string discard;
      getline(cin, discard);

      mainMenu();
      choice();
      break;
  }
}

int main() {
  clear_screen();
  cout << "Selamat datang ke Aplikasi Managemen Hotel\n" << endl;
  mainMenu();
  choice();
  return 0;
}

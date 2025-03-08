#include <iostream>
using namespace std ;

int main () {
    string nama;
    string Password;
    int Pilihian ;

void menu () ;
{
    cout << "===================================================" << endl;
    cout << "               PROGRAM CHECK PASSWORD              " << endl ;
    cout << "===================================================" << endl ;
    cout << "1. Untuk Membuat username dan password" << endl ;
    cout << "2. Untuk mengcheck password" << endl ;
    cout << "3. untuk mengakhiri program" << endl ;
    cout <<"----------------------------------------------------" ;
    cout << "Masukan Pilihan 1/2/ : " ; cin >> Pilihian ;
    cout << endl ;
}
    void buatpw () ;
    cout << "Msukan username : ";
    cin >> nama ;
    cout << "Masukan Password : ";
    cin >> Password ;

    void checkpw () ;   
    cout << "password kamu adalah = " << Password << endl ;

    switch (Pilihian)
    {
    case 1 :
    buatpw () ;
        break;
    case 2 :
    checkpw () ;
        break;
    case 4 :
        menu ();
    break;    
    
    default:
    cout << "Pilihan Tidak Ada Check Kembali" ;
        break;
    }
    return 0 ;
}

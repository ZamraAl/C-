#include <iostream>
using namespace std;

int main() {
    string nama;
    string Password;

    cout << "|============================================================================================================|" << endl;
    cout << "|                                          Warung Teteh                                                      |" << endl;
    cout << "|============================================================================================================|" << endl;
    cout << "| Hai Kamu Selamat Datang Di Warung Teteh                                                                    |" << endl;
    cout << "| Silahkan Login Terlebih dahulu yaa, Dengan username (Nama Kalian) dan Password (WARUNGTETEH                |" << endl;
    cout << "|============================================================================================================|" << endl;

    cout << "" << endl ;

    while (true)
    {
    cout << "Msukan username : ";
    cin >> nama ;
    cout << "Masukan Password : ";
    cin >> Password ;

    if (Password=="WARUNGTETEH") {
       cout << "" << endl ;
       cout << "Selamat datang " << nama << endl ;
       cout << "Kamu bisa langusng pesan menu di bawah ini yaa : " << endl ;
       break;
    } else {
    cout << "Password kamu salah !!! Silahkan coba lagi" << endl ;
    cout << "" << endl ;
    } 
    }

     cout << "" << endl ;

    cout << "=======Menu Makanan=======" << endl;
    cout << "1 - Nasi Putih    - 5000" << endl;
    cout << "2 - Nasi Uduk     - 7000" << endl;
    cout << "3 - Pecel Ayam    - 17000" << endl;
    cout << "4 - Pecel Lele    - 15000" << endl;
    cout << "5 - Ikan Bakar    - 18000" << endl;
    cout << "6 - Bebek Bakar   - 20000" << endl;
    cout << "7 - Aneka Pop ice - 5000" << endl;
    cout << "8 -    Teh        - 5000" << endl;
    cout << "9 -    Jeruk      - 7000" << endl;
    cout << "=======Silahkan Diisi=======" << endl;
    cout << "Jika Sudah selesai silahkan masukan nomor 10 untuk mengakhiri pesanan" << endl;

    string Pesan = "";
    int Harga = 0;

    while (true) {
        string Menu;
        string Jumlah;

        cout << "" << endl ;
        cout << "Masukan Nomor Menu : ";
        cin >> Menu;
        if (Menu == "10") {
            break;  
        }

        cout << "Masukan Jumlah Pesanan : ";
        cin >> Jumlah;

        cout << "===========================================" << endl;
        
        
        if (Menu == "1") {
            Pesan.append(" Nasi Putih");
            Harga += 5000 ;
            cout << "Nasi Putih berjumlah " << Jumlah << " telah di tambahkan" << endl ; 
        } else if (Menu == "2") {
            Pesan.append(" Nasi Uduk");
            Harga += 7000 ;
            cout << "Nasi Uduk berjumlah " << Jumlah << " telah di tambahkan" << endl ; 
        } else if (Menu == "3") {
            Pesan.append(" Pecel Ayam");
            Harga += 17000 ;
             cout << "Pecel Ayam berjumlah " << Jumlah << " telah di tambahkan" << endl ;
        } else if (Menu == "4") {
            Pesan.append(" Pecel Lele");
            Harga += 15000 ;
            cout << "Pecel Lele berjumlah " << Jumlah << " telah di tambahkan" << endl ; 
        } else if (Menu == "5") {
            Pesan.append(" Ikan Bakar");
            Harga += 18000 ;
            cout << "Ikan Bakar berjumlah " << Jumlah << " telah di tambahkan" << endl ;
        } else if (Menu == "6") {
            Pesan.append(" Bebek Bakar");
            Harga += 20000 ;
            cout << "Bebek Bakar berjumlah " << Jumlah << " telah di tambahkan" << endl ; 
        } else if (Menu == "7") {
            string Rasa;
            Pesan.append("Pop ice");
            cout << "Masukan rasa pop ice: ";
            cin >> Rasa;
            Harga += 5000 ;
            cout << "Pop ice rasa " << Rasa << " berjumlah "  << Jumlah << " telah di tambahkan" << endl ;
        } else if (Menu == "8") {
            string DH;
            string Teh;
            Pesan.append("Teh") ;
            cout << "Dingin atau hangat ? ";
            cin >> DH;
            cout << "Teh tawar atau teh manis ? ";
            cin >> Teh;
            Harga += 5000 ;
            cout << "Teh " << Teh << " Dengan Suhu " << DH << " berjumlah "  << Jumlah << " telah di tambahkan" << endl ;
        } else if (Menu == "9") {
            string DH;
            Pesan.append("Jeruk");
            cout << "Dingin atau hangat ? ";
            cin >> DH;
            Harga += 7000 ;
            cout << "Jeruk " << "Dengan Suhu " << DH << " berjumlah "  << Jumlah << " telah di tambahkan" << endl ;
        } else {
            cout << "Pesanan tidk ada di menu, Silahkan check kembali!!" << ends;
        }
    }    

    
    cout << "|===========================================|" << endl;
    cout << "|            DAFTAR PEMBELIAN               |" << endl;
    cout << "|===========================================|" << endl;
    cout << "|" <<          "-"<< Pesan + "," <<                     "|" << endl;
    cout << "|===========================================|" << endl;
    cout << "|Total Harga: " << Harga << " Rupiah                  |" << endl;
    cout << "|===========================================|" << endl;
    
   
    
}

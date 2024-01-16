#include <iostream>

using namespace std;
int main()
{
    /// mendeklarasikan nilai
    int total_makan, jumlah_porsi, total_minuman, jumlah_minuman, jumlah_semua;
    char menu_makan, menu_minuman;
    string nama_makan, nama_minuman;
    /// membuat daftar menu makanan
    cout << "|============================================|" << endl;
    cout << "|         : RASA NUSANTARA WARUNG KULINER :        |" << endl;
    cout << "|============================================|" << endl;
    cout << "|           : Pilih Menu Makanan :           |" << endl;
    cout << "|============================================|" << endl;
    cout << "|==          1. Mie ayam     RP : 15000    ==|" << endl;
    cout << "|==          2. Bakso        RP : 13000    ==|" << endl;
    cout << "|==          3. Nasi Goreng  RP : 15000    ==|" << endl;
    cout << "|============================================|" << endl;
    cout << "Pilih Menu makanan (1/2/3) : ";
    cin >> menu_makan;
    cout << "Jumlah Porsi : ";
    cin >> jumlah_porsi;
    cout << endl;
    // menghitung jumlah pesanan makanan
    if (menu_makan == '1')
    {
        total_makan = jumlah_porsi * 15000;
        cout << "Mie ayam " << jumlah_porsi << " mangkok "
             << "RP " << total_makan << endl;
        nama_makan = "Mie Ayam";
    }
    else if (menu_makan == '2')
    {
        total_makan = jumlah_porsi * 13000;
        cout << "Bakso " << jumlah_porsi << " mangkok "
             << "RP " << total_makan << endl;
        nama_makan = "Bakso";
    }
    else if (menu_makan == '3')
    {
        total_makan = jumlah_porsi * 15000;
        cout << "Nasi Goreng " << jumlah_porsi << " mangkok "
             << "RP " << total_makan << endl;
        nama_makan = "Nasi Goreng";
    }
    else
    {
        cout << "Pilihan tidak tersedia" << endl;
    }
    cout << endl;
    cout << endl;
    // daftar menu minuman
    cout << "|============================================|" << endl;
    cout << "|           : Pilih Menu minuman :           |" << endl;
    cout << "|============================================|" << endl;
    cout << "|==          1. es campur   RP : 5000      ==|" << endl;
    cout << "|==          2. es teh      RP : 3000      ==|" << endl;
    cout << "|==          3. es jeruk    RP : 5000      ==|" << endl;
    cout << "|============================================|" << endl;
    cout << "Pilih Menu Minuman (1/2/3) : ";
    cin >> menu_minuman;
    cout << "Jumlah Porsi : ";
    cin >> jumlah_minuman;
    cout << endl;
    // menghitung menu minuman
    if (menu_minuman == '1')
    {
        total_minuman = jumlah_minuman * 5000;
        cout << "es campur " << jumlah_minuman << " gelas "
             << "RP " << total_minuman << endl;
        nama_minuman = "es campur";
    }
    else if (menu_minuman == '2')
    {
        total_minuman = jumlah_minuman * 3000;
        cout << "Es Teh " << jumlah_minuman << " Gelas "
             << "RP " << total_minuman << endl;
        nama_minuman = "Es teh";
    }
    else if (menu_minuman == '3')
    {
        total_minuman = jumlah_minuman * 5000;
        cout << "Es Jeruk " << jumlah_minuman << " Gelas "
             << "RP " << total_minuman << endl;
        nama_minuman = "Es Jeruk";
    }
    else
    {
        cout << "Pilihan Tidak Tersedia";
    }
    // jumlah hasil
    jumlah_semua = total_minuman + total_makan;
    cout << endl;
    cout << endl;
    cout << "|========================================|" << endl;
    cout << "|===== : Total Yang Harus Di Bayar :=====|" << endl;
    cout << "|========================================|" << endl;
    cout << "|==== Nama Makanan : " << nama_makan << "   =============|" << endl;
    cout << "|==== Porsi        : " << jumlah_porsi << "    =============|" << endl;
    cout << "|==== Nama Minuman : " << nama_minuman << "    ===========|" << endl;
    cout << "|==== porsi        : " << jumlah_minuman << "     ==============|" << endl;
    cout << "|========================================|" << endl;
    cout << "|====== : Yang Harus Dibayar : ==========|" << endl;
    cout << "|========================================|" << endl;
    cout << "|==== RP " << jumlah_semua << "  ========================|" << endl;
    cout << "|========================================|" << endl;
}
// activitystruct 1_0203.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct DetailAlamat {
    string kota;
    string desa;
};

struct Mahasiswa {
    string nim;
    string nama;
    DetailAlamat alamat;
    int umur;
};




int main(){
    Mahasiswa mhs;
    cout << "Nomor Mahasiswa:";
    cin >> mhs.nim;
    cout << "Nama Mahasiswa:";
    cin >> mhs.nama;


}
// contoh 3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct DetailAlamat {
	string desa;
	string kota;
	string provinsi;
};

struct Mahasiswa {
	string nim;
	string nama;
	DetailAlamat alamat;
	int umur;
};


int main()
{
	Mahasiswa mhs;
	cout << "Nomor Mahasiswa = ";
	cin >> mhs.nim;
	getline(cin, mhs.nim);
	cout << "Nama Mahasiswa = ";
	getline(cin, mhs.nama);

	cout << "Alamat Mahasiswa = " << endl;
	cout << "\t nama Desa = ";
	cin >> mhs.alamat.desa;
	cout << "\t nama Kota = ";
	cin >> mhs.alamat.kota;
	cout << "Umur Mahasiswa=";
	cin >> mhs.umur;
}

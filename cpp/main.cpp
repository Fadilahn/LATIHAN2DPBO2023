// Import Library
#include <iostream>
#include <string>

// import file kelas
#include "SivitasAkademik.cpp"
#include "CRUD.cpp"
#include "Table.cpp"

// Menggunakan namespace std agar tidak perlu menuliskan "std::" sebelum penggunaan objek class di dalam namespace std
using namespace std;

// Definisi fungsi untuk mendapatkan input data SivitasAkademik dari pengguna
SivitasAkademik getInputData(){

// Mendeklarasikan variabel-variabel lokal untuk menyimpan input data SivitasAkademik
string NIK, nama, jenis_kelamin, NIM, fakultas, prodi, asal_universitas, email_edu;

    // Menampilkan pesan ke layar dan meminta input dari pengguna untuk setiap variabel
    cout << "Enter NIK: ";
    cin >> NIK;
    cout << "Enter nama: ";
    cin >> nama;
    cout << "Enter jenis kelamin: ";
    cin >> jenis_kelamin;
    cout << "Enter NIM: ";
    cin >> NIM;
    cout << "Enter fakultas: ";
    cin >> fakultas;
    cout << "Enter program studi: ";
    cin >> prodi;
    cout << "Enter asal universitas: ";
    cin >> asal_universitas;
    cout << "Enter email edu: ";
    cin >> email_edu;

    // Membuat objek SivitasAkademik dari data yang telah diinputkan dan mengembalikannya dari fungsi
    SivitasAkademik sivitas(NIK, nama, jenis_kelamin, NIM, fakultas, prodi, asal_universitas, email_edu);
    return sivitas;
}

// Definisi fungsi untuk mendapatkan input index data dari pengguna
int getInputIdx(){

    // Mendeklarasikan variabel lokal untuk menyimpan input index data dari pengguna
    int num;

    // Menampilkan pesan ke layar dan meminta input index dari pengguna
    cout << "Enter number: ";
    cin >> num;

    // Mengembalikan input index yang telah dimodifikasi untuk mengakomodasi indeks dimulai dari 0 pada struktur data yang digunakan di dalam program
    return num-1;
}

int main() {

    Table<SivitasAkademik> table;
    // membuat objek Table dengan tipe parameter SivitasAkademik, yang memiliki header dan lebar kolom
    table.setHeaders({"No", "NIK", "Name", "Jenis Kelamin", "NIM", "Fakultas", "Prodi", "Universitas", "Email"});
    // set judul kolom pada tabel
    table.setWidths({3, 10, 15, 15, 10, 15, 15, 20, 20});
    // set lebar kolom pada tabel

    CRUD<SivitasAkademik> crud;
    // membuat objek CRUD dengan tipe parameter SivitasAkademik
    string border1 = table.getBorder(50, '='),
    border2 = table.getBorder(15, '-');
    // set border untuk tabel dengan tipe dan lebar tertentu

    while (true) {
        int idx;
        SivitasAkademik sivitas;

        // desain tampilan
        cout << endl;
        cout << border1 << endl;
        // menampilkan border tabel pada konsol
        cout << "Write number for choice" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Modify Student" << endl;
        cout << "3. Delete Student" << endl;
        cout << "4. Display Student List" << endl;
        cout << "0. Exit" << endl;
        cout << border1 << endl;
        // menampilkan pilihan aksi pada konsol

        // input pilihannya
        int choice;
        cout << "-> ";
        cin >> choice;
        cout << border2 << endl;
        // menerima input pilihan aksi dari user

        if (choice == 1) {
            sivitas = getInputData();
            // meminta input data dari user untuk menambahkan data mahasiswa baru
            crud.create(sivitas); 
            // menambahkan data mahasiswa baru ke dalam database
        } 
        else if (choice == 2) {
            idx = getInputIdx();
            // meminta input nomor indeks dari user untuk mengubah data mahasiswa
            sivitas = getInputData();
            // meminta input data mahasiswa baru dari user
            crud.update(idx, sivitas);
            // mengubah data mahasiswa pada database
        }
        else if (choice == 3) {
            idx = getInputIdx();
            // meminta input nomor indeks dari user untuk menghapus data mahasiswa
            crud.remove(idx);
            // menghapus data mahasiswa pada database
        }
        else if (choice == 4) {
            table.displayHeader();
            // menampilkan header tabel pada konsol
            table.displayData(crud.getFieldValues()); 
            // menampilkan data mahasiswa pada konsol
        }
        else if (choice == 0) {
            break;
            // keluar dari program
        }
        else {
            cout << "Invalid choice" << endl;
            // menampilkan pesan error jika input user tidak valid
        }
    }

    return 0;
}

/*
1
Fadhillah
Laki-laki
2107135
FPMIPA
Ilmu_Komputer
UPI
a@upi.edu

2
V
P
2
FPMIPA
Biologi
UPI
b@upi.edu
*/
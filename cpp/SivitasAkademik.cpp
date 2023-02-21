#include <iostream> //mengimpor library iostream
#include <string> //mengimpor library string
#include <vector> //mengimpor library vector

using namespace std; //menggunakan namespace std

#include "Mahasiswa.cpp" //mengimpor file Mahasiswa.cpp

class SivitasAkademik : public Mahasiswa { //membuat kelas SivitasAkademik yang merupakan turunan dari kelas Mahasiswa
    protected: //mendefinisikan akses proteksi
        string asal_universitas; //mendeklarasikan variabel asal_universitas bertipe string
        string email_edu; //mendeklarasikan variabel email_edu bertipe string

    public: //mendefinisikan akses publik

        SivitasAkademik() : Mahasiswa(){} //mendefinisikan konstruktor default untuk kelas SivitasAkademik yang juga memanggil konstruktor default dari kelas Mahasiswa

        SivitasAkademik(string NIK, string nama, string jenis_kelamin, string NIM, string fakultas, string prodi, string asal_universitas, string email_edu) 
        : Mahasiswa(NIK, nama, jenis_kelamin, NIM, fakultas, prodi) { //mendefinisikan konstruktor dengan parameter untuk kelas SivitasAkademik yang juga memanggil konstruktor dengan parameter dari kelas Mahasiswa
            this->asal_universitas = asal_universitas; //menginisialisasi variabel asal_universitas dengan nilai yang diterima melalui parameter
            this->email_edu = email_edu; //menginisialisasi variabel email_edu dengan nilai yang diterima melalui parameter
        }

        vector<string> getFieldValues() { //mendefinisikan fungsi getFieldValues bertipe vector<string>
            vector<string> values; //mendeklarasikan variabel values bertipe vector<string>
            values.push_back(NIK); //menambahkan nilai NIK ke dalam vektor values
            values.push_back(nama); //menambahkan nilai nama ke dalam vektor values
            values.push_back(jenis_kelamin); //menambahkan nilai jenis_kelamin ke dalam vektor values
            values.push_back(NIM); //menambahkan nilai NIM ke dalam vektor values
            values.push_back(fakultas); //menambahkan nilai fakultas ke dalam vektor values
            values.push_back(prodi); //menambahkan nilai prodi ke dalam vektor values
            values.push_back(asal_universitas); //menambahkan nilai asal_universitas ke dalam vektor values
            values.push_back(email_edu); //menambahkan nilai email_edu ke dalam vektor values
            return values; //mengembalikan nilai dari vektor values
        }

        ~SivitasAkademik(){} //mendefinisikan destruktor untuk kelas SivitasAkademik
};
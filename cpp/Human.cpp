// import library
#include <iostream>
#include <string>

// deklarasi std agar tidak ditulis ulang
using namespace std;

// kelas dasar Human, untuk merepresentasikan manusia
class Human {
    // variabel-variabel yang hanya dapat diakses oleh kelas turunan
    protected:
        string NIK;
        string nama;
        string jenis_kelamin;

    public:
        // konstruktor kosong
        Human(){}

        // konstruktor dengan parameter
        Human(string NIK, string nama, string jenis_kelamin) {
            this->NIK = NIK;
            this->nama = nama;
            this->jenis_kelamin = jenis_kelamin;
        }

        // destruktor kosong
        ~Human(){

        }
};
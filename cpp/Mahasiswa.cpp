// import liblary
#include <iostream>
#include <string>

using namespace std;

// import class Human
#include "Human.cpp"

// class Mahasiswa yang merupakan turunan dari class Human
class Mahasiswa : public Human {
    protected:
        string NIM;
        string fakultas;
        string prodi;

    public:

        // constructor tanpa parameter
        Mahasiswa() : Human(){}

        // constructor dengan parameter
        Mahasiswa(string NIK, string nama, string jenis_kelamin, string NIM, string fakultas, string prodi) : Human(NIK, nama, jenis_kelamin){
            this->NIM = NIM;
            this->fakultas = fakultas;
            this->prodi = prodi;
        }

        // destructor
        ~Mahasiswa(){

        }
};
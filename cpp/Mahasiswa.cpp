#include <iostream>
#include <string>

using namespace std;

#include "Human.cpp"

class Mahasiswa : public Human {
    protected:
        string NIM;
        string fakultas;
        string prodi;

    public:

        Mahasiswa() : Human(){}

        Mahasiswa(string NIK, string nama, string jenis_kelamin, string NIM, string fakultas, string prodi) : Human(NIK, nama, jenis_kelamin){
            this->NIM = NIM;
            this->fakultas = fakultas;
            this->prodi = prodi;
        }

        ~Mahasiswa(){

        }
};

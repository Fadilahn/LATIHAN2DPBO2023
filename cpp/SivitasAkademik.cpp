#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "Mahasiswa.cpp"

class SivitasAkademik : public Mahasiswa {
    protected:
        string asal_universitas;
        string email_edu;

    public:

        SivitasAkademik() : Mahasiswa(){

        }

        SivitasAkademik(string NIK, string nama, string jenis_kelamin, string NIM, string fakultas, string prodi, string asal_universitas, string email_edu) : Mahasiswa(NIK, nama, jenis_kelamin, NIM, fakultas, prodi) {
            this->asal_universitas = asal_universitas;
            this->email_edu = email_edu;
        }

        vector<string> getFieldValues() {
            vector<string> values;
            values.push_back(NIK);
            values.push_back(nama);
            values.push_back(jenis_kelamin);
            values.push_back(NIM);
            values.push_back(fakultas);
            values.push_back(prodi);
            values.push_back(asal_universitas);
            values.push_back(email_edu);
            return values;
        }

        ~SivitasAkademik(){}
};
#include <iostream>
#include <string>

using namespace std;

class Human {
    protected:
        string NIK;
        string nama;
        string jenis_kelamin;

    public:

        Human(){}

        Human(string NIK, string nama, string jenis_kelamin) {
            this->NIK = NIK;
            this->nama = nama;
            this->jenis_kelamin = jenis_kelamin;
        }

        ~Human(){

        }
};
// import library
#include <iostream>
#include <vector>

// deklarasi std agar tidak ditulis ulang
using namespace std;

// kelas CRUD (Create, Read, Update, Delete) untuk manipulasi data
template<class T>
class CRUD {
    private:
        vector<T> data; // deklarasi vector data yang digunakan untuk menyimpan data

    public:
        CRUD(){}

        // method create digunakan untuk menambahkan data ke dalam vector data
        void create(T obj) {
            data.push_back(obj);
        }

        // method update digunakan untuk mengubah data pada index tertentu di dalam vector data
        void update(int index, T obj) {
            // jika index yang dimasukkan berada di luar jangkauan vector data, tampilkan pesan kesalahan
            if (index < 0 || index >= data.size()) {
                cout << "Index out of range" << endl;
                return;
            }
            data[index] = obj; // jika index yang dimasukkan berada dalam jangkauan vector data, ubah data pada index tersebut
        }

        // method remove digunakan untuk menghapus data pada index tertentu di dalam vector data
        void remove(int index) {
            // jika index yang dimasukkan berada di luar jangkauan vector data, tampilkan pesan kesalahan
            if (index < 0 || index >= data.size()) {
                cout << "Index out of range" << endl;
                return;
            }
            data.erase(data.begin() + index); // jika index yang dimasukkan berada dalam jangkauan vector data, hapus data pada index tersebut
        }

        // method getFieldValues digunakan untuk mendapatkan nilai setiap field dari data di dalam vector data
        vector<vector<string>> getFieldValues() {
            vector<vector<string>> values;
            for (int i = 0; i < data.size(); i++) {
                values.push_back(data[i].getFieldValues());
            }
            return values;
        }

        ~CRUD(){}
};
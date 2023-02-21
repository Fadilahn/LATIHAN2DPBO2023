// Import library
#include <iostream>
#include <vector>
#include <iomanip>

// Deklarasi std agar tidak ditulis ulang
using namespace std;

// Kelas tabel, untuk membuat dan menampilkan tabel
template<class T>
class Table {
    private:
        vector<string> headers;
        vector<int> columnWidths;
        string border;

    public:
        Table(){}

        // Method untuk mengatur header tabel
        void setHeaders(vector<string> headers) {
            this->headers = headers;
        }

        // Method untuk membuat border tabel
        string setBorderTable(){
            // Inisialisasi border
            string border = "+";

            // Tentukan lebar kolom pada tabel
            for (int i = 0; i < columnWidths.size(); i++) {
                for(int j=0; j<columnWidths[i]+1; j++){
                    border += "-";
                }
                border += "+";
            }

            // Return bordernya
            return border;
        }

        // Method untuk mengatur lebar kolom pada tabel
        void setWidths(vector<int> widths) {
            this->columnWidths = widths;
            this->border = setBorderTable();
        }

        // Method untuk menampilkan header tabel
        void displayHeader() {
            cout << border << endl;
            cout << "|";

            for (int i = 0; i < headers.size(); i++) {
                cout << setw(columnWidths[i]) << setfill(' ') << left << " " + headers[i] << " |";
            }

            cout << endl;
            cout << border << endl;
        }

        // Method untuk menampilkan data pada tabel
        void displayData(vector<vector<string>> data) {
            for (int i = 0; i < data.size(); i++) {
                cout << "| ";
                for (int j = 0; j < headers.size(); j++) {
                    if(j == 0){
                        // Menampilkan nomor urut data
                        cout << setw(columnWidths[j]) << setfill(' ') << left << i+1 << "|";
                    }
                    else{
                        // Menampilkan data dari tabel
                        cout << setw(columnWidths[j]) << setfill(' ') << left << " " + data[i][j-1] << " |";
                    }
                }
                cout << endl;
            }

            cout << border << endl;
        }

        // Method untuk membuat border dengan simbol yang diinginkan
        string getBorder(int length, char symbol){
            // Inisialisasi border
            string border = "";

            // Tentukan panjang border dan simbol yang diinginkan
            for(int i=0; i<length; i++){
                // Looping simbol hingga membentuk baris
                border += symbol;
            }

            // Return bordernya
            return border;
        }

        ~Table(){}
};
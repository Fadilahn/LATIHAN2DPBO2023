// import liblary
#include <iostream>
#include <vector>
#include <iomanip>

// deklarasi std agar tidak ditulis ulang
using namespace std;

// kelas tabel, untuk membuat dan menampilkan tabel
template<class T>
class Table {
    private:
        vector<string> headers;
        vector<int> columnWidths;
        string border;

    public:
        Table(){}

        void setHeaders(vector<string> headers) {
            this->headers = headers;
        }

        string setBorderTable(){

            string border = "+";
            for (int i = 0; i < columnWidths.size(); i++) {
                for(int j=0; j<columnWidths[i]+1; j++){
                    border += "-";
                }
                border += "+";
            }
            return border;
        }

        void setWidths(vector<int> widths) {
            this->columnWidths = widths;
            this->border = setBorderTable();
        }

        void displayHeader() {
            cout << border << endl;
            cout << "|";
            for (int i = 0; i < headers.size(); i++) {
                cout << setw(columnWidths[i]) << setfill(' ') << left << " " + headers[i] << " |";
            }
            cout << endl;
            cout << border << endl;
        }

        void displayData(vector<vector<string>> data) {
            for (int i = 0; i < data.size(); i++) {
                cout << "| ";
                for (int j = 0; j < headers.size(); j++) {
                    if(j == 0){
                        cout << setw(columnWidths[j]) << setfill(' ') << left << i+1 << "|";
                    }
                    else{
                        cout << setw(columnWidths[j]) << setfill(' ') << left << " " + data[i][j-1] << " |";
                    }
                }
                cout << endl;
            }
            cout << border << endl;
        }

        // method border untuk membuat border dengan simbol yang diinginkan
        string getBorder(int length, char symbol){

            // inisialisasi border
            string border = "";

            // tentukan panjang border dan simbol yang diinginkan
            for(int i=0; i<length; i++){
                // looping simbol hingga membentuk baris
                border += symbol;
            }

            // return bordernya
            return border;
        }

        ~Table(){}
};
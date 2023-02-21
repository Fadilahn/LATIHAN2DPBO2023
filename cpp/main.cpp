#include <iostream>
#include <string>

#include "SivitasAkademik.cpp"
#include "CRUD.cpp"
#include "Table.cpp"

using namespace std;

SivitasAkademik getInputData(){

    string NIK, nama, jenis_kelamin, NIM, fakultas, prodi, asal_universitas, email_edu;

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

    SivitasAkademik sivitas(NIK, nama, jenis_kelamin, NIM, fakultas, prodi, asal_universitas, email_edu);
    return sivitas;
}

int getInputIdx(){

    int num;

    cout << "Enter number: ";
    cin >> num;

    return num-1;
}

int main() {

    Table<SivitasAkademik> table;
    table.setHeaders({"No", "NIK", "Name", "Jenis Kelamin", "NIM", "Fakultas", "Prodi", "Universitas", "Email"});
    table.setWidths({3, 10, 15, 15, 10, 15, 15, 20, 20});

    CRUD<SivitasAkademik> crud;
    string border1 = table.getBorder(50, '='),
    border2 = table.getBorder(15, '-');

    while (true) {

        int idx;
        SivitasAkademik sivitas;

        // desain tampilan
        cout << endl;
        cout << border1 << endl;
        // jadi sistem akan menampilkan pilihan untuk dipilih
        cout << "Write number for choice" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Modify Student" << endl;
        cout << "3. Delete Student" << endl;
        cout << "4. Display Student List" << endl;
        cout << "0. Exit" << endl;
        cout << border1 << endl;

        // input pilihannya
        int choice;
        cout << "-> ";
        cin >> choice;
        cout << border2 << endl;

        if (choice == 1) {
            sivitas = getInputData();
            crud.create(sivitas); 
        } 
        else if (choice == 2) {
            idx = getInputIdx();
            sivitas = getInputData();
            crud.update(idx, sivitas);
        }
        else if (choice == 3) {
            idx = getInputIdx();
            crud.remove(idx);
        }
        else if (choice == 4) {
            table.displayHeader();
            table.displayData(crud.getFieldValues()); 
        }
        else if (choice == 0) {
            break;
        }
        else {
            cout << "Invalid choice" << endl;
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
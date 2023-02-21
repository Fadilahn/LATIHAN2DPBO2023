from CRUD import CRUD
from Table import Table
from SivitasAkademik import SivitasAkademik

def main():

    crud = CRUD()

    table = Table()
    table.setHeaders(["No", "NIK", "Name", "Jenis Kelamin", "NIM", "Fakultas", "Prodi", "Universitas", "Email"])
    table.setWidths([2, 10, 15, 15, 10, 15, 15, 20, 20])

    border1 = table.getBorder(60, '=')
    border2 = table.getBorder(15, '-')

    while True:
        print(border1)
        print("1. Add Student")
        print("2. Delete Student")
        print("3. Display Student Table")
        print("0. Exit")
        print(border1)
        choice = input("-> ")
        print(border2)

        if choice == "1":
            nik = input("Enter NIK: ")
            name = input("Enter Name: ")
            gender = input("Enter Gender: ")
            nim = input("Enter NIM: ")
            fakultas = input("Enter Faculty: ")
            prodi = input("Enter Prody: ")
            university = input("Enter University: ")
            email = input("Enter Email: ")

            sivitas = SivitasAkademik(nik, name, gender, nim, fakultas, prodi, university, email)
            crud.create(sivitas)

        elif choice == "2":
            idx = int(input("Enter number: "))
            if idx > 0:
                crud.delete(idx-1)
            else:
                print("Number out of range")

        elif choice == "3":
            rows = crud.getData()
            table.displayHeader()
            table.displayData(rows)
                
        elif choice == "0":
            break

        else:
            print("Invalid choice. Please try again.")

if __name__ == "__main__":
    main()

"""
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
"""
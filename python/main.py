#Import kelas yang diperlukan yaitu CRUD, Table, dan SivitasAkademik
from CRUD import CRUD
from Table import Table
from SivitasAkademik import SivitasAkademik

#Fungsi utama program
def main():

    # Membuat objek CRUD
    crud = CRUD()

    # Membuat objek Table
    table = Table()

    # Mengatur header tabel
    table.setHeaders(["No", "NIK", "Name", "Jenis Kelamin", "NIM", "Fakultas", "Prodi", "Universitas", "Email"])

    # Mengatur lebar kolom tabel
    table.setWidths([2, 10, 15, 15, 10, 15, 15, 20, 20])

    # Membuat border tabel
    border1 = table.getBorder(60, '=')
    border2 = table.getBorder(15, '-')

    # Perulangan untuk menampilkan menu pilihan
    while True:
        print(border1)
        print("1. Tambah Data Mahasiswa")
        print("2. Hapus Data Mahasiswa")
        print("3. Tampilkan Tabel Mahasiswa")
        print("0. Keluar")
        print(border1)

        # Meminta input pilihan dari user
        choice = input("-> ")
        print(border2)

        # Menjalankan aksi sesuai pilihan
        if choice == "1":
            nik = input("Masukkan NIK: ")
            name = input("Masukkan Nama: ")
            gender = input("Masukkan Jenis Kelamin: ")
            nim = input("Masukkan NIM: ")
            fakultas = input("Masukkan Fakultas: ")
            prodi = input("Masukkan Program Studi: ")
            university = input("Masukkan Universitas: ")
            email = input("Masukkan Email: ")

            # Membuat objek SivitasAkademik dan memanggil method create dari objek CRUD
            sivitas = SivitasAkademik(nik, name, gender, nim, fakultas, prodi, university, email)
            crud.create(sivitas)

        elif choice == "2":
            idx = int(input("Masukkan nomor: "))
            if idx > 0:
                # Memanggil method delete dari objek CRUD
                crud.delete(idx-1)
            else:
                print("Nomor di luar jangkauan")

        elif choice == "3":
            # Mendapatkan data dari objek CRUD dan menampilkan data ke dalam tabel
            rows = crud.getData()
            table.displayHeader()
            table.displayData(rows)
                
        elif choice == "0":
            # Keluar dari program
            break

        else:
            # Menampilkan pesan jika input tidak valid
            print("Pilihan tidak valid. Silakan coba lagi.")

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
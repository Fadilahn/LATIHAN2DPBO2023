from Human import Human

class Mahasiswa(Human):
    def __init__(self, nik, nama, jenis_kelamin, nim, fakultas, prodi):
        super().__init__(nik, nama, jenis_kelamin)
        self.nim = nim
        self.fakultas = fakultas
        self.prodi = prodi
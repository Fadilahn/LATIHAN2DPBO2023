from Mahasiswa import Mahasiswa

class SivitasAkademik(Mahasiswa):
    def __init__(self, nik, nama, jenis_kelamin, nim, fakultas, prodi, asal_universitas, email_edu):
        super().__init__(nik, nama, jenis_kelamin, nim, fakultas, prodi)
        self.asal_universitas = asal_universitas
        self.email_edu = email_edu
    
    def getFieldValues(self):
        return [self.nik, self.nama, self.jenis_kelamin, self.nim, self.fakultas, self.prodi, self.asal_universitas, self.email_edu]
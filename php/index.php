<?php
// Import class SivitasAkademik
include 'SivitasAkademik.php';

// Create an empty list of SivitasAkademik objects
$sivitas_akademik_list = array();

// Add new SivitasAkademik instances to the list
$sivitas_akademik_list[] = new SivitasAkademik('1', 'Fadhill', 'L', '1', 'FPMIPA', 'Computer Science', 'UPI', 'a@upi.edu');
$sivitas_akademik_list[] = new SivitasAkademik('2', 'V', 'P', '2', 'FPMIPA', 'Teknik Informatika', 'UNPAD', 'bbb@unpad.edu');

// Print the list of SivitasAkademik objects
echo "Ini adalah daftar Sivitas Akademik:\n\n";
foreach ($sivitas_akademik_list as $sivitas_akademik) {
    echo "NIM             : " . $sivitas_akademik->nik . "\n";
    echo "Nama            : " . $sivitas_akademik->nama . "\n";
    echo "Jenis Kelamin   : " . $sivitas_akademik->jenis_kelamin . "\n";
    echo "NIM             : " . $sivitas_akademik->nim . "\n";
    echo "Fakultas        : " . $sivitas_akademik->fakultas . "\n";
    echo "Program Studi   : " . $sivitas_akademik->prodi . "\n";
    echo "Asal Universitas: " . $sivitas_akademik->asal_universitas . "\n";
    echo "Email Edu       : " . $sivitas_akademik->email_edu . "\n";
    echo "\n";
}
?>
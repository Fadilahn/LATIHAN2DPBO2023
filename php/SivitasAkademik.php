<?php
include 'Mahasiswa.php';

class SivitasAkademik extends Mahasiswa {
    public $asal_universitas;
    public $email_edu;

    public function __construct($nik, $nama, $jenis_kelamin, $nim, $fakultas, $prodi, $asal_universitas, $email_edu) {
        parent::__construct($nik, $nama, $jenis_kelamin, $nim, $fakultas, $prodi);
        $this->asal_universitas = $asal_universitas;
        $this->email_edu = $email_edu;
    }
}
?>
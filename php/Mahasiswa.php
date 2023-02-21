<?php
include 'Human.php';

class Mahasiswa extends Human {
    public $nim;
    public $fakultas;
    public $prodi;

    public function __construct($nik, $nama, $jenis_kelamin, $nim, $fakultas, $prodi) {
        parent::__construct($nik, $nama, $jenis_kelamin);
        $this->nim = $nim;
        $this->fakultas = $fakultas;
        $this->prodi = $prodi;
    }
}
?>
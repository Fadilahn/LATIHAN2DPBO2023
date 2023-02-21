<?php
    class Human {
        public $nik;
        public $nama;
        public $jenis_kelamin;

        public function __construct($nik, $nama, $jenis_kelamin) {
            $this->nik = $nik;
            $this->nama = $nama;
            $this->jenis_kelamin = $jenis_kelamin;
        }
    }
?>
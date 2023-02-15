/*
Saya Muhammad Fadhillah Nursyawal NIM 2107135 mengerjakan soal Latihan 2 
dalam mata kuliah Desain Pemrograman Berorientasi Objek 
untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.
 */

// import liblary
// import java.util.ArrayList;
// import java.util.List;

// kelas Human
// kelas Human berada di paling atas atau bisa disebut (buyut), parentnya dari kelas student
class Human {
    // deklarasi atribut human
    protected String nik;
    protected String nama;
    protected String jenis_kelamin;
    
    // construktor
    public Human(String nik, String nama, String jenis_kelamin) {
        // set data atribut human
        this.nik = nik;
        this.nama = nama;
        this.jenis_kelamin = jenis_kelamin;
    }

    // dibawah ini merupakan setter dan getter dari atribut Human
    public String getNik() {
        return nik;
    }

    public void setNik(String nik) {
        this.nik = nik;
    }

    public String getNama() {
        return nama;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public String getJenisKelamin() {
        return jenis_kelamin;
    }

    public void setJenilKelamin(String jenis_kelamin) {
        this.jenis_kelamin = jenis_kelamin;
    }
}

// kelas student
// kelas student merupakan kelas child dari kelas human, dan kelas parent dari kelas SivitasAcademic
class Student extends Human { // dengan extend human
    // deklarasi atribut dari Student
    protected String nim;
    protected String fakultas;
    protected String prodi;
    
    // construktor untuk kelas student
    public Student(String nim, String nama, String jenis_kelamin, String nik, String fakultas, String prodi) {
        // super merupakan konstrukter dari kelas human agar dapat terhubung
        super(nik, nama, jenis_kelamin);
        // set data atribut dari student
        this.nim = nim;
        this.fakultas = fakultas;
        this.prodi = prodi;
    }

    // dibawah ini merupakan setter dan getter dari atribut Student
    public String getNim() {
        return nim;
    }

    public void setNim(String nim) {
        this.nim = nim;
    }

    public String getFakultas() {
        return fakultas;
    }

    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    public String getProdi() {
        return prodi;
    }

    public void setProdi(String prodi) {
        this.prodi = prodi;
    }
}

// kelas sivitas akademik
// kelas inimerupakan child dari kelas student
class SivitasAcademic extends Student {
    // deklarasi atribut dari SivitasAcademic
    protected String asal_universitas;
    protected String email_edu;
    
    // construktor untuk kelas sivitas akademik
    public SivitasAcademic(String nim, String nama, String jenis_kelamin, String nik, String fakultas, String prodi, String asal_universitas, String email_edu) {
        // super disini merupakan konstruktor dari kelas student agar dapat terhubung
        super(nim, nama, jenis_kelamin, nik, fakultas, prodi);
        // set data atribut dari sivitas akademik
        this.asal_universitas = asal_universitas;
        this.email_edu = email_edu;
    }

    // dibawah ini merupakan setter dan getter dari atribut Sivitas akademik
    public String getAsalUniversitas() {
        return asal_universitas;
    }

    public void setAsalUniversitas(String asal_universitas) {
        this.asal_universitas = asal_universitas;
    }

    public String getEmailEdu() {
        return email_edu;
    }

    public void setEmailEdu(String email_edu) {
        this.email_edu = email_edu;
    }
    
    // menampilkan data
    public void displayInformation() {
        System.out.println("Name                : " + nama);
        System.out.println("NIM                 : " + nim);
        System.out.println("NIK                 : " + nik);
        System.out.println("Gender              : " + jenis_kelamin);
        System.out.println("Faculty             : " + fakultas);
        System.out.println("Study Program       : " + prodi);
        System.out.println("Origin University   : " + asal_universitas);
        System.out.println("Email UPI Edu       : " + email_edu);
    }
}

// class CRUDList {
//     private List<SivitasAcademic> siakList;

//     public CRUDList() {
//         siakList = new ArrayList<>();
//     }

//     public void createSivitasAcademic(SivitasAcademic siak) {
//         siakList.add(siak);
//     }

//     public SivitasAcademic getSiakByNik(String nik) {
//         for (SivitasAcademic siak : siakList) {
//             if (siak.getNik().equals(nik)) {
//                 return siak;
//             }
//         }
//         return null;
//     }

//     public void updateSivitasAcademic(SivitasAcademic siak) {
//         SivitasAcademic existingSiak = getSiakByNik(siak.getNik());
//         if (existingSiak != null) {
//             int index = siakList.indexOf(existingSiak);
//             siakList.set(index, siak);
//         }
//     }

//     public void deleteSivitasAcademic(String nik) {
//         SivitasAcademic siak = getSiakByNik(nik);
//         if (siak != null) {
//             siakList.remove(siak);
//         }
//     }

//     public void displayAllSivitasAcademic() {
//         for (SivitasAcademic siak : siakList) {
//             siak.displayInformation();
//         }
//     }
// }

// Main
public class Main {
    public static void main(String[] args) {
        // masukan data dengan hard code
        SivitasAcademic siak = new SivitasAcademic("2107135", "M Fadhillah N", "Laki-laki", "320427000000000001", "FPMIPA", "Computer Science", "Universitas Pendidikan Indonesia", "fadilahnursyawal@upi.edu");

        // output
        siak.displayInformation();


        // List<SivitasAcademic> siakList = new ArrayList<>();
        // for (SivitasAcademic siak : siakList) {
        //     siak.displayInformation();
        // }

        // while (true) {
        //     System.out.println("Enter an option:");
        //     System.out.println("1. Create a new Academic Community");
        //     System.out.println("2. Delete Academic Community");
        //     System.out.println("3. Display all Academic Community");
        //     System.out.println("0. Exit");

        //     int option = scanner.nextInt();
        //     scanner.nextLine(); // Consume the newline character

        //     switch (option) {
        //         case 1:
        //             System.out.println("Enter NIK:");
        //             String nik = scanner.nextLine();

        //             System.out.println("Enter NIM:");
        //             String nim = scanner.nextLine();

        //             System.out.println("Enter name:");
        //             String name = scanner.nextLine();

        //             System.out.println("Enter gender:");
        //             String gender = scanner.nextLine();

        //             System.out.println("Enter faculty:");
        //             String faculty = scanner.nextLine();

        //             System.out.println("Enter study program:");
        //             String studyProgram = scanner.nextLine();

        //             System.out.println("Enter origin university:");
        //             String originUniversity = scanner.nextLine();

        //             System.out.println("Enter email edu:");
        //             String emailEdu = scanner.nextLine();

        //             SivitasAcademic student = new SivitasAcademic(nim, name, gender, nik, faculty, studyProgram, originUniversity, emailEdu);
        //             crud.createAcademicCommunity(student);
            
        //             break;
        //         case 2:
        //             System.out.println("Enter NIK:");
        //             String deleteNik = scanner.nextLine();

        //             boolean deleted = crud.deleteAcademicCommunity(deleteNik);
        //             if (deleted) {
        //                 System.out.println("Academic Community deleted");
        //             } else {
        //                 System.out.println("Academic Community not found");
        //             }
        //             break;
        //         case 3:
        //             System.out.println("All Academic Community:");
        //             displayTableHeader();
        //             crud.displayAllAcademicCommunity();
        //             displayTableFooter();
        //             break;
        //             System.out.println("Enter NIK:");
        //             String searchNik = scanner.nextLine();

        //             break;
        //         case 0:
        //             System.out.println("Exiting program...");
        //             System.exit(0);
        //         default:
        //             System.out.println("Invalid option");
        //     }
        // }
    }
}

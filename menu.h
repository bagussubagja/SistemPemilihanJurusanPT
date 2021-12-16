#include <iostream>

using namespace std;

void main_menu(){
    cout << " +--------------------------------------------------------+ " << endl;
    cout << " | Menu Utama - Sistem Pemilihan Jurusan Perguruan Tinggi | " << endl;
    cout << " +--------------------------------------------------------+ " << endl;
    cout << " | 1. Jalankan Sistem                                     | " << endl;
    cout << " | 2. Petunjuk Penggunaan Sistem                          | " << endl;
    cout << " | 3. Tentang Sistem                                      | " << endl;
    cout << " | 4. Informasi                                           | " << endl;
    cout << " | 5. Keluar                                              | " << endl;
    cout << " +--------------------------------------------------------+ " << endl;
    cout << "   Pilihan : ";
}

void about(){
    system("cls");
    cout << " -------------------------------------------------------------------------------------------------------------- " << endl;
    cout << " |                          Sistem Pemilihan Jurusan Perguruan Tinggi (SPJ - PT)                              | " << endl;
    cout << " -------------------------------------------------------------------------------------------------------------- " << endl;
    cout << " |  Sistem Pemilihan Jurusan Perguruan Tinggi (SPJ - PT) adalah sebuah sistem yang diciptakan untuk menjadi   | " << endl;
    cout << " | sebuah solusi bagi para pelajar sekolah tingkat atas yang seringkali dibingungkan dengan pilihan jurusan   | " << endl;
    cout << " | yang begitu banyak yang ada di perguruan tinggi. Sistem ini diharapkan dapat memberikan rekomendasi juru-  | " << endl;
    cout << " | san bagi para pelajar sekolah yang berdasarkan minat mereka terhadap mata pelajaran yang ada di sekolah.   | " << endl;
    cout << " |                                                                                                            | " << endl;
    cout << " |  Sistem Pemilihan Jurusan Perguruan Tinggi (SPJ - PT) menggunakan sistem AHP sebagai metode pengambilan    | " << endl;
    cout << " | keputusan. Dengan memberikan beberapa pilihan dan penilaian skala dari 1-9, pengguna akan dihadapkan       | " << endl;
    cout << " | beberapa pertanyaan seputar mata pelajaran yang mereka pelajari di sekolah.                                | " << endl;
    cout << " |                                          --------------------------------                                  | " << endl;
    cout << " | Penyusun Sistem Pemilihan Jurusan Perguruan Tinggi (SPJ - PT) :                                            | " << endl;
    cout << " | 1. Ali Aziz Fadillah    - 2001657                                                                          | " << endl;
    cout << " | 2. Bagus Subagja        - 2008315                                                                          | " << endl;
    cout << " | 3. Lisa Amelia          - 2007718                                                                          | " << endl;
    cout << " | 4. Muhamad Annur Fallah - 2008969                                                                          | " << endl;
    cout << " | Prodi Rekayasa Perangkat Lunak 2020 - Universitas Pendidikan Indonesia kampus di Cibiru                    | " << endl;
    cout << " -------------------------------------------------------------------------------------------------------------- " << endl;
}

void menu_informasi(){
    system("cls");
    int info;
    cout << " ------------------------------------------------------------- " << endl;
    cout << " |          Menu Informasi - Sistem Pemilihan Jurusan        | " << endl;
    cout << " ------------------------------------------------------------- " << endl;
    cout << " | 1. Informasi Jurusan / Program Studi                      | " << endl;
    cout << " | 2. Informasi Perguruan Tinggi Negeri / Swasta             | " << endl;
    cout << " ------------------------------------------------------------- " << endl;
    cout << " Pilihan : "; cin >> info;
    switch (info)
    {
    case 1:
    {
    system("cls");
    int jurusan;
    string url_saintek = "https://maukuliah.id/blog/jurusan-saintek-dan-soshum-paling-diminati-di-sbmptn-2020/";
    string url_soshum = "https://www.kompas.com/edu/read/2021/01/26/123501171/intip-10-prodi-soshum-paling-diminati-di-sbmptn-2020?page=all";
    string url_jurusan = "https://sidata-ptn.ltmpt.ac.id/ptn_sb.php";
    cout << " ------------------------------------------------------------- " << endl;
    cout << " |          Menu Informasi - Jurusan / Program Studi         | " << endl;
    cout << " ------------------------------------------------------------- " << endl;
    cout << " | 1. Jurusan Saintek / MIPA paling diminati                 | " << endl;
    cout << " | 2. Jurusan Soshum / IPS paling diminati                   | " << endl;
    cout << " | 3. Daftar Lengkap Jurusan / Program Studi di PTN          | " << endl;
    cout << " ------------------------------------------------------------- " << endl;
    cout << " Pilihan : "; cin >> jurusan;
    switch (jurusan)
    {
    case 1:
    system(std::string("start " + url_saintek).c_str());
    cout << endl;
    break;
    case 2:
    system(std::string("start " + url_soshum).c_str());
    cout << endl;
    break;
    case 3:
    system(std::string("start " + url_jurusan).c_str());
    cout << endl;
    break;
    default:
        break;
    }
        break;
    }
    //menu_jurusan();
    case 2:
    {
    //menu_pt();
    system("cls");
    int pil_pt;
    string url_snm = "https://ltmpt.ac.id/?mid=4";
    string url_sbm = "https://ltmpt.ac.id/?mid=9";
    string url_ptn = "https://maukuliah.id/blog/20-daftar-ptn-dengan-peminat-tertinggi-di-snmptn-2021/";
    string url_pts = "https://maukuliah.id/blog/10-perguruan-tinggi-swasta-terbaik-di-indonesia-tahun-2020/";
    cout << " --------------------------------------------------------------- " << endl;
    cout << " |     Menu Informasi - Perguruan Tinggi Negeri / Swasta       | " << endl;
    cout << " --------------------------------------------------------------- " << endl;
    cout << " | 1. Seleksi Nasional Masuk Perguruan Tinggi Negeri (SNMPTN)  | " << endl;
    cout << " | 2. Seleksi Bersama Masuk Perguruan Tinggi Negeri (SBMPTN)   | " << endl;
    cout << " | 3. Daftar Perguruan Tinggi Negeri yang banyak diminati      | " << endl;
    cout << " | 4. Daftar Perguruan Tinggi Swasta yang banyak diminati      | " << endl;
    cout << " --------------------------------------------------------------- " << endl;
    cout << " Pilihan : "; cin >> pil_pt;
    switch (pil_pt)
    {
    case 1:
    system(std::string("start " + url_snm).c_str());
    cout << endl;   
    break;
    case 2:
    system(std::string("start " + url_sbm).c_str());
    cout << endl;
    break;
    case 3:
    system(std::string("start " + url_ptn).c_str());
    cout << endl;
    break;
    case 4:
    system(std::string("start " + url_pts).c_str());
    cout << endl;
    break;
    default:
        break;
    }
}
        break;
    default:
        break;
    }
}
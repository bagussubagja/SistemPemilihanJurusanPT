#include <iostream>
#include <string>
#include <windows.h>
#include <limits>
#include <bits/stdc++.h>
#include <fstream>
#include <string>
#include "variable.h"
#include "kriteria_mipa.h"
#include "kriteria_ips.h"
#include "alternatif_mipa.h"
#include "alternatif_ips.h"
#include "panduan.h"
#include "user_profile.h"
#include "menu.h"

using namespace std;

ofstream cetak;

int main(){
    begin:
    system("cls");
    cout << " ------------------------------------------------- " << endl;
    cout << " |    Sistem Pemilihan Jurusan Perguruan Tinggi   |  " << endl;
    cout << " ------------------------------------------------- " << endl;
    if(data_user.jurusan.empty()){
    cout << " | Nama                                           : "; getline(cin, data_user.nama);
    cout << " | Usia                                           : "; cin >> data_user.umur;
    cout << " | Jurusan (MIPA/IPS)                             : "; cin >> data_user.jurusan;   
    }else if(data_user.jurusan != "MIPA" || data_user.jurusan != "IPS"){
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    cout << " | Nama                                           : "; getline(cin, data_user.nama);
    cout << " | Usia                                           : "; cin >> data_user.umur;
    cout << " | Jurusan (MIPA/IPS)                             : "; cin >> data_user.jurusan;  
    }

    if(data_user.jurusan != "MIPA" && data_user.jurusan != "IPS"){
        cout << "Jurusan yang anda inputkan tidak ada dalam data, harap memasukan kembali jurusan yang benar!" << endl;
        Sleep(3000);
        goto begin;
    }

    menu_point:
    system("cls");
    main_menu();
    cin >> pilihan;

    switch (pilihan)
    {
    case 1:
    if(data_user.jurusan == "MIPA"){
    system("cls");
    cout << "Perhatian!!" << endl;
    cout << "Sebelum menjalankan sistem, apakah anda ingin mempelajari panduan untuk menjalankan sistem pemilihan jurusan ini? (y/n) : "; cin >> pil_menu;
    if(pil_menu != 'n'){
        goto panduan;
    }
    system("cls");
    cout << "---Pilih Mode Pemilihan Jurusan---" << endl;
    cout << "1. Mode Terbaik (Akurasi hasil lebih baik)" << endl;
    cout << "2. Mode Standar (Hasil keluar lebih cepat)" << endl;
    cout << "Pilihan : "; cin >> mode;
    perbandingan_kriteria_mipa:     // Kriteria Mata Pelajaran MIPA
    system("cls");
    perbandingan_kriteria_mipa();
    if(mode == "1"){
    matriks_perbandingan_berpasangan_kriteria_mipa();
    matriks_nilai_kriteria_kriteria_mipa();
    if(consistency_ratio1 <= 0.1){
        cout << "Nilai Consistency Ratio kurang dari 10%" << endl;
        Sleep(5000);
    }else if(consistency_ratio1 > 0.1){
        cout << "Peringatan! Nilai Consistency Ratio lebih dari 10%. Harap memasukkan kembali nilai kriteria." << endl;
        while (consistency_ratio1 > 0.1)
        {
            cout << "Tekan y untuk kembali memasukkan nilai kriteria : "; cin >> pil_menu;
            while (pil_menu == 'y')
            {
                goto perbandingan_kriteria_mipa;
            }
        }   
    }
}else if(mode == "2"){
    goto alternatif_matematika;
}
    alternatif_matematika:      // Alternatif Matematika
    system("cls");
    alternatif_kriteria1_mipa();
    if(mode == "1"){
    matriks_perbandingan_berpasangan_alternatif_1_mipa();
    matriks_nilai_kriteria_alternatif_1_mipa();
    if(consistency_ratio_alternatif1 <= 0.1){
        cout << "Nilai Consistency Ratio kurang dari 10%" << endl;
        Sleep(5000);
    }else if(consistency_ratio_alternatif1 > 0.1){
        cout << "Peringatan! Nilai Consistency Ratio lebih dari 10%. Harap memasukkan kembali nilai kriteria." << endl;
        while (consistency_ratio_alternatif1 > 0.1)
        {
            cout << "Tekan y untuk kembali memasukkan nilai kriteria : "; cin >> pil_menu;
            while (pil_menu == 'y')
            {
                goto alternatif_matematika;
            } 
        }
    }
}else if(mode == "2"){
    goto alternatif_fisika;
}
    alternatif_fisika:      // Alternatif Fisika
    system("cls");
    alternatif_kriteria2_fisika();
    if(mode == "1"){
    matriks_perbandingan_berpasangan_alternatif_2_fisika();
    matriks_nilai_kriteria_alternatif_2_fisika();
    if(consistency_ratio_alternatif2 <= 0.1){
        cout << "Nilai Consistency Ratio kurang dari 10%" << endl;
        Sleep(5000);
    }else if(consistency_ratio_alternatif2 > 0.1){
        cout << "Peringatan! Nilai Consistency Ratio lebih dari 10%. Harap memasukkan kembali nilai kriteria." << endl;
        while (consistency_ratio_alternatif2 > 0.1)
        {
            cout << "Tekan y untuk kembali memasukkan nilai kriteria : "; cin >> pil_menu;
            while (pil_menu == 'y')
            {
                goto alternatif_fisika;
            }
            
        }
        
    }
}else if(mode == "2"){
    goto alternatif_kimia;
}
    alternatif_kimia:       // Alternatif Kimia
    system("cls");
    alternatif_kriteria3_kimia();
    if(mode == "1"){
    matriks_perbandingan_berpasangan_alternatif_3_kimia();
    matriks_nilai_kriteria_alternatif_3_kimia();
    if(consistency_ratio_alternatif3 <= 0.1){
        cout << "Nilai Consistency Ratio kurang dari 10%" << endl;
        Sleep(5000);
    }else if(consistency_ratio_alternatif3 > 0.1){
        cout << "Peringatan! Nilai Consistency Ratio lebih dari 10%. Harap memasukkan kembali nilai kriteria." << endl;
        while (consistency_ratio_alternatif3 > 0.1)
        {
            cout << "Tekan y untuk kembali memasukkan nilai kriteria : "; cin >> pil_menu;
            while (pil_menu == 'y')
            {
                goto alternatif_kimia;
            }
        }
    }
}else if(mode == "2"){
    goto alternatif_biologi;        // Alternatif Biologi
}
    alternatif_biologi:
    system("cls");
    alternatif_kriteria4_biologi();
    if(mode == "1"){
    matriks_perbandingan_berpasangan_alternatif_4_biologi();
    matriks_nilai_kriteria_alternatif_4_biologi();
    if(consistency_ratio_alternatif4 <= 0.1){
        cout << "Nilai Consistency Ratio kurang dari 10%" << endl;
        Sleep(5000);
    }else if(consistency_ratio_alternatif4 > 0.1){
        cout << "Peringatan! Nilai Consistency Ratio lebih dari 10%. Harap memasukkan kembali nilai kriteria." << endl;
        while (consistency_ratio_alternatif4 > 0.1)
        {
            cout << "Tekan y untuk kembali memasukkan nilai kriteria : "; cin >> pil_menu;
            while (pil_menu == 'y')
            {
                goto alternatif_biologi;
            } 
        }  
    }
}else if(mode == "2"){
    goto alternatif_inggris_mipa;
}
    alternatif_inggris_mipa:       // Alternatif Inggris MIPA
    system("cls");
    alternatif_kriteria5_inggris();
    if(mode == "1"){
    matriks_perbandingan_berpasangan_alternatif_5_inggris();
    matriks_nilai_kriteria_alternatif_5_inggris();
    if(consistency_ratio_alternatif5 <= 0.1){
        cout << "Nilai Consistency Ratio kurang dari 10%" << endl;
        Sleep(5000);
    }else if(consistency_ratio_alternatif5 > 0.1){
        cout << "Peringatan! Nilai Consistency Ratio lebih dari 10%. Harap memasukkan kembali nilai kriteria." << endl;
        while (consistency_ratio_alternatif5 > 0.1)
        {
            cout << "Tekan y untuk kembali memasukkan nilai kriteria : "; cin >> pil_menu;
            while (pil_menu == 'y')
            {
                goto alternatif_inggris_mipa;
            } 
        }    
    }
}
    system("cls");
    hasil_akhir_mipa();
    // -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
}   else if(data_user.jurusan == "IPS"){
    system("cls");
    cout << "Perhatian!!" << endl;
    cout << "Sebelum menjalankan sistem, apakah anda ingin mempelajari panduan untuk menjalankan sistem pemilihan jurusan ini? (y/n) : "; cin >> pil_menu;
    if(pil_menu != 'n'){
        goto panduan;
    }
    system("cls");
    cout << "---Pilih Mode Pemilihan Jurusan---" << endl;
    cout << "1. Mode Terbaik (Akurasi hasil lebih baik)" << endl;
    cout << "2. Mode Standar (Hasil keluar lebih cepat)" << endl;
    cout << "Pilihan : "; cin >> mode;
    perbandingan_kriteria_ips:      // Kriteria IPS
    system("cls");
    perbandingan_kriteria_ips();
    if(mode == "1"){
    matriks_perbandingan_berpasangan_kriteria_ips();
    matriks_nilai_kriteria_kriteria_ips();
    if(consistency_ratio1 <= 0.1){
        cout << "Nilai Consistency Ratio kurang dari 10%" << endl;
        Sleep(5000);
    }else if(consistency_ratio1 > 0.1){
        cout << "Peringatan! Nilai Consistency Ratio lebih dari 10%. Harap memasukkan kembali nilai kriteria." << endl;
        while (consistency_ratio1 > 0.1)
        {
            cout << "Tekan y untuk kembali memasukkan nilai kriteria : "; cin >> pil_menu;
            while (pil_menu == 'y')
            {
                goto perbandingan_kriteria_ips;
            }
        }
    }
}   else if(mode == "2"){
    goto alternatif_sosiologi;
}
    alternatif_sosiologi:       // Alternatif IPS
    system("cls");
    alternatif_kriteria1_sosiologi();
    if(mode == "1"){
    matriks_perbandingan_berpasangan_alternatif_1_sosiologi();
    matriks_nilai_kriteria_alternatif_1_sosiologi();
    if(consistency_ratio_alternatif1 <= 0.1){
        cout << "Nilai Consistency Ratio kurang dari 10%" << endl;
        Sleep(5000);
    }else if(consistency_ratio_alternatif1 > 0.1){
        cout << "Peringatan! Nilai Consistency Ratio lebih dari 10%. Harap memasukkan kembali nilai kriteria." << endl;
        while (consistency_ratio_alternatif1 > 0.1)
        {
            cout << "Tekan y untuk kembali memasukkan nilai kriteria : "; cin >> pil_menu;
            while (pil_menu == 'y')
            {
                goto alternatif_sosiologi;
            }
        }
    }
}   else if(mode == "2"){
    goto alternatif_sejarah;
}
    alternatif_sejarah:     // Alternatif Sejarah
    system("cls");
    alternatif_kriteria2_sejarah();
    if(mode == "1"){
    matriks_perbandingan_berpasangan_alternatif_2_sejarah();
    matriks_nilai_kriteria_alternatif_2_sejarah();
    if(consistency_ratio_alternatif2 <= 0.1){
        cout << "Nilai Consistency Ratio kurang dari 10%" << endl;
        Sleep(5000);
    }else if(consistency_ratio_alternatif2 > 0.1){
        cout << "Peringatan! Nilai Consistency Ratio lebih dari 10%. Harap memasukkan kembali nilai kriteria." << endl;
        while (consistency_ratio_alternatif2 > 0.1)
        {
            cout << "Tekan y untuk kembali memasukkan nilai kriteria : "; cin >> pil_menu;
            while (pil_menu == 'y')
            {
                goto alternatif_sejarah;
            }
        }
    }
}   else if(mode == "2"){
    goto alternatif_geografi;
}
    alternatif_geografi:    // Alternatif Geografi
    system("cls");
    alternatif_kriteria3_geografi();
    if(mode == "1"){
    matriks_perbandingan_berpasangan_alternatif_3_geografi();
    matriks_nilai_kriteria_alternatif_3_geografi();
    if(consistency_ratio_alternatif3 <= 0.1){
        cout << "Nilai Consistency Ratio kurang dari 10%" << endl;
        Sleep(5000);
    }else if(consistency_ratio_alternatif3 > 0.1){
        cout << "Peringatan! Nilai Consistency Ratio lebih dari 10%. Harap memasukkan kembali nilai kriteria." << endl;
        while (consistency_ratio_alternatif3 > 0.1)
        {
            cout << "Tekan y untuk kembali memasukkan nilai kriteria : "; cin >> pil_menu;
            while (pil_menu == 'y')
            {
                goto alternatif_geografi;
            }
        }
    }
}   else if(mode == "2"){
    goto alternatif_ekonomi;
}
    alternatif_ekonomi:     // Alternatif Ekonomi
    system("cls");
    alternatif_kriteria4_ekonomi();
    if(mode == "1"){
    matriks_perbandingan_berpasangan_alternatif_4_ekonomi();
    matriks_nilai_kriteria_alternatif_4_ekonomi();
    if(consistency_ratio_alternatif4 <= 0.1){
        cout << "Nilai Consistency Ratio kurang dari 10%" << endl;
        Sleep(5000);
    }else if(consistency_ratio_alternatif4 > 0.1){
        cout << "Peringatan! Nilai Consistency Ratio lebih dari 10%. Harap memasukkan kembali nilai kriteria." << endl;
        while (consistency_ratio_alternatif4 > 0.1)
        {
            cout << "Tekan y untuk kembali memasukkan nilai kriteria : "; cin >> pil_menu;
            while (pil_menu == 'y')
            {
                goto alternatif_ekonomi;
            }
        }
    }
}   else if(mode == "2"){
    goto alternatif_inggris_ips;
}
    alternatif_inggris_ips:     // Alternatif Inggris IPS
    system("cls");
    alternatif_kriteria5_inggrisips();
    if(mode == "1"){
    matriks_perbandingan_berpasangan_alternatif_5_inggrisips();
    matriks_nilai_kriteria_alternatif_5_inggrisips();
    if(consistency_ratio_alternatif5 <= 0.1){
        cout << "Nilai Consistency Ratio kurang dari 10%" << endl;
        Sleep(5000);
    }else if(consistency_ratio_alternatif5 > 0.1){
        cout << "Peringatan! Nilai Consistency Ratio lebih dari 10%. Harap memasukkan kembali nilai kriteria." << endl;
        while (consistency_ratio_alternatif5 > 0.1)
        {
            cout << "Tekan y untuk kembali memasukkan nilai kriteria : "; cin >> pil_menu;
            while (pil_menu == 'y')
            {
                goto alternatif_inggris_ips;
            }
        }
    }
}
    system("cls");
    hasil_akhir_ips();
}
    // -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    // -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    break;
    case 2:
    system("cls");
    panduan:
    menu_panduan();
    cin >> pilihan;
    switch (pilihan)
    {
    case 1:
        definisi();
        break;
    case 2:
        value();
        break;
    case 3:
        petunjuk();
        break;
    case 4:
        skala();
        break;
    case 5:
        menu_mode();
        break;
    case 0:
        goto menu_point;
    default:
        break;
    }
    goto back_to_menu;
        break;
    case 3:
    about();
    goto back_to_menu;
    break;
    case 4:
    menu_informasi();
    goto back_to_menu;
    break;
    case 5:
    goto end;
    default:
        break;
    }
cout << "Simpan hasil pemilihan jurusan? (y/n) : "; cin >> pil_menu;
if(pil_menu == 'y'){
    cetak.open("hasil.txt", ios::app);
    cetak << "Hasil Rekomendasi dari Sistem Pemilihan Jurusan Perguruan Tinggi (SPJ-PT)" << endl;
    cetak << "Nama                : " << data_user.nama << endl;
    cetak << "Jurusan             : " << data_user.jurusan << endl;
    cetak << "Rekomendasi jurusan : ";
    if(data_user.jurusan == "MIPA"){
        if(hasil_akhir[4] == hasil1){
            cetak << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah jurusan Teknik Informatika!" << endl;
            cetak << "Ada beberapa jurusan alternatif lain dari Teknik Informatika, diantaranya : " << endl;
            cetak << "1. Rekayasa Perangkat Lunak" << endl;
            cetak << "2. Teknik Komputer" << endl;
            cetak << "3. Sistem Informasi" << endl;
            cetak << "4. Ilmu Komputer" << endl;
            cetak << "5. Matematika" << endl;
            cetak << "6. Statistika" << endl;
        }
        else if(hasil_akhir[4] == hasil2){
            cetak << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah jurusan Teknik Sipil!" << endl;
            cetak << "Ada beberapa jurusan alternatif lain dari Teknik Sipil, diantaranya : " << endl;
            cetak << "1. Arsitektur" << endl;
            cetak << "2. Teknik Mesin" << endl;
            cetak << "3. Teknik Elektro" << endl;
            cetak << "4. Teknik Perkapalan" << endl;
        }
        else if(hasil_akhir[4] == hasil3){
            cetak << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah jurusan Farmasi!" << endl;
            cetak << "Ada beberapa jurusan alternatif lain dari Farmasi, diantaranya : " << endl;
            cetak << "1. Ilmu Gizi" << endl;
            cetak << "2. Nutrisi dan Teknologi Pangan" << endl;
            cetak << "3. Teknik Kimia" << endl;
        }
        else if(hasil_akhir[4] == hasil4){
            cetak << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah jurusan kedokteran!" << endl;
            cetak << "Ada beberapa jurusan alternatif lain dari Kedokteran, diantaranya : " << endl;
            cetak << "1. Kedokteran Hewan" << endl;
            cetak << "2. Kedokteran Gigi" << endl;
            cetak << "3. Kebidanan" << endl;
            cetak << "4. Fisioterapi" << endl;
        }
        else if(hasil_akhir[4] == hasil5){
            cetak << "Berdasarkan inputan yang telah diberikan, kamu lebih cocok untuk masuk ke jurusan Sosial Humaniora (Soshum)!" << endl;
            cetak << "Ada beberapa jurusan yang dapat menjadi pilihan, di antaranya : " << endl;
            cetak << "1. Psikologi" << endl;
            cetak << "2. Ilmu Sejarah" << endl;
            cetak << "3. Geografi" << endl;
            cetak << "4. Ekonomi" << endl;
            cetak << "5. Sastra / Pendidikan" << endl;
        }
    }else if(data_user.jurusan == "IPS"){
         if(hasil_akhir[4] == hasil1){
            cetak << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah Psikologi!" << endl;
            cetak << "Ada beberapa jurusan alternatif lain dari Psikologi, diantaranya : " << endl;
            cetak << "1. Hubungan Internasional" << endl;
            cetak << "2. Penyiaran / Broadcasting" << endl;
            cetak << "3. Sosiologi" << endl;
            cetak << "4. Ilmu Komunikasi" << endl;
        }
        else if(hasil_akhir[4] == hasil2){
            cetak << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah Ilmu Sejarah!" << endl;
            cetak << "Ada beberapa jurusan alternatif lain dari Ilmu Sejarah, diantaranya : " << endl;
            cetak << "1. Arkeologi" << endl;
            cetak << "2. Pendidikan Sejarah" << endl;
            cetak << "3. Sejarah Peradaban Islam" << endl;
            cetak << "4. Antropologi" << endl;
        }
        else if(hasil_akhir[4] == hasil3){
            cetak << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah Geografi!" << endl;
            cetak << "Ada beberapa jurusan alternatif lain dari Geografi, diantaranya : " << endl;
            cetak << "1. Sains Informasi Geografi" << endl;
            cetak << "2. Teknik Geodesi" << endl;
            cetak << "3. Teknik Geologi" << endl;
        }
        else if(hasil_akhir[4] == hasil4){
            cetak << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah Ekonomi!" << endl;
            cetak << "Ada beberapa jurusan alternatif lain dari Ekonomi, diantaranya : " << endl;
            cetak << "1. Ilmu Ekonomi" << endl;
            cetak << "2. Manajemen" << endl;
            cetak << "3. Ekonomi Pembangunan" << endl;
            cetak << "4. Bisnis Digital" << endl;
            cetak << "5. Akuntansi" << endl;
        }
        else if(hasil_akhir[4] == hasil5){
            cetak << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah Alternatif MIPA!" << endl;
            cetak << "Ada beberapa jurusan alternatif lain dari Alternatif MIPA, diantaranya : " << endl;
            cetak << "1. Teknik Informatika" << endl;
            cetak << "2. Teknik Sipil" << endl;
            cetak << "3. Farmasi" << endl;
            cetak << "4. Kedokteran" << endl;
            cetak << "5. Pendidikan IPA " << endl;
        }
    }
    cetak << endl;
    cetak.close();
}

back_to_menu:
cout << "Kembali ke menu utama ? (y/n) : "; cin >> pil_menu;
while (pil_menu == 'y')
{
    goto menu_point;
}

end:
cout << "Terima Kasih sudah menggunakan program ini" << endl;
}
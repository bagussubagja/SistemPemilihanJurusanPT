#include <iostream>

using namespace std;

void menu_panduan(){
    cout << " +-----------------------------------------------------------------+ " << endl;
    cout << " | Petunjuk Penggunaan - Sistem Pemilihan Jurusan Perguruan Tinggi | " << endl;
    cout << " +-----------------------------------------------------------------+ " << endl;
    cout << " | 1. Definisi Sistem                                              | " << endl;
    cout << " | 2. Keuntungan Penggunaan Sistem                                 | " << endl;
    cout << " | 3. Petunjuk Penggunaan Sistem                                   | " << endl;
    cout << " | 4. Tabel Tingkat Kepentingan menurut Saaty (1980)               | " << endl;
    cout << " | 5. Mode Terbaik vs Mode Standar                                 | " << endl;
    cout << " | 0. Kembali ke Menu Utama                                        | " << endl;
    cout << " +-----------------------------------------------------------------+ " << endl;
    cout << "Pilihan : ";
}

void skala(){
    cout << endl;
    cout << " TABEL TINGKAT SKALA KEPENTINGAN  \n" << endl;
    cout << " +-----------------------------------------------------------------------------+ " << endl;
    cout << " | Nilai Numerik | Tingkat Kepentingan (Preference)                            | " << endl;
    cout << " +---------------|-------------------------------------------------------------+ " << endl;
    cout << " |       1       | Sama pentingnya (Equal Importance)                          | " << endl;
    cout << " |       2       | Sama hingga sedikit lebih penting                           | " << endl;
    cout << " |       3       | Sedikit lebih penting (Slightly more importance)            | " << endl;
    cout << " |       4       | Sedikit lebih hingga jelas lebih penting                    | " << endl;
    cout << " |       5       | Jelas lebih penting (Materially more importance)            | " << endl;
    cout << " |       6       | Jelas hingga sangat jelas lebih penting)                    | " << endl;
    cout << " |       7       | Sangat jelas lebih penting (Significantly more importance)) | " << endl;
    cout << " |       8       | Sangat jelas hingga mutlak lebih penting                    | " << endl;
    cout << " |       9       | Mutlak lebih penting (Absolutely more importance)           | " << endl;
    cout << " +-----------------------------------------------------------------------------+ " << endl;
    cout << endl;
}

void definisi(){
    cout << endl;
    cout << "          REKOMENDASI : MOHON UNTUK MEMBUKA PROGRAM DENGAN LAYAR PENUH (FULL SCREEN) \n" << endl;
    system("pause");
    system("cls");
    cout << endl;
    cout << " DEFINISI SISTEM ANALYTIC HIERARCHY PROGRAM (1/2) \n" << endl;
    cout << " Analytic Hierarchy Process (AHP) merupakan suatu model pendukung keputusan yang dikembangkan oleh Thomas L. Saaty. Model pendukung keputusan ini akan menguraikan \n masalah multi faktor atau multi kriteria yang kompleks menjadi suatu hirarki. " << endl;
    cout << endl;
    cout << " Hirarki  didefinisikan sebagai suatu representasi dari sebuah permasalahan yang kompleks dalam suatu struktur multi level dimana level pertama adalah tujuan, yang \n diikuti level faktor, kriteria, sub kriteria, dan seterusnya ke bawah hingga level terakhir dari alternatif" << endl;
    cout << endl;
    system("pause");
    system("cls");
    cout << endl;
    cout << " DEFINISI SISTEM ANALYTIC HIERARCHY PROGRAM (2/2) \n" << endl;
    cout << " AHP membantu para pengambil keputusan untuk memperoleh solusi terbaik dengan mendekomposisi permasalahan kompleks ke dalam bentuk yang lebih sederhana untuk kemudian \n melakukan sintesis terhadap berbagai faktor yang terlibat dalam permasalahan pengambilan keputusan tersebut." << endl;
    cout << endl;
    cout << " AHP mempertimbangkan aspek kualitatif dan kuantitatif dari suatu keputusan dan mengurangikompleksitas suatu keputusan dengan membuat perbandingan satu-satu dari \n berbagai kriteria yang dipilih untuk kemudian mengolah dan memperoleh hasilnya. " << endl;
    cout << endl;
    system("pause");
    system("cls");
}

void value(){
    cout << endl;
    cout << " KEUNTUNGAN PENGGUNAAN SISTEM ANALYTIC HIERARCHY PROGRAM \n" << endl;
    cout << " - Struktur yang berhirarki, sebagai konsekuesi dari kriteria yang  dipilih, sampai pada subkriteria yang paling dalam. " << endl;
    cout << " - Memperhitungkan validitas sampai dengan batas toleransi inkonsistensi berbagai kriteria dan alternatif yang dipilih oleh pengambil keputusan. " << endl;
    cout << " - Memperhitungkan daya tahan output analisis sensitivitas pengambilan keputusan." << endl;
    cout << endl;
    system("pause");
    system("cls");
}

void petunjuk(){
    cout << endl;
    cout << " PETUNJUK PENGGUNAAN SISTEM ANALYTIC HIERARCHY PROGRAM \n" << endl;
    cout << " 1. Isi biodata Anda yang mencakup nama, usia dan jurusan " << endl;
    cout << " 2. Lalu pilih opsi pertama (1) untuk menjalankan sistem" << endl;
    cout << " 3. Setelah itu sistem akan menampilkan dua pilihan mata pelajaran, pilihlah dengan mengetikkan kembali nama mapel yang kalian sukai/minati " << endl;
    cout << " 4. Beri nilai perbandingan dengan skala 1-9, dengan rincian dibawah " << endl;
    cout << " 5. Setelah mengisi semua maka akan muncul matriks perbandingan berpasangan dan matriks nilai kriteria" << endl;
    cout << " 6. Untuk setiap mata pelajaran anda akan memberi perbandingan terhadap pilihan jurusan yang mungkin cocok dengan anda " << endl;
    cout << " 7. Berikan nilai perbandingan nya seperti pada poin ke-4, dengan rincian dibawah " << endl;
    cout << " 8. Pada akhir baris kode akan ditampilkan perangkingan alternatif pilihan dan nilainya " << endl;
    skala();
    system("pause");
    system("cls");

}

void menu_mode(){
    cout << " --------------------------------------------------------------------------------------- " << endl;
    cout << " |       Mode Terbaik vs Mode Standar - Sistem Pemilihan Jurusan Perguruan Tinggi      | " << endl;
    cout << " --------------------------------------------------------------------------------------- " << endl;
    cout << " | Mode Terbaik : Adalah mode yang ada pada sistem ini yang menggunakan perhitungan    | " << endl;
    cout << " |                consistency ratio sebagai parameter penentu apakah jawaban dari      | " << endl;
    cout << " |                pengguna dapat dikatakan konsisten atau tidak.                       | " << endl;
    cout << " |                Jika hasil consistency ratio nya lebih dari 0.1 atau 10%, maka sistem| " << endl;
    cout << " |                akan mengulang kembali bagian pertanyaan dimana pengguna dirasa oleh | " << endl;
    cout << " |                sistem tidak konsisten ketika memberikan jawaban atas pertanyaan yang| " << endl;
    cout << " |                diberikan oleh pengguna hingga hasil perhitungan nilai jawaban dari  | " << endl;
    cout << " |                pengguna konsisten.                                                  | " << endl;
    cout << " |                Kelebihan dari mode ini adalah pengguna akan mendapatkan hasil yang  | " << endl;
    cout << " |                lebih akurat, namun prosesnya akan sedikit memakan waktu dikarenakan | " << endl;
    cout << " |                proses perhitungan matematikanya yang lebih banyak.                  | " << endl;
    cout << " |                                -------------------------                            | " << endl;
    cout << " | Mode Standar : Adalah mode yang tidak memiliki consistency ratio sebagai parameter  | " << endl;
    cout << " |                konsisten atau tidaknya jawbaan yang diberikan oleh pengguna.        | " << endl;
    cout << " |                Mode standar ini tidak dibatasi oleh consistency ratio, sehingga     | " << endl;
    cout << " |                sistem tidak akan mengulang kembali bagian pertanyaan dimana pengguna| " << endl;
    cout << " |                dirasa tidak konsisten atas jawabannya. Akan tetapi, ini akan        | " << endl;
    cout << " |                menurunkan tingkat akurasi yang akan diberikan oleh sistem kepada    | " << endl;
    cout << " |                pengguna.                                                            | " << endl;
    cout << " |                Kelebihan dari mode ini adalah pengguna akan mendapatkan hasil yang  | " << endl;
    cout << " |                lebih cepat, akan tetapi hasil yang diberikan oleh sistem akan kurang| " << endl;
    cout << " |                akurat dikarenakan proses matematikanya yang lebih sedikit.          | " << endl;
    cout << " --------------------------------------------------------------------------------------- " << endl;

}
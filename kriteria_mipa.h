#include <iostream>
#include <cmath>
#include <iomanip>

/* Matriks Perbandingan Berpasangan
                    Matematika      Fisika      Kimia       Biologi     Inggris
Matematika              aa            ab         ac           ad           ae
Fisika                  ba            bb         bc           bd           be
Kimia                   ca            cb         cc           cd           ce    
Biologi                 da            db         dc           dd           de       
Inggris                 ea            eb         ec           ed           ee
                       sum1          sum2       sum3         sum4         sum5
*/

/* Matriks Nilai Kriteria
                    Matematika      Fisika      Kimia       Biologi     Inggris      Jumlah         Rata-rata
Matematika              a1            a2         a3           a4           a5        a_total        a_rata
Fisika                  b1            b2         b3           b4           b5        b_total        b_rata
Kimia                   c1            c2         c3           c4           c5        c_total        c_rata
Biologi                 d1            d2         d3           d4           d5        d_total        d_rata
Inggris                 e1            e2         e3           e4           e5        e_total        e_rata
                    sum1_total    sum2_total  sum3_total  sum4_total   sum5_total
*/



void perbandingan_kriteria_mipa(){
    // cout << "Pilihlah mana yang menurut kamu lebih penting" << endl;
    cout << "***Pilihlah mana yang kamu lebih sukai!***" << endl;

    cout << "1) Manakah yang lebih kamu sukai : " << endl;                                                     // Matematika atau Fisika?
    cout << "1. Perhitungan besaran, struktur, ruang serta perubahannya" << endl;                              // Matematika
    cout << "2. Sains yang mempelajari sifat dan fenomena alam beserta interaksinya" << endl;                  // Fisika
    cout << "Pilihan : "; cin >> pil1;
    if(pil1 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ab;
        ba = ab / pow(ab, 2);
    }else if(pil1 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ba;
        ab = ba / pow(ba , 2);
    }

    cout << endl;

    cout << "2) Manakah yang lebih kamu sukai : " << endl;                                         // Matematika atau Kimia?
    cout << "1. Perhitungan besaran, struktur, ruang serta perubahannya" << endl;                  // Matematika
    cout << "2. Bereksperimen dengan senyawa dan molekul di laboratorium" << endl;                 // Kimia
    cout << "Pilihan : "; cin >> pil2;
    if(pil2 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ac;
        ca = ac / pow(ac, 2);
    }else if(pil2 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ca;
        ac = ca / pow(ca , 2);
    }

    cout << endl;

    cout << "3) Manakah yang lebih kamu sukai : " << endl;                                                       // Matematika atau Biologi?
    cout << "1. Perhitungan besaran, struktur, ruang serta perubahannya" << endl;                                // Matematika
    cout << "2. Mempelajari makhluk hidup yang mencangkup evolusi, persebaran, serta taksonominya" << endl;      // Biologi
    cout << "Pilihan : "; cin >> pil3;
    if(pil3 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ad;
        da = ad / pow(ad, 2);
    }else if(pil3 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> da;
        ad = da / pow(da , 2);
    }

    cout << endl;

    cout << "4) Manakah yang lebih kamu sukai : " << endl;                                                     // Matematika atau Inggris?
    cout << "1. Perhitungan besaran, struktur, ruang serta perubahannya" << endl;                              // Matematika
    cout << "2. Mempelajari Ilmu kebahasaan, dan komunikasi" << endl;                                          // Inggris
    cout << "Pilihan : "; cin >> pil4;
    if(pil4 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ae;
        ea = ae / pow(ae, 2);
    }else if(pil4 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ea;
        ae = ea / pow(ea , 2);
    }

    cout << endl;

    cout << "5) Manakah yang lebih kamu sukai : " << endl;                                                       // Fisika atau Kimia?
    cout << "1. Sains yang mempelajari sifat dan fenomena alam beserta interaksinya" << endl;                    // Fisika
    cout << "2. Bereksperimen dengan senyawa dan molekul di laboratorium" << endl;                               // Kimia
    cout << "Pilihan : "; cin >> pil5;
    if(pil5 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> bc;
        cb = bc / pow(bc, 2);
    }else if(pil5 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> cb;
        bc = cb / pow(cb, 2);
    }
    
    cout << endl;

    cout << "6) Manakah yang lebih kamu sukai : " << endl;                                                       // Fisika atau Biologi?
    cout << "1. Sains yang mempelajari sifat dan fenomena alam beserta interaksinya" << endl;                    // Fisika
    cout << "2. Mempelajari makhluk hidup yang mencangkup evolusi, persebaran, serta taksonominya" << endl;      // Biologi
    cout << "Pilihan : "; cin >> pil6;
    if(pil6 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> bd;
        db = bd / pow(bd, 2);
    }else if(pil6 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> db;
        bd = db / pow(db, 2);
    }

    cout << endl;

    cout << "7) Manakah yang lebih kamu sukai : " << endl;                                                       // Fisika atau Inggris?
    cout << "1. Sains yang mempelajari sifat dan fenomena alam beserta interaksinya" << endl;                    // Fisika
    cout << "2. Mempelajari Ilmu kebahasaan, dan komunikasi" << endl;                                            // Inggris
    cout << "Pilihan : "; cin >> pil7; 
    if(pil7 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> be;
        eb = be / pow(be, 2);
    }else if(pil7 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> eb;
        be = eb / pow(eb, 2);
    }

    cout << endl;

    cout << "8) Manakah yang lebih kamu sukai : " << endl;                                                       // Kimia atau Biologi?
    cout << "1. Bereksperimen dengan senyawa dan molekul di laboratorium" << endl;                               // Kimia
    cout << "2. Mempelajari makhluk hidup yang mencangkup evolusi, persebaran, serta taksonominya" << endl;      // Biologi
    cout << "Pilihan : "; cin >> pil8;
    if(pil8 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> cd;
        dc = cd / pow(cd, 2);
    }else if(pil8 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> dc;
        cd = dc / pow(dc, 2);
    }

    cout << endl;

    cout << "9) Manakah yang lebih kamu sukai : " << endl;                                                       // Kimia atau Inggris?
    cout << "1. Bereksperimen dengan senyawa dan molekul di laboratorium" << endl;                               // Kimia
    cout << "2. Mempelajari Ilmu kebahasaan, dan komunikasi" << endl;                                            // Inggris
    cout << "Pilihan : "; cin >> pil9;
    if(pil9 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ce;
        ec = ce / pow(ce, 2);
    }else if(pil9 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ec;
        ce = ec / pow(ec, 2);
    }

    cout << endl;

    cout << "10) Manakah yang lebih kamu sukai : " << endl;                                                       // Biologi atau Inggris?
    cout << "1. Mempelajari makhluk hidup yang mencangkup evolusi, persebaran, serta taksonominya" << endl;       // Biologi
    cout << "2. Mempelajari Ilmu kebahasaan, dan komunikasi" << endl;                                             // Inggris
    cout << "Pilihan : "; cin >> pil10;
    if(pil10 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> de;
        ed = de / pow(de, 2);
    }else if(pil10 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ed;
        de = ed / pow(ed, 2);
    }

// Menentukan jumlah untuk Matriks Perbandingan Berpasangan Setiap Barisnya
sum1 = aa + ba + ca + da + ea;
sum2 = ab + bb + cb + db + eb;
sum3 = ac + bc + cc + dc + ec;
sum4 = ad + bd + cd + dd + ed;
sum5 = ae + be + ce + de + ee;

// Proses Perhitungan Matriks Nilai Kriteria
a1 = aa / sum1;
b1 = ba / sum1;
c1 = ca / sum1;
d1 = da / sum1;
e1 = ea / sum1;

a2 = ab / sum2;
b2 = bb / sum2;
c2 = cb / sum2;
d2 = db / sum2;
e2 = eb / sum2;

a3 = ac / sum3;
b3 = bc / sum3;
c3 = cc / sum3;
d3 = dc / sum3;
e3 = ec / sum3;

a4 = ad / sum4;
b4 = bd / sum4;
c4 = cd / sum4;
d4 = dd / sum4;
e4 = ed / sum4;

a5 = ae / sum5;
b5 = be / sum5;
c5 = ce / sum5;
d5 = de / sum5;
e5 = ee / sum5;

sum1_total = a1 + b1 + c1 + d1 + e1;
sum2_total = a2 + b2 + c2 + d2 + e2;
sum3_total = a3 + b3 + c3 + d3 + e3;
sum4_total = a4 + b4 + c4 + d4 + e4;
sum5_total = a5 + b5 + c5 + d5 + e5;

a_total = a1 + a2 + a3 + a4 + a5;
b_total = b1 + b2 + b3 + b4 + b5;
c_total = c1 + c2 + c3 + c4 + c5;
d_total = d1 + d2 + d3 + d4 + d5;
e_total = e1 + e2 + e3 + e4 + e5;

a_rata = a_total / 5;
b_rata = b_total / 5;
c_rata = c_total / 5;
d_rata = d_total / 5;
e_rata = e_total / 5;

lambda_max_kriteria_mipa = (sum1 * a_rata) + (sum2 * b_rata) + (sum3 * c_rata) + (sum4 * d_rata) + (sum5 * e_rata);
consistency_index1 = (lambda_max_kriteria_mipa - 5) / (5-1);
consistency_ratio1 = consistency_index1 / index_random_consistency;
cout << endl;
}

void matriks_perbandingan_berpasangan_kriteria_mipa(){
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "                    ---------- Matriks Perbandingan Berpasangan ----------      \n";
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "\t\tMatematika" << "\t" << "Fisika" << "\t\t" << "Kimia" << "\t\t" << "Biologi" << "\t\t" << "Inggris" << endl; 
    cout << setprecision(2) << "Matematika\t" << aa << "\t\t" << ab << "\t\t" << ac << "\t\t" << ad << "\t\t" << ae << endl;
    cout << setprecision(2) << "Fisika\t\t" << ba << "\t\t" << bb << "\t\t" << bc << "\t\t" << bd << "\t\t" << be << endl;
    cout << setprecision(2) << "Kimia\t\t" << ca << "\t\t" << cb << "\t\t" << cc << "\t\t" << cd << "\t\t" << ce << endl;
    cout << setprecision(2) << "Biologi\t\t" << da << "\t\t" << db << "\t\t" << dc << "\t\t" << dd << "\t\t" << de << endl;
    cout << setprecision(2) << "Inggris\t\t" << ea << "\t\t" << eb << "\t\t" << ec << "\t\t" << ed << "\t\t" << ee << endl;
    cout << setprecision(2) << "\t\t" << sum1 << "\t\t" << sum2 << "\t\t" << sum3 << "\t\t" << sum4 << "\t\t" << sum5 << endl;
}

void matriks_nilai_kriteria_kriteria_mipa(){
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "                    ---------- Matriks Nilai Kriteria ----------      \n";
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "\t\tMatematika" << "\t" << "Fisika" << "\t\t" << "Kimia" << "\t\t" << "Biologi" << "\t\t" << "Inggris" << "\t\t" << "Jumlah" << "\t\t" << "Rata-rata" << endl; 
    cout << setprecision(2) << "Matematika\t" << a1 << "\t\t" << a2 << "\t\t" << a3 << "\t\t" << a4 << "\t\t" << a5 << "\t\t" << a_total << "\t\t" << a_rata << endl;
    cout << setprecision(2) << "Fisika\t\t" << b1 << "\t\t" << b2 << "\t\t" << b3 << "\t\t" << b4 << "\t\t" << b5 << "\t\t" << b_total << "\t\t" << b_rata << endl;
    cout << setprecision(2) << "Kimia\t\t" << c1 << "\t\t" << c2 << "\t\t" << c3 << "\t\t" << c4 << "\t\t" << c5 << "\t\t" << c_total << "\t\t" << c_rata << endl;
    cout << setprecision(2) << "Biologi\t\t" << d1 << "\t\t" << d2 << "\t\t" << d3 << "\t\t" << d4 << "\t\t" << d5 << "\t\t" << d_total << "\t\t" << d_rata << endl;
    cout << setprecision(2) << "Inggris\t\t" << e1 << "\t\t" << e2 << "\t\t" << e3 << "\t\t" << e4 << "\t\t" << e5 << "\t\t" << e_total << "\t\t" << e_rata << endl;
    cout << setprecision(2) << "\t\t" << sum1_total << "\t\t" << sum2_total << "\t\t" << sum3_total << "\t\t" << sum4_total << "\t\t" << sum5_total << endl;
    cout << "Lambda Max        : " << lambda_max_kriteria_mipa << endl;
    cout << "Consistency Index : " << consistency_index1 << endl;
    cout << "Consistency Ratio : " << consistency_ratio1 << endl;
}
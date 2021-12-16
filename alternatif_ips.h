#include <iostream>
#include <cmath>


/*
Kriteria 1 -> Sosiologi (Matriks Perbandingan Berpasangan)
                    Psikologi     IlmuSejarah  Geografi    Ekonomi       Alternatif MIPA
Psikologi              ff              fg         fh         fi            fj
IlmuSejarah            gf              gg         gh         gi            gj
Geografi               hf              hg         hh         hi            hj
Ekonomi                ifx             ig         ih         ii            ij
Alternatif MIPA        jf              jg         jh         ji            jj
                      sum6            sum7       sum8       sum9          sum10
*/

/*
Kriteria 1 -> Sosiologi (Matriks Nilai Kriteria)
                    Psikologi       IlmuSejarah  Geografi    Ekonomi    Alternatif MIPA       Total        Rata-rata
Psikologi              ff1             fg1         fh1        fi1           fj1              f_total        f_rata
IlmuSejarah            gf1             gg1         gh1        gi1           gj1              g_total        g_rata
Geografi               hf1             hg1         hh1        hi1           hj1              h_total        h_rata
Ekonomi                if1             ig1         ih1        ii1           ij1              i_total        i_rata
Alternatif MIPA        jf1             jg1         jh1        ji1           jj1              j_total        j_rata
                   sum6_total     sum7_total  sum8_total  sum9_total     sum10_total
*/

// --------------------------------------------------------------------------------------------------------------------------

/*
Kriteria 2 -> Sejarah (Matriks Perbandingan Bersama)
                    Psikologi      IlmuSejarah  Geografi  Ekonomi    Alternatif MIPA
Psikologi              kk              kl         km         kn            ko
IlmuSejarah            lk              ll         lm         ln            lo
Geografi               mk              ml         mm         mn            mo
Ekonomi                nk              nl         nm         nn            no
Alternatif MIPA        ok              ol         om         on            oo
                     sum11           sum12      sum13      sum14         sum15
*/

/*
Kriteria 2 -> Sejarah (Matriks Penilaian Kriteria)
                         Psikologi      IlmuSejarah  Geografi    Ekonomi   Alternatif MIPA    Jumlah        Rata-rata
Psikologi                    kk1             kl1        km1        kn1           ko1         k_jumlah        k_rata
IlmuSejarah                  lk1             ll1        lm1        ln1           lo1         l_jumlah        l_rata
Geografi                     mk1             ml1        mm1        mn1           mo1         m_jumlah        m_rata
Ekonomi                      nk1             nl1        nm1        nn1           no1         n_jumlah        n_rata
Alternatif MIPA              ok1             ol1        om1        on1           oo1         0_jumlah        o_rata
                         sum11_total    sum12_total sum13_total sum14_total  sum15_total
*/

// --------------------------------------------------------------------------------------------------------------------------

/*
Kriteria 3 -> Geografi (Matriks Perbandingan Bersama)
                    Psikologi  IlmuSejarah  Geografi  Ekonomi  Alternatif MIPA
Psikologi               pp         pq         pr         ps            pt
IlmuSejarah             qp         qq         qr         qs            qt
Geografi                rp         rq         rr         rs            rt
Ekonomi                 sp         sq         sr         ss            st
Alternatif MIPA         tp         tq         tr         ts            tt
                      sum16      sum17      sum18      sum19         sum20
*/

/*
Kriteria 3 -> Geografi (Matriks Penilaian Kriteria)
                    Psikologi      IlmuSejarah  Geografi    Ekonomi   Alternatif MIPA  total     Rata-rata
Psikologi              pp1             pq1        pr1        ps1           pt1         p_total    p_rata
IlmuSejarah            qp1             qq1        qr1        qs1           qt1         q_total    q_rata
Geografi               rp1             rq1        rr1        rs1           rt1         r_total    r_rata
Ekonomi                sp1             sq1        sr1        ss1           st1         s_total    s_rata
Alternatif MIPA        tp1             tq1        tr1        ts1           tt1         t_total    t_rata
                   sum16_total    sum17_total  sum18_total sum19_total  sum20_total
*/

// --------------------------------------------------------------------------------------------------------------------------

/*
Kriteria 4 -> Ekonomi (Matriks Perbandingan Bersama)
                    Psikologi       IlmuSejarah  Geografi  Ekonomi  Alternatif MIPA
Psikologi               uu              uv         uw         ux            uy
IlmuSejarah             vu              vv         vw         vx            vy
Geografi                wu              wv         ww         wx            wy
Ekonomi                 xu              xv         xw         xx            xy
Alternatif MIPA         yu              yv         yw         yx            yy
                       sum21           sum22      sum23      sum24         sum25
*/

/*
Kriteria 4 -> Ekonomi (Matriks Penilaian Kriteria)
                    Psikologi      IlmuSejarah   Geografi   Ekonomi    Alternatif MIPA     total      Rata-rata
Psikologi              uu1             uv1        uw1        ux1           uy1             u_total    u_rata
IlmuSejarah            vu1             vv1        vw1        vx1           vy1             v_total    v_rata
Geografi               wu1             wv1        ww1        wx1           wy1             w_total    w_rata
Ekonomi                xu1             xv1        xw1        xx1           xy1             x_total    x_rata
Alternatif MIPA        yu1             yv1        yw1        yx1           yy1             y_total    y_rata
                  sum21_total   sum22_total  sum23_total sum24_total   sum25_total
*/

// --------------------------------------------------------------------------------------------------------------------------

/*
Kriteria 5 -> Inggris (Matriks Perbandingan Bersama)
                    Psikologi      IlmuSejarah  Geografi  Ekonomi     Alternatif MIPA
Psikologi             aaa             aab        aac        aad           aae
IlmuSejarah           bba             bbb        bbc        bbd           bbe
Geografi              cca             ccb        ccc        ccd           cce
Ekonomi               dda             ddb        ddc        ddd           dde
Alternatif MIPA       eea             eeb        eec        eed           eee
                     sum26           sum27      sum28      sum29         sum30
*/

/*
Kriteria 5 -> Inggris (Matriks Nilai Kriteria)
                    Psikologi      IlmuSejarah  Geografi     Ekonomi    Alternatif MIPA     Jumlah
Psikologi             aaa1            aab1       aac1        aad1           aae1            aa_jumlah
IlmuSejarah           bba1            bbb1       bbc1        bbd1           bbe1            bb_jumlah
Geografi              cca1            ccb1       ccc1        ccd1           cce1            cc_jumlah
Ekonomi               dda1            ddb1       ddc1        ddd1           dde1            dd_jumlah
Alternatif MIPA       eea1            eeb1       eec1        eed1           eee1            ee_jumlah
                   sum26_total    sum27_total  sum28_total sum29_total   sum30_total
*/

// --------------------------------------------------------------------------------------------------------------------------
using namespace std;

// Alternatif Kriteria 1
void alternatif_kriteria1_sosiologi(){
    cout << "A. Pilihlah yang menurut kamu menarik!" << endl;

    cout << "1) Manakah yang membuatmu tertarik ? " << endl;                                                                                // Psikolog atau Ilmu Sejarah
    cout << "1. Belajar disiplin ilmu yang mempelajari mental, pikiran, dan perilaku manusia " << endl;                                     // Psikologi
    cout << "2. Mengkaji tata cara interaksi, kebudayaan dan tatanan sosial orang terdahulu untuk mengetahui sosialisasi manusia " << endl; // Ilmu Sejarah
    cout << "Pilihan : "; cin >> pil_alter1;
    if(pil_alter1 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> fg;
        gf = fg / pow(fg, 2);
    }else if(pil_alter1 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> gf;
        fg = gf / pow(gf, 2);
    }
    cout << endl;
    cout << "2) Manakah yang membuatmu tertarik ? " << endl;                                                                                // Psikolog atau Geografi
    cout << "1. Belajar disiplin ilmu yang mempelajari mental, pikiran, dan perilaku manusia " << endl;                                     // Psikologi
    cout << "2. Meneliti struktur bumi untuk pemukiman masyarakat" << endl;                                                                 // Geografi
    cout << "Pilihan : "; cin >> pil_alter2;
    if(pil_alter2 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> fh;
        hf = fh / pow(fh, 2);
    }else if(pil_alter2 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> hf;
        fh = hf / pow(hf, 2);
    }
    cout << endl;
    cout << "3) Manakah yang membuatmu tertarik ? " << endl;                                                                                // Psikolog atau Ekonomi
    cout << "1. Belajar disiplin ilmu yang mempelajari mental, pikiran, dan perilaku manusia " << endl;                                     // Psikologi
    cout << "2. Mempelajari pola konsumsi yang dimiliki oleh suatu masyarakat" << endl;                                                     // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter3;
    if(pil_alter3 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> fi;
        ifx = fi / pow(fi, 2);
    }else if(pil_alter3 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ifx;
        fi = ifx / pow(ifx, 2);
    }
    cout << endl;
    cout << "4) Manakah yang membuatmu tertarik ? " << endl;                                                                                // Psikolog atau Ekonomi
    cout << "1. Belajar disiplin ilmu yang mempelajari mental, pikiran, dan perilaku manusia " << endl;                                     // Psikologi
    cout << "2. Menyukai dunia teknologi yang saat ini sedang berkembang pesat" << endl;                                                    // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter4;
    if(pil_alter4 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> fj;
        jf = fj / pow(fj, 2);
    }else if(pil_alter4 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> jf;
        fj = jf / pow(jf, 2);
    }
    cout << endl;
    cout << "5) Manakah yang membuatmu tertarik ? " << endl;                                                                                // Ilmu Sejarah atau Geografi
    cout << "1. Mengkaji tata cara interaksi, kebudayaan dan tatanan sosial orang terdahulu untuk mengetahui sosialisasi manusia " << endl; // Ilmu Sejarah
    cout << "2. Meneliti struktur bumi untuk pemukiman masyarakat" << endl;                                                                 // Geografi
    cout << "Pilihan : "; cin >> pil_alter5;
    if(pil_alter5 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> gh;
        hg = gh / pow(gh, 2);
    }else if(pil_alter5 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> hg;
        gh = hg / pow(hg, 2);
    }
    cout << endl;
    cout << "6) Manakah yang membuatmu tertarik ? " << endl;                                                                                // Ilmu Sejarah atau Ekonomi
    cout << "1. Mengkaji tata cara interaksi, kebudayaan dan tatanan sosial orang terdahulu untuk mengetahui sosialisasi manusia" << endl;  // Ilmu Sejarah
    cout << "2. Mempelajari pola konsumsi yang dimiliki oleh suatu masyarakat" << endl;                                                     // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter6;
    if(pil_alter6 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> gi;
        ig = gi / pow(gi, 2);
    }else if(pil_alter6 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ig;
        gi = ig / pow(ig, 2);
    }
    cout << endl;
    cout << "7) Manakah yang membuatmu tertarik ? " << endl;                                                                                // Ilmu Sejarah atau Alternatif MIPA
    cout << "1. Mengkaji tata cara interaksi, kebudayaan dan tatanan sosial orang terdahulu untuk mengetahui sosialisasi manusia" << endl;  // Ilmu Sejarah
    cout << "2. Menyukai dunia teknologi yang saat ini sedang berkembang pesat" << endl;                                                    // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter7;
    if(pil_alter7 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> gj;
        jg = gj / pow(gj, 2);
    }else if(pil_alter7 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> jg;
        gj = jg / pow(jg, 2);
    }
    cout << endl;
    cout << "8) Manakah yang membuatmu tertarik ? " << endl;                                                                                // Geografi atau Ekonomi
    cout << "1. Meneliti struktur bumi untuk pemukiman masyarakat" << endl;                                                                 // Geografi
    cout << "2. Mempelajari pola konsumsi yang dimiliki oleh suatu masyarakat" << endl;                                                     // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter8;
    if(pil_alter8 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> hi;
        ih = hi / pow(hi, 2);
    }else if(pil_alter8 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ih;
        hi = ih / pow(ih, 2);
    }
    cout << endl;
    cout << "9) Manakah yang membuatmu tertarik ? " << endl;                                                                                // Geografi atau Alternatif MIPA
    cout << "1. Meneliti struktur bumi untuk pemukiman masyarakat" << endl;                                                                 // Geografi
    cout << "2. Menyukai dunia teknologi yang saat ini sedang berkembang pesat" << endl;                                                    // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter9;
    if(pil_alter9 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> hj;
        jh = hj / pow(hj, 2);
    }else if(pil_alter9 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> jh;
        hj = jh / pow(jh, 2);
    }
    cout << endl;
    cout << "10) Manakah yang membuatmu tertarik ? " << endl;                                                                               // Ekonomi atau Alternatif MIPA
    cout << "1. Mempelajari pola konsumsi yang dimiliki oleh suatu masyarakat" << endl;                                                     // Ekonomi
    cout << "2. Menyukai dunia teknologi yang saat ini sedang berkembang pesat" << endl;                                                    // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter10;
    if(pil_alter10 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ij;
        ji = ij / pow(ij, 2);
    }else if(pil_alter10 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ji;
        ij = ji / pow(ji, 2);
    }

// Menentukan Jumlah untuk Matriks Perbandingan Berpasangan Setiap Barisnya
sum6 = ff + gf + hf + ifx + jf;
sum7 = fg + gg + hg + ig + jg;
sum8 = fh + gh + hh + ih + jh;
sum9 = fi + gi + hi + ii + ji;
sum10 = fj + gj + hj + ij + jj;

// Proses Perhitungan Matriks Nilai Kriteria
ff1 = ff / sum6;
gf1 = gf / sum6;
hf1 = hf / sum6;
if1 = ifx / sum6;
jf1 = jf / sum6;

fg1 = fg / sum7;
gg1 = gg / sum7;
hg1 = hg / sum7;
ig1 = ig / sum7;
jg1 = jg / sum7;

fh1 = fh / sum8;
gh1 = gh / sum8;
hh1 = hh / sum8;
ih1 = ih / sum8;
jh1 = jh / sum8;

fi1 = fi / sum9;
gi1 = gi / sum9;
hi1 = hi / sum9;
ii1 = ii / sum9;
ji1 = ji / sum9;

fj1 = fj / sum10;
gj1 = gj / sum10;
hj1 = hj / sum10;
ij1 = ij / sum10;
jj1 = jj / sum10;

sum6_total = ff1 + gf1 + hf1 + if1 + jf1;
sum7_total = fg1 + gg1 + hg1 + ig1 + jg1;
sum8_total = fh1 + gh1 + hh1 + ih1 + jh1;
sum9_total = fi1 + gi1 + hi1 + ii1 + ji1;
sum10_total = fj1 + gj1 + hj1 + ij1 + jj1;

f_total = ff1 + fg1 + fh1 + fi1 + fj1;
g_total = gf1 + gg1 + gh1 + gi1 + gj1;
h_total = hf1 + hg1 + hh1 + hi1 + hj1;
i_total = if1 + ig1 + ih1 + ii1 + ij1;
j_total = jf1 + jg1 + jh1 + ji1 + jj1;

f_rata = f_total / 5;
g_rata = g_total / 5;
h_rata = h_total / 5;
i_rata = i_total / 5;
j_rata = j_total / 5;

lambda_max_alternatif1 = (sum6 * f_rata) + (sum7 * g_rata) + (sum8 * h_rata) + (sum9 * i_rata) + (sum10 * j_rata);
consistency_index_alternatif1 = (lambda_max_alternatif1 - 5) / (5-1);
consistency_ratio_alternatif1 = consistency_index_alternatif1 / index_random_consistency;

cout << endl;
}

void matriks_perbandingan_berpasangan_alternatif_1_sosiologi(){
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "                    ---------- Matriks Perbandingan Berpasangan ----------      \n";
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\tPsikologi" << "\t" << "\tIlmu Sejarah" << "\t" << "Geografi" << "\t" << "Ekonomi" << "\t\t" << "Alternatif MIPA" << endl; 
    cout << setprecision(2) << "Psikologi\t\t" << ff << "\t\t\t" << fg << "\t\t" << fh << "\t\t" << fi << "\t\t" << fj << endl;
    cout << setprecision(2) << "Ilmu Sejarah\t\t" << gf << "\t\t\t" << gg << "\t\t" << gh << "\t\t" << gi << "\t\t" << gj << endl;
    cout << setprecision(2) << "Geografi\t\t" << hf << "\t\t\t" << hg << "\t\t" << hh << "\t\t" << hi << "\t\t" << hj << endl;
    cout << setprecision(2) << "Ekonomi\t\t\t" << ifx << "\t\t\t" << ig << "\t\t" << ih << "\t\t" << ii << "\t\t" << ij << endl;
    cout << setprecision(2) << "Alternatif MIPA\t\t" << jf << "\t\t\t" << jg << "\t\t" << jh << "\t\t" << ji << "\t\t" << jj << endl;
    cout << setprecision(2) << "\t\t\t" << sum6 << "\t\t\t" << sum7 << "\t\t" << sum8 << "\t\t" << sum9 << "\t\t" << sum10 << endl;
}

void matriks_nilai_kriteria_alternatif_1_sosiologi(){
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "                  ---------- Matriks Nilai Kriteria -> Sosiologi ----------      \n";
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\tPsikologi" << "\t" << "\tIlmu Sejarah" << "\t" << "Geografi" << "\t" << "Ekonomi" << "\t\t" << "Alternatif MIPA" << "\t" << "Jumlah" << "\t\t" << "Rata-rata" << endl; 
    cout << setprecision(2) << "Psikologi\t\t" << ff1 << "\t\t\t" << fg1 << "\t\t" << fh1 << "\t\t" << fi1 << "\t\t" << fj1 << "\t\t" << f_total << "\t\t" << f_rata << endl;
    cout << setprecision(2) << "Ilmu Sejarah\t\t" << gf1 << "\t\t\t" << gg1 << "\t\t" << gh1 << "\t\t" << gi1 << "\t\t" << gj1 << "\t\t" << g_total << "\t\t" << g_rata << endl;
    cout << setprecision(2) << "Geografi\t\t" << hf1 << "\t\t\t" << hg1 << "\t\t" << hh1 << "\t\t" << hi1 << "\t\t" << hj1 << "\t\t" << h_total << "\t\t" << h_rata << endl;
    cout << setprecision(2) << "Ekonomi\t\t\t" << if1 << "\t\t\t" << ig1 << "\t\t" << ih1 << "\t\t" << ii1 << "\t\t" << ij1 << "\t\t" << i_total << "\t\t" << i_rata << endl;
    cout << setprecision(2) << "Alternatif MIPA\t\t" << jf1 << "\t\t\t" << jg1 << "\t\t" << jh1 << "\t\t" << ji1 << "\t\t" << jj1 << "\t\t" << j_total << "\t\t" << j_rata << endl;
    cout << setprecision(2) << "\t\t\t" << sum6_total << "\t\t\t" << sum7_total << "\t\t" << sum8_total << "\t\t" << sum9_total << "\t\t" << sum10_total << endl;
    cout << "Lambda Max        : " << lambda_max_alternatif1 << endl;
    cout << "Consistency Index : " << consistency_index_alternatif1 << endl;
    cout << "Consistency Ratio : " << consistency_ratio_alternatif1 << endl;
}

// Alternatif Kriteria 2
void alternatif_kriteria2_sejarah(){
    cout << "B. Pilihlah yang menurut kamu menarik!" << endl;
    cout << "11) Manakah yang membuatmu tertarik ? " << endl;                                                                       // Psikolog atau Ilmu Sejarah
    cout << "1. Studi yang mempelajari pemikiran serta perilaku ilmuan di masa lampau" << endl;                                     // Psikologi
    cout << "2. Meneliti penemuan atau peristiwa pada masa lalu" << endl;                                                           // Ilmu Sejarah
    cout << "Pilihan : "; cin >> pil_alter11;
    if(pil_alter11 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> kl;
        lk = kl / pow(kl, 2);
    }else if(pil_alter11 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> lk;
        kl = lk / pow(lk, 2);
    }
    cout << endl;
    cout << "12) Manakah yang membuatmu tertarik ? " << endl;                                                                       // Psikolog atau Geografi
    cout << "1. Studi yang mempelajari pemikiran serta perilaku ilmuan di masa lampau" << endl;                                     // Psikologi
    cout << "2. Memahami perkembangan manusia dengan lingkungan sekitarnya" << endl;                                                // Geografi
    cout << "Pilihan : "; cin >> pil_alter12;
    if(pil_alter12 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> km;
        mk = km / pow(km, 2);
    }else if(pil_alter12 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> mk;
        km = mk / pow(mk, 2);
    }
    cout << endl;
    cout << "13) Manakah yang membuatmu tertarik ? " << endl;                                                                       // Psikolog atau Ekonomi
    cout << "1. Studi yang mempelajari pemikiran serta perilaku ilmuan di masa lampau" << endl;                                     // Psikologi
    cout << "2. Mempelajari perilaku ekonomi yang dilakukan oleh manusia di masa lalu" << endl;                                     // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter13;
    if(pil_alter13 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> kn;
        nk = kn / pow(kn, 2);
    }else if(pil_alter13 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> nk;
        kn = nk / pow(nk, 2);
    }
    cout << endl;
    cout << "14) Manakah yang membuatmu tertarik ? " << endl;                                                                       // Psikolog atau Alternatif MIPA
    cout << "1. Studi yang mempelajari pemikiran serta perilaku ilmuan di masa lampau" << endl;                                     // Psikologi
    cout << "2. Memiliki minat dalam bidang kesehatan serta perawatan orang yang sedang sakit" << endl;                             // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter14;
    if(pil_alter14 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ko;
        ok = ko / pow(ko, 2);
    }else if(pil_alter14 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ok;
        ko = ok / pow(ok, 2);
    }
    cout << endl;
    cout << "15) Manakah yang membuatmu tertarik ? " << endl;                                                                       // Ilmu Sejarah atau Geografi
    cout << "1. Meneliti penemuan atau peristiwa pada masa lalu" << endl;                                                           // Ilmu Sejarah
    cout << "2. Memahami perkembangan manusia dengan lingkungan sekitarnya" << endl;                                                // Geografi
    cout << "Pilihan : "; cin >> pil_alter15;
    if(pil_alter15 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> lm;
        ml = lm / pow(lm, 2);
    }else if(pil_alter15 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ml;
        lm = ml / pow(ml, 2);
    }
    cout << endl;
    cout << "16) Manakah yang membuatmu tertarik ? " << endl;                                                                       // Ilmu Sejarah atau Ekonomi
    cout << "1. Meneliti penemuan atau peristiwa pada masa lalu" << endl;                                                           // Ilmu Sejarah
    cout << "2. Mempelajari perilaku ekonomi yang dilakukan oleh manusia di masa lalu" << endl;                                     // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter16;
    if(pil_alter16 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ln;
        nl = ln / pow(ln, 2);
    }else if(pil_alter16 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> nl;
        ln = nl / pow(nl, 2);
    }
    cout << endl;
    cout << "17) Manakah yang membuatmu tertarik ? " << endl;                                                                       // Ilmu Sejarah atau Alternatif MIPA
    cout << "1. Meneliti penemuan atau peristiwa pada masa lalu" << endl;                                                           // Ilmu Sejarah
    cout << "2. Memiliki minat dalam bidang kesehatan serta perawatan orang yang sedang sakit" << endl;                             // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter17;
    if(pil_alter17 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> lo;
        ol = lo / pow(lo, 2);
    }else if(pil_alter17 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ol;
        lo = ol / pow(ol, 2);
    }
    cout << endl;
    cout << "18) Manakah yang membuatmu tertarik ? " << endl;                                                                       // Geografi atau Ekonomi
    cout << "1. Memahami perkembangan manusia dengan lingkungan sekitarnya" << endl;                                                // Geografi
    cout << "2. Mempelajari perilaku ekonomi yang dilakukan oleh manusia di masa lalu" << endl;                                     // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter18;
    if(pil_alter18 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> mn;
        nm = mn / pow(mn, 2);
    }else if(pil_alter18 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> nm;
        mn = nm / pow(nm, 2);
    }
    cout << endl;
    cout << "19) Manakah yang membuatmu tertarik ? " << endl;                                                                       // Geografi atau Alternatif MIPA
    cout << "1. Memahami perkembangan manusia dengan lingkungan sekitarnya" << endl;                                                // Geografi
    cout << "2. Memiliki minat dalam bidang kesehatan serta perawatan orang yang sedang sakit" << endl;                             // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter19;
    if(pil_alter19 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> mo;
        om = mo / pow(mo, 2);
    }else if(pil_alter19 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> om;
        mo = om / pow(om, 2);
    }
    cout << endl;
    cout << "20) Manakah yang membuatmu tertarik ? " << endl;                                                                       // Ekonomi atau Alternatif MIPA
    cout << "1. Mempelajari perilaku ekonomi yang dilakukan oleh manusia di masa lalu" << endl;                                     // Ekonomi
    cout << "2. Memiliki minat dalam bidang kesehatan serta perawatan orang yang sedang sakit" << endl;                             // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter20;
    if(pil_alter20 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> no;
        on = no / pow(no, 2);
    }else if(pil_alter20 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> on;
        no = on / pow(on, 2);
    }

// Mementukan jumlah untuk Matriks Perbandingan Berpasangan Setiap Barisnya
sum11 = kk + lk + mk + nk + ok;
sum12 = kl + ll + ml + nl + ol;
sum13 = km + lm + mm + nm + om;
sum14 = kn + ln + mn + nn + on;
sum15 = ko + lo + mo + no + oo;

// Proses Perhitungan Matriks Nilai Kriteria
kk1 = kk / sum11;
lk1 = lk / sum11;
mk1 = mk / sum11;
nk1 = nk / sum11;
ok1 = ok / sum11;

kl1 = kl / sum12;
ll1 = ll / sum12;
ml1 = ml / sum12;
nl1 = nl / sum12;
ol1 = ol / sum12;

km1 = km / sum13;
lm1 = lm / sum13;
mm1 = mm / sum13;
nm1 = nm / sum13;
om1 = om / sum13;

kn1 = kn / sum14;
ln1 = ln / sum14;
mn1 = mn / sum14;
nn1 = nn / sum14;
on1 = on / sum14;

ko1 = ko / sum15;
lo1 = lo / sum15;
mo1 = mo / sum15;
no1 = no / sum15;
oo1 = oo / sum15;

sum11_total = kk1 + lk1 + mk1 + nk1 + ok1;
sum12_total = kl1 + ll1 + ml1 + nl1 + ol1;
sum13_total = km1 + lm1 + mm1 + nm1 + om1;
sum14_total = kn1 + ln1 + mn1 + nn1 + on1;
sum15_total = ko1 + lo1 + mo1 + no1 + oo1;

k_total = kk1 + kl1 + km1 + kn1 + ko1;
l_total = lk1 + ll1 + lm1 + ln1 + lo1;
m_total = mk1 + ml1 + mm1 + mn1 + mo1;
n_total = nk1 + nl1 + nm1 + nn1 + no1;
o_total = ok1 + ol1 + om1 + on1 + oo1;

k_rata = k_total / 5;
l_rata = l_total / 5;
m_rata = m_total / 5;
n_rata = n_total / 5;
o_rata = o_total / 5;

lambda_max_alternatif2 = (sum11 * k_rata) + (sum12 * l_rata) + (sum13 * m_rata) + (sum14 * n_rata) + (sum15 * o_rata);
consistency_index_alternatif2 = (lambda_max_alternatif2 - 5) / (5-1);
consistency_ratio_alternatif2 = consistency_index_alternatif2 / index_random_consistency;

cout << endl;

}

void matriks_perbandingan_berpasangan_alternatif_2_sejarah(){
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "                    ---------- Matriks Perbandingan Berpasangan ----------      \n";
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\tPsikologi" << "\t" << "\tIlmu Sejarah" << "\t" << "Geografi" << "\t" << "Ekonomi" << "\t\t" << "Alternatif MIPA" << endl; 
    cout << setprecision(2) << "Psikologi\t\t" << kk << "\t\t\t" << kl << "\t\t" << km << "\t\t" << kn << "\t\t" << ko << endl;
    cout << setprecision(2) << "Ilmu Sejarah\t\t" << lk << "\t\t\t" << ll << "\t\t" << lm << "\t\t" << ln << "\t\t" << lo << endl;
    cout << setprecision(2) << "Geografi\t\t" << mk << "\t\t\t" << ml << "\t\t" << mm << "\t\t" << mn << "\t\t" << mo << endl;
    cout << setprecision(2) << "Ekonomi\t\t\t" << nk << "\t\t\t" << nl << "\t\t" << nm << "\t\t" << nn << "\t\t" << no << endl;
    cout << setprecision(2) << "Alternatif MIPA\t\t" << ok << "\t\t\t" << ol << "\t\t" << om << "\t\t" << on << "\t\t" << oo << endl;
    cout << setprecision(2) << "\t\t\t" << sum11 << "\t\t\t" << sum12 << "\t\t" << sum13 << "\t\t" << sum14 << "\t\t" << sum15 << endl;
}

void matriks_nilai_kriteria_alternatif_2_sejarah(){
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "                  ---------- Matriks Nilai Kriteria -> Sejarah ----------      \n";
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\tPsikologi" << "\t" << "\tIlmu Sejarah" << "\t" << "Geografi" << "\t" << "Ekonomi" << "\t\t" << "Alternatif MIPA" << "\t" << "Jumlah" << "\t\t" << "Rata-rata" << endl; 
    cout << setprecision(2) << "Psikologi\t\t" << kk1 << "\t\t\t" << kl1 << "\t\t" << km1 << "\t\t" << kn1 << "\t\t" << ko1 << "\t\t" << k_total << "\t\t" << k_rata << endl;
    cout << setprecision(2) << "Ilmu Sejarah\t\t" << lk1 << "\t\t\t" << ll1 << "\t\t" << lm1 << "\t\t" << ln1 << "\t\t" << lo1 << "\t\t" << l_total << "\t\t" << l_rata << endl;
    cout << setprecision(2) << "Geografi\t\t" << mk1 << "\t\t\t" << ml1 << "\t\t" << mm1 << "\t\t" << mn1 << "\t\t" << mo1 << "\t\t" << m_total << "\t\t" << m_rata << endl;
    cout << setprecision(2) << "Ekonomi\t\t\t" << nk1 << "\t\t\t" << nl1 << "\t\t" << nm1 << "\t\t" << nn1 << "\t\t" << no1 << "\t\t" << n_total << "\t\t" << n_rata << endl;
    cout << setprecision(2) << "Alternatif MIPA\t\t" << ok1 << "\t\t\t" << ol1 << "\t\t" << om1 << "\t\t" << on1 << "\t\t" << oo1 << "\t\t" << o_total << "\t\t" << o_rata << endl;
    cout << setprecision(2) << "\t\t\t" << sum11_total << "\t\t\t" << sum12_total << "\t\t" << sum13_total << "\t\t" << sum14_total << "\t\t" << sum15_total << endl;
    cout << "Lambda Max        : " << lambda_max_alternatif2 << endl;
    cout << "Consistency Index : " << consistency_index_alternatif2 << endl;
    cout << "Consistency Ratio : " << consistency_ratio_alternatif2 << endl;
}


// Alternatif Kriteria 3
void alternatif_kriteria3_geografi(){
    cout << "C. Pilihlah yang menurut kamu menarik!" << endl;

    cout << "21) Manakah yang membuatmu tertarik ? " << endl;                                                                        // Psikolog atau Ilmu Sejarah
    cout << "1. Mempelajari pengaruh perubahan kondisi di bumi bagi masyarakat" << endl;                                             // Psikologi
    cout << "2. Mempelajari perubahan struktur bumi yang terjadi dari masa lalu hingga sekarang" << endl;                            // Ilmu Sejarah
    cout << "Pilihan : "; cin >> pil_alter21;
    if(pil_alter21 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> pq;
        qp = pq / pow(pq, 2);
    }else if(pil_alter21 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> qp;
        pq = qp / pow(qp, 2);
    }
    cout << endl;
    cout << "22) Manakah yang membuatmu tertarik ? " << endl;                                                                        // Psikolog atau Geografi
    cout << "1. Mempelajari pengaruh perubahan kondisi di bumi bagi masyarakat" << endl;                                             // Psikologi
    cout << "2. Melakukan pengamatan terhadap elemen yang terdapat di bumi" << endl;                                                 // Geografi
    cout << "Pilihan : "; cin >> pil_alter22;
    if(pil_alter22 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> pr;
        rp = pr / pow(pr, 2);
    }else if(pil_alter22 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> rp;
        pr = rp / pow(rp, 2);
    }
    cout << endl;
    cout << "23) Manakah yang membuatmu tertarik ? " << endl;                                                                        // Psikolog atau Ekonomi
    cout << "1. Mempelajari pengaruh perubahan kondisi di bumi bagi masyarakat" << endl;                                             // Psikologi
    cout << "2. Menentukan strategi ekonomi pada wilayah bumi tertentu" << endl;                                                     // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter23;
    if(pil_alter23 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ps;
        sp = ps / pow(ps, 2);
    }else if(pil_alter23 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> sp;
        ps = sp / pow(sp, 2);
    }
    cout << endl;
    cout << "24) Manakah yang membuatmu tertarik ? " << endl;                                                                        // Psikolog atau Alternatif MIPA
    cout << "1. Mempelajari pengaruh perubahan kondisi di bumi bagi masyarakat" << endl;                                             // Psikologi
    cout << "2. Bereksperimen di dalam ruangan laboratorium" << endl;                                                                // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter24;
    if(pil_alter24 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> pt;
        tp = pt / pow(pt, 2);
    }else if(pil_alter24 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> tp;
        pt = tp / pow(tp, 2);
    }
    cout << endl;
    cout << "25) Manakah yang membuatmu tertarik ? " << endl;                                                                        // Ilmu Sejarah atau Geografi
    cout << "1. Mempelajari perubahan struktur bumi yang terjadi dari masa lalu hingga sekarang" << endl;                            // Ilmu Sejarah
    cout << "2. Melakukan pengamatan terhadap elemen yang terdapat di bumi" << endl;                                                 // Geografi
    cout << "Pilihan : "; cin >> pil_alter25;
    if(pil_alter25 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> qr;
        rq = qr / pow(qr, 2);
    }else if(pil_alter25 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> rq;
        qr = rq / pow(rq, 2);
    }
    cout << endl;
    cout << "26) Manakah yang membuatmu tertarik ? " << endl;                                                                        // Ilmu Sejarah atau Ekonomi
    cout << "1. Mempelajari perubahan struktur bumi yang terjadi dari masa lalu hingga sekarang" << endl;                            // Ilmu Sejarah
    cout << "2. Menentukan strategi ekonomi pada wilayah bumi tertentu" << endl;                                                     // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter26;
    if(pil_alter26 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> qs;
        sq = qs / pow(qs, 2);
    }else if(pil_alter26 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> sq;
        qs = sq / pow(sq, 2);
    }
    cout << endl;
    cout << "27) Manakah yang membuatmu tertarik ? " << endl;                                                                        // Ilmu Sejarah atau Alternatif MIPA
    cout << "1. Mempelajari perubahan struktur bumi yang terjadi dari masa lalu hingga sekarang" << endl;                            // Ilmu Sejarah
    cout << "2. Bereksperimen di dalam ruangan laboratorium" << endl;                                                                // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter27;
    if(pil_alter27 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> qt;
        tq = qt / pow(qt, 2);
    }else if(pil_alter27 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> tq;
        qt = tq / pow(tq, 2);
    }
    cout << endl;
    cout << "28) Manakah yang membuatmu tertarik ? " << endl;                                                                        // Geografi atau Ekonomi
    cout << "1. Melakukan pengamatan terhadap elemen yang terdapat di bumi" << endl;                                                 // Geografi
    cout << "2. Menentukan strategi ekonomi pada wilayah bumi tertentu" << endl;                                                     // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter28;
    if(pil_alter28 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> rs;
        sr = rs / pow(rs, 2);
    }else if(pil_alter28 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> sr;
        rs = sr / pow(sr, 2);
    }
    cout << endl;
    cout << "29) Manakah yang membuatmu tertarik ? " << endl;                                                                        // Geografi atau Alternatif MIPA
    cout << "1. Melakukan pengamatan terhadap elemen yang terdapat di bumi" << endl;                                                 // Geografi
    cout << "2. Bereksperimen di dalam ruangan laboratorium" << endl;                                                                // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter29;
    if(pil_alter29 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> rt;
        tr = rt / pow(rt, 2);
    }else if(pil_alter29 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> tr;
        rt = tr / pow(tr, 2);
    }
    cout << endl;
    cout << "30) Manakah yang membuatmu tertarik ? " << endl;                                                                        // Ekonomi atau Alternatif MIPA
    cout << "1. Menentukan strategi ekonomi pada wilayah bumi tertentu" << endl;                                                     // Ekonomi
    cout << "2. Bereksperimen di dalam ruangan laboratorium" << endl;                                                                // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter30;
    if(pil_alter30 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> st;
        ts = st / pow(st, 2);
    }else if(pil_alter30 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ts;
        st = ts / pow(ts, 2);
    }

// Menentukan Jumlah untuk Matriks Perbandingan Berpasangan Setiap Barisnya
sum16 = pp + qp + rp + sp + tp;
sum17 = pq + qq + rq + sq + tq;
sum18 = pr + qr + rr + sr + tr;
sum19 = ps + qs + rs + ss + ts;
sum20 = pt + qt + rt + st + tt;

// Proses Perhitungan Matriks Nilai Kriteria
pp1 = pp / sum16;
qp1 = qp / sum16;
rp1 = rp / sum16;
sp1 = sp / sum16;
tp1 = tp / sum16;

pq1 = pq / sum17;
qq1 = qq / sum17;
rq1 = rq / sum17;
sq1 = sq / sum17;
tq1 = tq / sum17;

pr1 = pr / sum18;
qr1 = qr / sum18;
rr1 = rr / sum18;
sr1 = sr / sum18;
tr1 = tr / sum18;

ps1 = ps / sum19;
qs1 = qs / sum19;
rs1 = rs / sum19;
ss1 = ss / sum19;
ts1 = ts / sum19;

pt1 = pt / sum20;
qt1 = qt / sum20;
rt1 = rt / sum20;
st1 = st / sum20;
tt1 = tt / sum20;

sum16_total = pp1 + qp1 + rp1 + sp1 + tp1;
sum17_total = pq1 + qq1 + rq1 + sq1 + tq1;
sum18_total = pr1 + qr1 + rr1 + sr1 + tr1;
sum19_total = ps1 + qs1 + rs1 + ss1 + ts1;
sum20_total = pt1 + qt1 + rt1 + st1 + tt1;

p_total = pp1 + pq1 + pr1 + ps1 + pt1;
q_total = qp1 + qq1 + qr1 + qs1 + qt1;
r_total = rp1 + rq1 + rr1 + rs1 + rt1;
s_total = sp1 + sq1 + sr1 + ss1 + st1;
t_total = tp1 + tq1 + tr1 + ts1 + tt1;

p_rata = p_total / 5;
q_rata = q_total / 5;
r_rata = r_total / 5;
s_rata = s_total / 5;
t_rata = t_total / 5;

lambda_max_alternatif3 = (sum16 * p_rata) + (sum17 * q_rata) + (sum18 * r_rata) + (sum19 * s_rata) + (sum20 * t_rata);
consistency_index_alternatif3 = (lambda_max_alternatif3 - 5) / (5-1);
consistency_ratio_alternatif3 = consistency_index_alternatif3 / index_random_consistency;

cout << endl;

}

void matriks_perbandingan_berpasangan_alternatif_3_geografi(){
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "                    ---------- Matriks Perbandingan Berpasangan ----------      \n";
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\tPsikologi" << "\t" << "\tIlmu Sejarah" << "\t" << "Geografi" << "\t" << "Ekonomi" << "\t\t" << "Alternatif MIPA" << endl; 
    cout << setprecision(2) << "Psikologi\t\t" << pp << "\t\t\t" << pq << "\t\t" << pr << "\t\t" << ps << "\t\t" << pt << endl;
    cout << setprecision(2) << "Ilmu Sejarah\t\t" << qp << "\t\t\t" << qq << "\t\t" << qr << "\t\t" << qs << "\t\t" << qt << endl;
    cout << setprecision(2) << "Geografi\t\t" << rp << "\t\t\t" << rq << "\t\t" << rr << "\t\t" << rs << "\t\t" << rt << endl;
    cout << setprecision(2) << "Ekonomi\t\t\t" << sp << "\t\t\t" << sq << "\t\t" << sr << "\t\t" << ss << "\t\t" << st << endl;
    cout << setprecision(2) << "Alternatif MIPA\t\t" << tp << "\t\t\t" << tq << "\t\t" << tr << "\t\t" << ts << "\t\t" << tt << endl;
    cout << setprecision(2) << "\t\t\t" << sum16 << "\t\t\t" << sum17 << "\t\t" << sum18 << "\t\t" << sum19 << "\t\t" << sum20 << endl;
}

void matriks_nilai_kriteria_alternatif_3_geografi(){
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "                  ---------- Matriks Nilai Kriteria -> Geografi ----------      \n";
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\tPsikologi" << "\t" << "\tIlmu Sejarah" << "\t" << "Geografi" << "\t" << "Ekonomi" << "\t\t" << "Alternatif MIPA" << "\t" << "Jumlah" << "\t\t" << "Rata-rata" << endl; 
    cout << setprecision(2) << "Psikologi\t\t" << pp1 << "\t\t\t" << pq1 << "\t\t" << pr1 << "\t\t" << ps1 << "\t\t" << pt1 << "\t\t" << p_total << "\t\t" << p_rata << endl;
    cout << setprecision(2) << "Ilmu Sejarah\t\t" << qp1 << "\t\t\t" << qq1 << "\t\t" << qr1 << "\t\t" << qs1 << "\t\t" << qt1 << "\t\t" << q_total << "\t\t" << q_rata << endl;
    cout << setprecision(2) << "Geografi\t\t" << rp1 << "\t\t\t" << rq1 << "\t\t" << rr1 << "\t\t" << rs1 << "\t\t" << rt1 << "\t\t" << r_total << "\t\t" << r_rata << endl;
    cout << setprecision(2) << "Ekonomi\t\t\t" << sp1 << "\t\t\t" << sq1 << "\t\t" << sr1 << "\t\t" << ss1 << "\t\t" << st1 << "\t\t" << s_total << "\t\t" << s_rata << endl;
    cout << setprecision(2) << "Alternatif MIPA\t\t" << tq1 << "\t\t\t" << tq1 << "\t\t" << tr1 << "\t\t" << ts1 << "\t\t" << tt1 << "\t\t" << t_total << "\t\t" << t_rata << endl;
    cout << setprecision(2) << "\t\t\t" << sum16_total << "\t\t\t" << sum17_total << "\t\t" << sum18_total << "\t\t" << sum19_total << "\t\t" << sum20_total << endl;
    cout << "Lambda Max        : " << lambda_max_alternatif3 << endl;
    cout << "Consistency Index : " << consistency_index_alternatif3 << endl;
    cout << "Consistency Ratio : " << consistency_ratio_alternatif3 << endl;
}

// Alternatif Kriteria 4
void alternatif_kriteria4_ekonomi(){
    cout << "D. Pilihlah yang menurut kamu menarik!" << endl;
    cout << "31) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Psikolog atau Ilmu Sejarah
    cout << "1. Memahami perilaku masyarakat terhadap keadaan ekonomi yang sedang terjadi" << endl;                                      // Psikologi
    cout << "2. Mempelajari aktivitas tukar-menukar sebagai pemenuhan kebutuhan manusia terdahulu" << endl;                              // Ilmu Sejarah
    cout << "Pilihan : "; cin >> pil_alter31;
    if(pil_alter31 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> uv;
        vu = uv / pow(uv, 2);
    }else if(pil_alter31 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> vu;
        uv = vu / pow(vu, 2);
    }

    cout << "32) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Psikolog atau Geografi
    cout << "1. Memahami perilaku masyarakat terhadap keadaan ekonomi yang sedang terjadi" << endl;                                      // Psikologi
    cout << "2. Merancang rute aktivitas ekonomi bagi masyrakat" << endl;                                                                // Geografi
    cout << "Pilihan : "; cin >> pil_alter32;
    if(pil_alter32 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> uw;
        wu = uw / pow(uw, 2);
    }else if(pil_alter32 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> wu;
        uw = wu / pow(wu, 2);
    }

    cout << "33) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Psikolog atau Ekonomi
    cout << "1. Memahami perilaku masyarakat terhadap keadaan ekonomi yang sedang terjadi" << endl;                                      // Psikologi
    cout << "2. Menyusun strategi pengelolaan sumber daya dengan mempertimbangkan efisiensinya" << endl;                                 // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter33;
    if(pil_alter33 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ux;
        xu = ux / pow(ux, 2);
    }else if(pil_alter33 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> xu;
        ux = xu / pow(xu, 2);
    }

    cout << "34) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Psikolog atau Alternatif MIPA
    cout << "1. Memahami perilaku masyarakat terhadap keadaan ekonomi yang sedang terjadi" << endl;                                      // Psikologi
    cout << "2. Mempelajari bagaimana gedung-gedung pencakar langit dibangun " << endl;                                                  // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter34;
    if(pil_alter34 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> uy;
        yu = uy / pow(uy, 2);
    }else if(pil_alter34 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> yu;
        uy = yu / pow(yu, 2);
    }
    cout << endl;
    cout << "35) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Ilmu Sejarah atau Geografi
    cout << "1. Mempelajari aktivitas tukar-menukar sebagai pemenuhan kebutuhan manusia terdahulu" << endl;                              // Ilmu Sejarah
    cout << "2. Merancang rute aktivitas ekonomi bagi masyrakat" << endl;                                                                // Geografi
    cout << "Pilihan : "; cin >> pil_alter35;
    if(pil_alter35 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> vw;
        wv = vw / pow(vw, 2);
    }else if(pil_alter35 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> wv;
        vw = wv / pow(wv, 2);
    }
    cout << endl;
    cout << "36) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Ilmu Sejarah atau Ekonomi
    cout << "1. Mempelajari aktivitas tukar-menukar sebagai pemenuhan kebutuhan manusia terdahulu" << endl;                              // Ilmu Sejarah
    cout << "2. Menyusun strategi pengelolaan sumber daya dengan mempertimbangkan efisiensinya" << endl;                                 // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter36;
    if(pil_alter36 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> vx;
        xv = vx / pow(vx, 2);
    }else if(pil_alter36 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> xv;
        vx = xv / pow(xv, 2);
    }
    cout << endl;
    cout << "37) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Ilmu Sejarah atau Alternatif MIPA
    cout << "1. Mempelajari aktivitas tukar-menukar sebagai pemenuhan kebutuhan manusia terdahulu" << endl;                              // Ilmu Sejarah
    cout << "2. Mempelajari bagaimana gedung-gedung pencakar langit dibangun " << endl;                                                  // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter37;
    if(pil_alter37 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> vy;
        yv = vy / pow(vy, 2);
    }else if(pil_alter37 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> yv;
        vy = yv / pow(yv, 2);
    }
    cout << endl;
    cout << "38) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Geografi atau Ekonomi
    cout << "1. Merancang rute aktivitas ekonomi bagi masyrakat" << endl;                                                                // Geografi
    cout << "2. Menyusun strategi pengelolaan sumber daya dengan mempertimbangkan efisiensinya" << endl;                                 // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter38;
    if(pil_alter38 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> wx;
        xw = wx / pow(wx, 2);
    }else if(pil_alter38 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> xw;
        wx = xw / pow(xw, 2);
    }
    cout << endl;
    cout << "39) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Geografi atau Alternatif MIPA
    cout << "1. Merancang rute aktivitas ekonomi bagi masyrakat" << endl;                                                                // Geografi
    cout << "2. Mempelajari bagaimana gedung-gedung pencakar langit dibangun " << endl;                                                  // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter39;
    if(pil_alter39 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> wy;
        yw = wy / pow(wy, 2);
    }else if(pil_alter39 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> yw;
        wy = yw / pow(yw, 2);
    }
    cout << endl;
    cout << "40) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Ekonomi atau Alternatif MIPA
    cout << "1. Menyusun strategi pengelolaan sumber daya dengan mempertimbangkan efisiensinya" << endl;                                 // Ekonomi
    cout << "2. Mempelajari bagaimana gedung-gedung pencakar langit dibangun " << endl;                                                  // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter40;
    if(pil_alter40 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> xy;
        yx = xy / pow(xy, 2);
    }else if(pil_alter40 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> yx;
        xy = yx / pow(yx, 2);
    }
// Menentukan Jumlah untuk Matriks Perbandingan Berpasangan Setiap Barisnya
sum21 = uu + vu + wu + xu + yu;
sum22 = uv + vv + wv + xv + yv;
sum23 = uw + vw + ww + xw + yw;
sum24 = ux + vx + wx + xx + yx;
sum25 = uy + vy + wy + xy + yy;

// Proses Perhitungan Matriks Nilai Kriteria
uu1 = uu / sum21;
vu1 = vu / sum21;
wu1 = wu / sum21;
xu1 = xu / sum21;
yu1 = yu / sum21;

uv1 = uv / sum22;
vv1 = vv / sum22;
wv1 = wv / sum22;
xv1 = xv / sum22;
yv1 = yv / sum22;

uw1 = uw / sum23;
vw1 = vw / sum23;
ww1 = ww / sum23;
xw1 = xw / sum23;
yw1 = yw / sum23;

ux1 = ux / sum24;
vx1 = vx / sum24;
wx1 = wx / sum24;
xx1 = xx / sum24;
yx1 = yx / sum24;

uy1 = uy / sum25;
vy1 = vy / sum25;
wy1 = wy / sum25;
xy1 = xy / sum25;
yy1 = yy / sum25;

sum21_total = uu1 + vu1 + wu1 + xu1 + yu1;
sum22_total = uv1 + vv1 + wv1 + xv1 + yv1;
sum23_total = uw1 + vw1 + ww1 + xw1 + yw1;
sum24_total = ux1 + vx1 + wx1 + xx1 + yx1;
sum25_total = uy1 + vy1 + wy1 + xy1 + yy1;

u_total = uu1 + uv1 + uw1 + ux1 + uy1;
v_total = vu1 + vv1 + vw1 + vx1 + vy1;
w_total = wu1 + wv1 + ww1 + wx1 + wy1;
x_total = xu1 + xv1 + xw1 + xx1 + xy1;
y_total = yu1 + yv1 + yw1 + yx1 + yy1;

u_rata = u_total / 5;
v_rata = v_total / 5;
w_rata = w_total / 5;
x_rata = x_total / 5;
y_rata = y_total / 5;

lambda_max_alternatif4 = (sum21 * u_rata) + (sum22 * v_rata) + (sum23 * w_rata) + (sum24 * x_rata) + (sum25 * y_rata);
consistency_index_alternatif4 = (lambda_max_alternatif4 - 5) / (5-1);
consistency_ratio_alternatif4 = consistency_index_alternatif4 / index_random_consistency;

cout << endl;


}

void matriks_perbandingan_berpasangan_alternatif_4_ekonomi(){
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "                    ---------- Matriks Perbandingan Berpasangan ----------      \n";
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\tPsikologi" << "\t" << "\tIlmu Sejarah" << "\t" << "Geografi" << "\t" << "Ekonomi" << "\t\t" << "Alternatif MIPA" << endl; 
    cout << setprecision(2) << "Psikologi\t\t" << uu << "\t\t\t" << uv << "\t\t" << uw << "\t\t" << ux << "\t\t" << uy << endl;
    cout << setprecision(2) << "Ilmu Sejarah\t\t" << vu << "\t\t\t" << vv << "\t\t" << vw << "\t\t" << vx << "\t\t" << vy << endl;
    cout << setprecision(2) << "Geografi\t\t" << wu << "\t\t\t" << wv << "\t\t" << ww << "\t\t" << wx << "\t\t" << wy << endl;
    cout << setprecision(2) << "Ekonomi\t\t\t" << xu << "\t\t\t" << xv << "\t\t" << xw << "\t\t" << xx << "\t\t" << xy << endl;
    cout << setprecision(2) << "Alternatif MIPA\t\t" << yu << "\t\t\t" << yv << "\t\t" << yw << "\t\t" << yx << "\t\t" << yy << endl;
    cout << setprecision(2) << "\t\t\t" << sum21 << "\t\t\t" << sum22 << "\t\t" << sum23 << "\t\t" << sum24 << "\t\t" << sum25 << endl;
}

void matriks_nilai_kriteria_alternatif_4_ekonomi(){
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "                  ---------- Matriks Nilai Kriteria -> Ekonomi ----------      \n";
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\tPsikologi" << "\t" << "\tIlmu Sejarah" << "\t" << "Geografi" << "\t" << "Ekonomi" << "\t" << "Alternatif MIPA" << "\t" << "Jumlah" << "\t\t" << "Rata-rata" << endl; 
    cout << setprecision(2) << "Psikologi\t\t" << uu1 << "\t\t\t" << uv1 << "\t\t" << uw1 << "\t\t" << ux1 << "\t\t" << uy1 << "\t\t" << u_total << "\t\t" << u_rata << endl;
    cout << setprecision(2) << "Ilmu Sejarah\t\t" << vu1 << "\t\t\t" << vv1 << "\t\t" << vw1 << "\t\t" << vx1 << "\t\t" << vy1 << "\t\t" << v_total << "\t\t" << v_rata << endl;
    cout << setprecision(2) << "Geografi\t\t" << wu1 << "\t\t\t" << wv1 << "\t\t" << ww1 << "\t\t" << wx1 << "\t\t" << wy1 << "\t\t" << w_total << "\t\t" << w_rata << endl;
    cout << setprecision(2) << "Ekonomi\t\t\t" << xu1 << "\t\t\t" << xv1 << "\t\t" << xw1 << "\t\t" << xx1 << "\t\t" << xy1 << "\t\t" << x_total << "\t\t" << x_rata << endl;
    cout << setprecision(2) << "Alternatif MIPA\t\t" << yu1 << "\t\t\t" << yv1 << "\t\t" << yw1 << "\t\t" << yx1 << "\t\t" << yy1 << "\t\t" << y_total << "\t\t" << y_rata << endl;
    cout << setprecision(2) << "\t\t\t" << sum21_total << "\t\t\t" << sum22_total << "\t\t" << sum23_total << "\t\t" << sum24_total << "\t\t" << sum25_total << endl;
    cout << "Lambda Max        : " << lambda_max_alternatif4 << endl;
    cout << "Consistency Index : " << consistency_index_alternatif4 << endl;
    cout << "Consistency Ratio : " << consistency_ratio_alternatif4 << endl;
}

// Alternatif Kriteria 5
void alternatif_kriteria5_inggrisips(){
    cout << "E. Pilihlah yang menurut kamu menarik!" << endl;
    cout << "41) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Psikolog atau Ilmu Sejarah
    cout << "1. Berkomunikasi di depan orang banyak" << endl;                                                                            // Psikologi
    cout << "2. Mempelajari bahasa yang digunakan oleh orang-orang terdahulu" << endl;                                                   // Ilmu Sejarah
    cout << "Pilihan : "; cin >> pil_alter41;
    if(pil_alter41 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> aab;
        bba = aab / pow(aab, 2);
    }else if(pil_alter41 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> bba;
        aab = bba / pow(bba, 2);
    }
    cout << endl;
    cout << "42) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Psikolog atau Geografi
    cout << "1. Berkomunikasi di depan orang banyak" << endl;                                                                            // Psikologi
    cout << "2. Memahami istilah-istilah untuk material yang ada di bumi" << endl;                                                       // Geografi
    cout << "Pilihan : "; cin >> pil_alter42;
    if(pil_alter42 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> aac;
        cca = aac / pow(aac, 2);
    }else if(pil_alter42 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> cca;
        aac = cca / pow(cca, 2);
    }
    cout << endl;
    cout << "43) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Psikolog atau Ekonomi
    cout << "1. Berkomunikasi di depan orang banyak" << endl;                                                                            // Psikologi
    cout << "2. Membuka peluang membuka usaha dengan jangkauan luas" << endl;                                                            // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter43;
    if(pil_alter43 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> aad;
        dda = aad / pow(aad, 2);
    }else if(pil_alter43 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> dda;
        aad = dda / pow(dda, 2);
    }
    cout << endl;
    cout << "44) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Psikolog atau Alternatif MIPA
    cout << "1. Berkomunikasi di depan orang banyak" << endl;                                                                            // Psikologi
    cout << "2. Memahami artikel ilmiah / cerita fiksi dari bahasa asing" << endl;                                                       // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter44;
    if(pil_alter44 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> aae;
        eea = aae / pow(aae, 2);
    }else if(pil_alter44 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> eea;
        aae = eea / pow(eea, 2);
    }
    cout << endl;
    cout << "45) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Ilmu Sejarah atau Geografi
    cout << "1. Mempelajari bahasa yang digunakan oleh orang-orang terdahulu" << endl;                                                   // Ilmu Sejarah
    cout << "2. Memahami istilah-istilah untuk material yang ada di bumi" << endl;                                                       // Geografi
    cout << "Pilihan : "; cin >> pil_alter45;
    if(pil_alter45 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> bbc;
        ccb = bbc / pow(bbc, 2);
    }else if(pil_alter45 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ccb;
        bbc = ccb / pow(ccb, 2);
    }
    cout << endl;
    cout << "46) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Ilmu Sejarah atau Ekonomi
    cout << "1. Mempelajari bahasa yang digunakan oleh orang-orang terdahulu" << endl;                                                   // Ilmu Sejarah
    cout << "2. Membuka peluang membuka usaha dengan jangkauan luas" << endl;                                                            // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter46;
    if(pil_alter46 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> bbd;
        ddb = bbd / pow(bbd, 2);
    }else if(pil_alter46 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ddb;
        bbd = ddb / pow(ddb, 2);
    }
    cout << endl;
    cout << "47) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Ilmu Sejarah atau Alternatif MIPA
    cout << "1. Mempelajari bahasa yang digunakan oleh orang-orang terdahulu" << endl;                                                   // Ilmu Sejarah
    cout << "2. Memahami artikel ilmiah / cerita fiksi dari bahasa asing" << endl;                                                       // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter47;
    if(pil_alter47 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> bbe;
        eeb = bbe / pow(bbe, 2);
    }else if(pil_alter47 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> eeb;
        bbe = eeb / pow(eeb, 2);
    }
    cout << endl;
    cout << "48) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Geografi atau Ekonomi
    cout << "1. Memahami istilah-istilah untuk material yang ada di bumi" << endl;                                                       // Geografi
    cout << "2. Membuka peluang membuka usaha dengan jangkauan luas" << endl;                                                            // Ekonomi
    cout << "Pilihan : "; cin >> pil_alter48;
    if(pil_alter48 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ccd;
        ddc = ccd / pow(ccd, 2);
    }else if(pil_alter48 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> ddc;
        ccd = ddc / pow(ddc, 2);
    }
    cout << endl;
    cout << "49) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Geografi atau Alternatif MIPA
    cout << "1. Memahami istilah-istilah untuk material yang ada di bumi" << endl;                                                       // Geografi
    cout << "2. Memahami artikel ilmiah / cerita fiksi dari bahasa asing" << endl;                                                       // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter49;
    if(pil_alter49 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> cce;
        eec = cce / pow(cce, 2);
    }else if(pil_alter49 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> eec;
        cce = eec / pow(eec, 2);
    }
    cout << endl;
    cout << "50) Manakah yang membuatmu tertarik ? " << endl;                                                                            // Ekonomi atau Alternatif MIPA
    cout << "1. Membuka peluang membuka usaha dengan jangkauan luas" << endl;                                                            // Ekonomi
    cout << "2. Memahami artikel ilmiah / cerita fiksi dari bahasa asing" << endl;                                                       // Alternatif MIPA
    cout << "Pilihan : "; cin >> pil_alter50;
    if(pil_alter50 == "1"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> dde;
        eed = dde / pow(dde, 2);
    }else if(pil_alter50 == "2"){
        cout << "Berikan Nilai Perbandingannya : "; cin >> eed;
        dde = eed / pow(eed, 2);
    }

// Menentukan Jumlah untuk Matriks Perbandingan Berpasangan Setiap Barisnya
sum26 = aaa + bba + cca + dda + eea;
sum27 = aab + bbb + ccb + ddb + eeb;
sum28 = aac + bbc + ccc + ddc + eec;
sum29 = aad + bbd + ccd + ddd + eed;
sum30 = aae + bbe + cce + dde + eee;

// Proses Perhitungan Matriks Nilai Kriteria
aaa1 = aaa / sum26;
bba1 = bba / sum26;
cca1 = cca / sum26;
dda1 = dda / sum26;
eea1 = eea / sum26;

aab1 = aab / sum27;
bbb1 = bbb / sum27;
ccb1 = ccb / sum27;
ddb1 = ddb / sum27;
eeb1 = eeb / sum27;

aac1 = aac / sum28;
bbc1 = bbc / sum28;
ccc1 = ccc / sum28;
ddc1 = ddc / sum28;
eec1 = eec / sum28;

aad1 = aad / sum29;
bbd1 = bbd / sum29;
ccd1 = ccd / sum29;
ddd1 = ddd / sum29;
eed1 = eed / sum29;

aae1 = aae / sum30;
bbe1 = bbe / sum30;
cce1 = cce / sum30;
dde1 = dde / sum30;
eee1 = eee / sum30;

sum26_total = aaa1 + bba1 + cca1 + dda1 + eea1;
sum27_total = aab1 + bbb1 + ccb1 + ddb1 + eeb1;
sum28_total = aac1 + bbc1 + ccc1 + ddc1 + eec1;
sum29_total = aad1 + bbd1 + ccd1 + ddd1 + eed1;
sum30_total = aae1 + bbe1 + cce1 + dde1 + eee1;

aa_total = aaa1 + aab1 + aac1 + aad1 + aae1;
bb_total = bba1 + bbb1 + bbc1 + bbd1 + bbe1;
cc_total = cca1 + ccb1 + ccc1 + ccd1 + cce1;
dd_total = dda1 + ddb1 + ddc1 + ddd1 + dde1;
ee_total = eea1 + eeb1 + eec1 + eed1 + eee1;

aa_rata = aa_total / 5;
bb_rata = bb_total / 5;
cc_rata = cc_total / 5;
dd_rata = dd_total / 5;
ee_rata = ee_total / 5;

lambda_max_alternatif5 = (sum26 * aa_rata) + (sum27 * bb_rata) + (sum28 * cc_rata) + (sum29 * dd_rata) + (sum30 * ee_rata);
consistency_index_alternatif5 = (lambda_max_alternatif5 - 5) / (5-1);
consistency_ratio_alternatif5 = consistency_index_alternatif5 / index_random_consistency;


cout << endl;
}

void matriks_perbandingan_berpasangan_alternatif_5_inggrisips(){
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "                    ---------- Matriks Perbandingan Berpasangan ----------      \n";
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\tPsikologi" << "\t" << "\tIlmu Sejarah" << "\t" << "Geografi" << "\t" << "Ekonomi" << "\t\t" << "Alternatif MIPA" << endl; 
    cout << setprecision(2) << "Psikologi\t\t" << aaa << "\t\t\t" << aab << "\t\t" << aac << "\t\t" << aad << "\t\t" << aae << endl;
    cout << setprecision(2) << "Ilmu Sejarah\t\t" << bba << "\t\t\t" << bbb << "\t\t" << bbc << "\t\t" << bbd << "\t\t" << bbe << endl;
    cout << setprecision(2) << "Geografi\t\t" << cca << "\t\t\t" << ccb << "\t\t" << ccc << "\t\t" << ccd << "\t\t" << cce << endl;
    cout << setprecision(2) << "Ekonomi\t\t\t" << dda << "\t\t\t" << ddb << "\t\t" << ddc << "\t\t" << ddd << "\t\t" << dde << endl;
    cout << setprecision(2) << "Alternatif MIPA\t\t" << eea << "\t\t\t" << eeb << "\t\t" << eec << "\t\t" << eed << "\t\t" << eee << endl;
    cout << setprecision(2) << "\t\t\t" << sum26 << "\t\t\t" << sum27 << "\t\t" << sum28 << "\t\t" << sum29 << "\t\t" << sum30 << endl;
}

void matriks_nilai_kriteria_alternatif_5_inggrisips(){
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "                  ---------- Matriks Nilai Kriteria -> Inggris ----------      \n";
    cout << " -------------------------------------------------------------------------------------------------\n";
    cout << "\t\t\tPsikologi" << "\t" << "\tIlmu Sejarah" << "\t" << "Geografi" << "\t" << "Ekonomi" << "\t\t" << "Alternatif MIPA" << "\t" << "Jumlah" << "\t\t" << "Rata-rata" << endl; 
    cout << setprecision(2) << "Psikologi\t\t" << aaa1 << "\t\t\t" << aab1 << "\t\t" << aac1 << "\t\t" << aad1 << "\t\t" << aae1 << "\t\t" << aa_total << "\t\t" << aa_rata << endl;
    cout << setprecision(2) << "Ilmu Sejarah\t\t" << bba1 << "\t\t\t" << bbb1 << "\t\t" << bbc1 << "\t\t" << bbd1 << "\t\t" << bbe1 << "\t\t" << bb_total << "\t\t" << bb_rata << endl;
    cout << setprecision(2) << "Geografi\t\t" << cca1 << "\t\t\t" << ccb1 << "\t\t" << ccc1 << "\t\t" << ccd1 << "\t\t" << cce1 << "\t\t" << cc_total << "\t\t" << cc_rata << endl;
    cout << setprecision(2) << "Ekonomi\t\t\t" << dda1 << "\t\t\t" << ddb1 << "\t\t" << ddc1 << "\t\t" << ddd1 << "\t\t" << dde1 << "\t\t" << dd_total << "\t\t" << dd_rata << endl;
    cout << setprecision(2) << "Alternatif MIPA\t\t" << eea1 << "\t\t\t" << eeb1 << "\t\t" << eec1 << "\t\t" << eed1 << "\t\t" << eee1 << "\t\t" << ee_total << "\t\t" << ee_rata << endl;
    cout << setprecision(2) << "\t\t\t" << sum26_total << "\t\t\t" << sum27_total << "\t\t" << sum28_total << "\t\t" << sum29_total << "\t\t" << sum30_total << endl;
    cout << "Lambda Max        : " << lambda_max_alternatif5 << endl;
    cout << "Consistency Index : " << consistency_index_alternatif5 << endl;
    cout << "Consistency Ratio : " << consistency_ratio_alternatif5 << endl;
}

void hasil1_ips(){
    cout << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah Psikologi!" << endl;
    cout << "Ada beberapa jurusan alternatif lain dari Psikologi, diantaranya : " << endl;
    cout << "1. Hubungan Internasional" << endl;
    cout << "2. Penyiaran / Broadcasting" << endl;
    cout << "3. Sosiologi" << endl;
    cout << "4. Ilmu Komunikasi" << endl;
}

void hasil2_ips(){
    cout << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah Ilmu Sejarah!" << endl;
    cout << "Ada beberapa jurusan alternatif lain dari Ilmu Sejarah, diantaranya : " << endl;
    cout << "1. Arkeologi" << endl;
    cout << "2. Pendidikan Sejarah" << endl;
    cout << "3. Sejarah Peradaban Islam" << endl;
    cout << "4. Antropologi" << endl;
}

void hasil3_ips(){
    cout << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah Geografi!" << endl;
    cout << "Ada beberapa jurusan alternatif lain dari Geografi, diantaranya : " << endl;
    cout << "1. Sains Informasi Geografi" << endl;
    cout << "2. Teknik Geodesi" << endl;
    cout << "3. Teknik Geologi" << endl;
}

void hasil4_ips(){
    cout << "Berdasarkan inputan kamu, Jurusan yang kamu pilih adalah Ekonomi!" << endl;
    cout << "Ada beberapa jurusan alternatif lain dari Ekonomi, diantaranya : " << endl;
    cout << "1. Ilmu Ekonomi" << endl;
    cout << "2. Manajemen" << endl;
    cout << "3. Ekonomi Pembangunan" << endl;
    cout << "4. Bisnis Digital" << endl;
    cout << "5. Akuntansi" << endl;
}

void hasil5_ips(){
    cout << "Berdasarkan inputan yang telah diberikan, kamu lebih cocok untuk masuk ke jurusan Sains dan Teknologi (Saintek)!" << endl;
    cout << "Ada beberapa jurusan yang dapat menjadi pilihan, di antaranya : " << endl;
    cout << "1. Teknik Informatika" << endl;
    cout << "2. Teknik Sipil" << endl;
    cout << "3. Farmasi" << endl;
    cout << "4. Kedokteran" << endl;
    cout << "5. Jurusan pendidikan yang berkaitan dengan pelajaran MIPA" << endl;
}


void hasil_akhir_ips(){
    hasil1 = (f_rata * a_rata) + (k_rata * b_rata) + (p_rata * c_rata) + (u_rata * d_rata) + (aa_rata * e_rata);
    hasil2 = (g_rata * a_rata) + (l_rata * b_rata) + (q_rata * c_rata) + (v_rata * d_rata) + (bb_rata * e_rata);
    hasil3 = (h_rata * a_rata) + (m_rata * b_rata) + (r_rata * c_rata) + (w_rata * d_rata) + (cc_rata * e_rata);
    hasil4 = (i_rata * a_rata) + (n_rata * b_rata) + (s_rata * c_rata) + (x_rata * d_rata) + (dd_rata * e_rata);
    hasil5 = (j_rata * a_rata) + (o_rata * b_rata) + (t_rata * c_rata) + (y_rata * d_rata) + (ee_rata * e_rata);

    hasil_akhir[0] = hasil1;
    hasil_akhir[1] = hasil2;
    hasil_akhir[2] = hasil3;
    hasil_akhir[3] = hasil4;
    hasil_akhir[4] = hasil5;

    sort(hasil_akhir, hasil_akhir + 5);
    if(hasil_akhir[4] == hasil1){
        hasil1_ips();
    }

    if(hasil_akhir[4] == hasil2){
        hasil2_ips();
    }

    if(hasil_akhir[4] == hasil3){
        hasil3_ips();
    }

    if(hasil_akhir[4] == hasil4){
        hasil4_ips();
    }

    if(hasil_akhir[4] == hasil5){
        hasil5_ips();
    }
	
    cout << "Nilai minat terhadap jurusan yang berhubungan dengan Sosiologi  : " << hasil1 << endl;
    cout << "Nilai minat terhadap jurusan yang berhubungan dengan Sejarah    : " << hasil2 << endl;
    cout << "Nilai minat terhadap jurusan yang berhubungan dengan Geografi   : " << hasil3 << endl;
    cout << "Nilai minat terhadap jurusan yang berhubungan dengan Ekonomi    : " << hasil4 << endl;
    cout << "Nilai minat terhadap jurusan yang tidak berhubungan dengan IPS  : " << hasil5 << endl;
}
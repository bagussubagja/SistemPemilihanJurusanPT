#include <iostream>

using namespace std;

const float index_random_consistency = 1.12;

using namespace std;

// Kriteria
float aa = 1, bb= 1, cc = 1, dd = 1, ee = 1;
float ab, ac, ad, ae;
float ba, bc, bd, be;
float ca, cb, cd, ce;
float da, db, dc, de;
float ea, eb, ec, ed;
float sum1, sum2, sum3, sum4, sum5;

float a1, a2, a3, a4, a5, a_total, a_rata;
float b1, b2, b3, b4, b5, b_total, b_rata;
float c1, c2, c3, c4, c5, c_total, c_rata;
float d1, d2, d3, d4, d5, d_total, d_rata;
float e1, e2, e3, e4, e5, e_total, e_rata;
float sum1_total, sum2_total, sum3_total, sum4_total, sum5_total;

float lambda_max_kriteria_mipa, consistency_index1, consistency_ratio1;

string pil1, pil2, pil3, pil4, pil5, pil6, pil7, pil8, pil9, pil10;

// Alternatif 1
float ff = 1, gg = 1, hh = 1, ii = 1, jj = 1;
float fg, fh, fi, fj;
float gf, gh, gi, gj;
float hf, hg, hi, hj;
float ifx, ig, ih, ij;
float jf, jg, jh, ji;
float sum6, sum7, sum8, sum9, sum10;

float ff1, gg1, hh1, ii1, jj1, f_total, f_rata;
float fg1, fh1, fi1, fj1, g_total, g_rata;
float gf1, gh1, gi1, gj1, h_total, h_rata;
float hf1, hg1, hi1, hj1, i_total, i_rata;
float if1, ig1, ih1, ij1, j_total, j_rata;
float jf1, jg1, jh1, ji1;
float sum6_total, sum7_total, sum8_total, sum9_total, sum10_total;
float lambda_max_alternatif1, consistency_index_alternatif1, consistency_ratio_alternatif1;

string pil_alter1, pil_alter2, pil_alter3, pil_alter4, pil_alter5, pil_alter6, pil_alter7, pil_alter8, pil_alter9, pil_alter10;

// Alternatif 2
float kk = 1, ll = 1, mm = 1, nn = 1, oo = 1;
float kl, km, kn, ko;
float lk, lm, ln, lo;
float mk, ml, mn, mo;
float nk, nl, nm, no;
float ok, ol, om, on;
float sum11, sum12, sum13, sum14, sum15;

float kk1, kl1, km1, kn1, ko1, k_total, k_rata;
float lk1, ll1, lm1, ln1, lo1, l_total, l_rata;
float mk1, ml1, mm1, mn1, mo1, m_total, m_rata;
float nk1, nl1, nm1, nn1, no1, n_total, n_rata;
float ok1, ol1, om1, on1, oo1, o_total, o_rata;
float sum11_total, sum12_total, sum13_total, sum14_total, sum15_total;
float lambda_max_alternatif2, consistency_index_alternatif2, consistency_ratio_alternatif2;
string pil_alter11, pil_alter12, pil_alter13, pil_alter14, pil_alter15, pil_alter16, pil_alter17, pil_alter18, pil_alter19, pil_alter20;

// Alternatif 3
float pp = 1, qq = 1, rr = 1, ss = 1, tt = 1;
float pq, pr, ps, pt;
float qp, qr, qs, qt;
float rp, rq, rs, rt;
float sp, sq, sr, st;
float tp, tq, tr, ts;
float sum16 = pp + pq + rp + sp + tp;
float sum17 = pq + qq + rq + sq + tq;
float sum18 = pr + qr + rr + sr + tr;
float sum19 = ps + qs + rs + ss + ts;
float sum20 = pt + qt + rt + st + tt;

float pp1, pq1, pr1, ps1, pt1, p_total, p_rata;
float qp1, qq1, qr1, qs1, qt1, q_total, q_rata;
float rp1, rq1, rr1, rs1, rt1, r_total, r_rata;
float sp1, sq1, sr1, ss1, st1, s_total, s_rata;
float tp1, tq1, tr1, ts1, tt1, t_total, t_rata;
float sum16_total, sum17_total, sum18_total, sum19_total, sum20_total;
float lambda_max_alternatif3, consistency_index_alternatif3, consistency_ratio_alternatif3;
string pil_alter21, pil_alter22, pil_alter23, pil_alter24, pil_alter25, pil_alter26, pil_alter27, pil_alter28, pil_alter29, pil_alter30;

// Alternatif 4
float uu = 1, vv = 1, ww = 1, xx = 1, yy = 1;
float uv, uw, ux, uy;
float vu, vw, vx, vy;
float wu, wv, wx, wy;
float xu, xv, xw, xy;
float yu, yv, yw, yx;
float sum21, sum22, sum23, sum24, sum25;

float uu1, uv1, uw1, ux1, uy1, u_total, u_rata;
float vu1, vv1, vw1, vx1, vy1, v_total, v_rata;
float wu1, wv1, ww1, wx1, wy1, w_total, w_rata;
float xu1, xv1, xw1, xx1, xy1, x_total, x_rata;
float yu1, yv1, yw1, yx1, yy1, y_total, y_rata;
float sum21_total, sum22_total, sum23_total, sum24_total, sum25_total;
float lambda_max_alternatif4, consistency_index_alternatif4, consistency_ratio_alternatif4;
string pil_alter31, pil_alter32, pil_alter33, pil_alter34, pil_alter35, pil_alter36, pil_alter37, pil_alter38, pil_alter39, pil_alter40;

// Alternatif 5
float aaa = 1, bbb = 1, ccc = 1, ddd = 1, eee = 1;
float aab, aac, aad, aae;
float bba, bbc, bbd, bbe;
float cca, ccb, ccd, cce;
float dda, ddb, ddc, dde;
float eea, eeb, eec, eed;
float sum26, sum27, sum28, sum29, sum30;

float aaa1, aab1, aac1, aad1, aae1, aa_total, aa_rata;
float bba1, bbb1, bbc1, bbd1, bbe1, bb_total, bb_rata;
float cca1, ccb1, ccc1, ccd1, cce1, cc_total, cc_rata;
float dda1, ddb1, ddc1, ddd1, dde1, dd_total, dd_rata;
float eea1, eeb1, eec1, eed1, eee1, ee_total, ee_rata;
float sum26_total, sum27_total, sum28_total, sum29_total, sum30_total;
float lambda_max_alternatif5, consistency_index_alternatif5, consistency_ratio_alternatif5;
string pil_alter41, pil_alter42, pil_alter43, pil_alter44, pil_alter45, pil_alter46, pil_alter47, pil_alter48, pil_alter49, pil_alter50;

// Hasil Akhir
float hasil1, hasil2, hasil3, hasil4, hasil5;
float hasil_akhir[4];
float temp;


int pilihan;
char pil_menu;
string mode;
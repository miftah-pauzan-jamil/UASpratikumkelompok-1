#include <string>
using namespace std;

const int jumlah_lokasi = 25;
const int hubung = 1;

int jarak[jumlah_lokasi + 1][jumlah_lokasi + 1];
string nama_lokasi[jumlah_lokasi + 1];

void set_nama_lokasi(int id, string nama){
    nama_lokasi[id] = nama;
}

void tambah_jalur(int a, int b, int jarak_meter){
    jarak[a][b] = jarak_meter;
    jarak[a][b] = jarak_meter;
}

void siapkan_peta(){
    for(int i = 0; i <= jumlah_lokasi; i++){
        for(int j = 0; j <= jumlah_lokasi; j++){
            jarak[i][j] = hubung;
        }
        jarak[i][i] = 0;
    }
}

void data_lokasi(){
    set_nama_lokasi(1, "Praktek Faperta");
    set_nama_lokasi(2, "Gedung Mashudi");
    set_nama_lokasi(3, "Parkir Motor 1");
    set_nama_lokasi(4, "Gazebo");
    set_nama_lokasi(5, "Kantin");
    set_nama_lokasi(6, "UKM");
    set_nama_lokasi(7, "Saung Unper");
    set_nama_lokasi(8, "Mushola");
    set_nama_lokasi(9, "Hotel Unper");
    set_nama_lokasi(10, "Lab Farmasi");
    set_nama_lokasi(11, "Gedung PGSD, Farmasi, Faperta");
    set_nama_lokasi(12, "Kopma, Ormawa");
    set_nama_lokasi(13, "Parkir Motor 2");
    set_nama_lokasi(14, "Parkir Motor 1");
    set_nama_lokasi(15, "Bundaran");
    set_nama_lokasi(16, "Lab Komputer 1");
    set_nama_lokasi(17, "Lab Komputer 2");
    set_nama_lokasi(18, "Perpustakaan");
    set_nama_lokasi(19, "Lab Toufel & Budaya");
    set_nama_lokasi(20, "Parkir Mobil");
    set_nama_lokasi(21, "Gedung Sholihin");
    set_nama_lokasi(22, "Ruang Sajian Perhotelan");
    set_nama_lokasi(23, "Lapang Basket & Voli");
    set_nama_lokasi(24, "Lapang Unper");
    set_nama_lokasi(25, "Pos Satpam");

    // Bagian Atas Kiri
    tambah_jalur(1,2,5);
    tambah_jalur(2,3,5);
    tambah_jalur(2,15,5);

    tambah_jalur(3,4,5);
    tambah_jalur(4,5,5);
    tambah_jalur(5,6,5);
    tambah_jalur(6,10,5);
    tambah_jalur(10,11,5);

    tambah_jalur(4,7,5);
    tambah_jalur(7,8,5);
    tambah_jalur(8,9,5);
    tambah_jalur(12,13,5);
    tambah_jalur(12,15,5);

    tambah_jalur(13,14,5);
    tambah_jalur(14,15,5);
    tambah_jalur(15,25,5);

    tambah_jalur(15,16,5);
    tambah_jalur(16,17,5);
    tambah_jalur(17,18,5);
    tambah_jalur(17,19,5);
    tambah_jalur(19,20,5);
    tambah_jalur(20,25,5);

    tambah_jalur(14,21,5);
    tambah_jalur(15,21,5);
    tambah_jalur(21,22,5);
    tambah_jalur(21,23,5);
    tambah_jalur(22,23,5);
    tambah_jalur(21,24,5);
    tambah_jalur(24,25,5);
}
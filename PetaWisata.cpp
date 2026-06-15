include <iostream>
using namespace std;

const int jumlah_lokasi = 25;
const int hubung = 1;

int jarak[ jumlah_lokasi + 1 ][ jumlah_lokasi + 1 ];
std :: string nama_lokasi[jumlah_lokasi + 1];

void set_nama_lokasi(int id, std::string nama_lokasi){
    nama_lokasi[id] = nama;
}

void tambah_jalur(int a, int b, int jarak){
    jarak[a][b] = jarak;
    jarak[a][b] = jarak;
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
    set_nama_lokasi("Praktek Faperta");
    set_nama_lokasi("Gedung Mashudi");
    set_nama_lokasi("Parkir Motor 1");
    set_nama_lokasi("Gazebo");
    set_nama_lokasi("Kantin");
    set_nama_lokasi("UKM");
    set_nama_lokasi("Saung Unper");
    set_nama_lokasi("Mushola");
    set_nama_lokasi("Hotel Unper");
    set_nama_lokasi("Lab Farmasi");
    set_nama_lokasi("Gedung PGSD, Farmasi, Faperta");
    set_nama_lokasi("Kopma, Ormawa");
    set_nama_lokasi("Parkir Motor 2");
    set_nama_lokasi("Parkir Motor 1");
    set_nama_lokasi("Bundaran");
    set_nama_lokasi("Lab Komputer 1");
    set_nama_lokasi("Lab Komputer 2");
    set_nama_lokasi("Perpustakaan");
    set_nama_lokasi("Lab Toufel & Budaya");
    set_nama_lokasi("Parkir Mobil");
    set_nama_lokasi("Gedung Sholihin");
    set_nama_lokasi("Ruang Sajian Perhotelan");
    set_nama_lokasi("Lapang Basket & Voli");
    set_nama_lokasi("Lapang Unper");
    set_nama_lokasi("Pos Satpam");

    //Bagian Atas Kiri
    tambah_jalur(1,2,5);
    tambah_jalur(2,3,5);
    tambah_jalur(2,15,5);
    
    //
    tambah_jalur(3,4,5);
    tambah_jalur(4,5,5);
    tambah_jalur(5,6,5);
    tambah_jalur(6,10,5);
    tambah_jalur(10,11,5);

    //
    tambah_jalur(4,7,5);
    tambah_jalur(7,8,5);
    tambah_jalur(8,9,5);
    tambah_jalur(12,13,5);
    tambah_jalur(12,15,5);

    //
    tambah_jalur(13, 14,5);
    tambah_jalur(14,15,5);
    tambah_jalur(15,25,5);

    //
    tambah_jalur(15,16,5);
    tambah_jalur(16,17,5);
    tambah_jalur(17,18,5);
    tambah_jalur(17,19,5);
    tambah_jalur(19,20,5);
    tambah_jalur(20,25,5);

    //
    tambah_jalur(14,21,5);
    tambah_jalur(15,21,5);
    tambah_jalur(21,22,5);
    tambah_jalur(21,23,5);
    tambah_jalur(22,23,5);
    tambah_jalur(21,24,5);
    tambah_jalur(24,25,5);
}




#include <iostream>
using namespace std;

struct kost {
    int no;
    string nama;
    string fasilitas;
    double harga;
    bool status;
};

int main() {
    kost kamar[5];

    kamar[0] = {55, "pak gepeng", "Kipas, Meja, Lemari, TV", 600, true};
    kamar[1] = {85, "pak gepeng", "AC, Meja, Lemari, TV, Kulkas", 900, false};
    kamar[2] = {95, "pak gepeng", "Kipas, Meja", 300, true};
    kamar[3] = {88, "pak gepeng", "AC, Meja, Lemari, TV, Kulkas, Mesin cuci", 1000, false};
    kamar[4] = {75, "pak gepeng", "Kipas, Meja, Lemari", 500, true};

    //Menampilkan Seluruh Data Kamar kost
    cout << "=====Tampilan Data Rumah Kost=====" << endl;
    cout << "==================================" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nomor kamar: " << kamar[i].no << endl;
        cout << "Nama kos: " << kamar[i].nama << endl;
        cout << "Fasilitas: " << kamar[i].fasilitas << endl;
        cout << "Harga sewa per bulan: Rp. " << kamar[i].harga << endl;
        cout << "Status: " << (kamar[i].status ? "Tersedia" : "Sedang Disewa") << endl;
        cout << "==================================" << endl;
    }
}

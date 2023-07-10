#include <iostream>
using namespace std;

struct kost {
    int no;
    string nama;
    string fasilitas;    
    double harga;
    bool status;
};

void sorting_bubble(kost kamar[], int jml);
void ketersediaan(kost kamar[], int jml); 

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

    //menampilkan Urutan Harga sewa Kamar koat yang terendah-tertinggi
    cout << "Harga sewa per bulan (Sebelum Diurutkan): " << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Nomor kamar (" << kamar[i].no << ") Harga sewa: Rp." << kamar[i].harga << endl;
    }
    
    cout << "\nHarga sewa per bulan (Setelah Diurutkan): " << endl;
    sorting_bubble(kamar, 5);
    for (int i = 0; i < 5; i++) {
        cout << "Nomor kamar (" << kamar[i].no << ") Harga sewa: Rp." << kamar[i].harga << endl;
    }

    //Menampilkan Seluruh Kamar kost yang Tersedia
    cout << "\nKamar kost yang tersedia: " << endl;
    ketersediaan(kamar, 5);
    
    //menampilkan Total Harga Sewa jika Kamar kost akan disewa
    int jumlahKamar;
    cout << "\nMasukkan jumlah kamar yang ingin dipesan: ";
    cin >> jumlahKamar;

    double totalHarga = 0;
    cout << "Masukkan nomor kamar yang ingin dipesan (pisahkan dengan spasi): ";
    for (int i = 0; i < jumlahKamar; i++) {
        int nomorKamar;
        cin >> nomorKamar;
        
     if(nomorKamar==55 || nomorKamar==75 || nomorKamar==95){
        for (int j = 0; j < 5; j++) {
            if (kamar[j].no == nomorKamar) {
                cout << "Nomor kamar (" << kamar[j].no << ") Harga sewa: Rp." << kamar[j].harga << endl;
      
                totalHarga += kamar[j].harga;
                break;
            }
        }
     }else
        cout<<"Maaf kamar nomor ("<<nomorKamar<<") Tidak Tersedia"<<endl;    
    }
   
    cout << "Total harga sewa untuk " << jumlahKamar << " kamar: Rp. " << totalHarga << endl;

    return 0;
    system("pause");
}


void sorting_bubble(kost kamar[], int jml) {
    kost temp;
    int i,j;
    i = jml-1;
    do{
       for(j=0;j<i;j++){
          if(kamar[j+1].harga < kamar[j].harga){
     			temp = kamar[j + 1];
                kamar[j + 1] = kamar[j];
                kamar[j] = temp;
 			}
 		}
 		i--;
	 }while(i>0);
}


void ketersediaan(kost kamar[], int jml) {
    for (int i = 0; i < jml; i++) {
        if (kamar[i].status == 1) {
            cout << "Nomor kamar (" << kamar[i].no << ") tersedia" << endl;
        }
    }
}

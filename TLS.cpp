#include<iostream>

using namespace std;
int pilihan;
char nomakanan;
char nominuman;
int jumlahmakanan;
int jumlahminuman;
int hargatotal;
int j;
int m;
int main (){
         cout<<"-----------------\n";
         cout<<"|Restaurant Zein|\n";
         cout<<"-----------------\n";
         cout<<"Pilih\n";
         cout<<"1.Menu makanan\n";
         cout<<"2.Menu minuman\n";
         cout<<"3.Pesan makanan dan minuman\n";
         cout<<"Masukkan pilihan : ";
         cin>>pilihan;
if(pilihan==1){
         cout<<"Daftar Menu Makanan Rumah Makan Zein\n";
         cout<<"1.Nasi goreng        15.000\n";
         cout<<"2.Bakmi goreng       15.000\n";
         cout<<"3.Bakmi rebus        15.000\n";
         cout<<"4.Kwetiaw goreng     15.000\n";
         cout<<"5.kwetiaw rebus      15.000\n";
    }
else if (pilihan==2){
         cout<<"Daftar Menu Minuman Rumah Makan Zein\n";
         cout<<"1.Es jeruk           3.000\n";
         cout<<"2.Es teh             3.000\n";
    }
else if (pilihan==3){
         cout<<"Jumlah makanan yang ingin dipesan : ";
         cin>>jumlahmakanan;
    for(j=0;j<jumlahmakanan;j++){
        cout<<"Silahkan masukkan nomor makanan : ";
        cin>>nomakanan;   
    switch(nomakanan){
        case '1':
        cout<<"Anda memesan nasi goreng\n";
        break;
        case '2':
        cout<<"Anda memesan bakmi goreng\n";
        break;
        case '3':
        cout<<"Anda memeasan bakmi rebus\n";
        break;
        case '4':
        cout<<"Anda memesan Kwetiaw goreng\n";
        break;
        case '5':
        cout<<"Anda memesan kwetiaw rebus";
        break;
        default:
        cout<<"Menu yang anda pilih tidak ada di restaurant ini\n";
    }
    }
         cout<<"Jumlah minuman yang ingin dipesan : ";
         cin>>jumlahminuman;
    for(m=0;m<jumlahminuman;m++){   
         cout<<"Silahkan masukkan pilihan minuman : ";
         cin>>nominuman;
    switch(nominuman){
        case '1':
        cout<<"Anda memesan es jeruk\n";
        break;
        case '2':
        cout<<"Anda memesan es teh\n";
        break;
        default:
        cout<<"Minuman itu tidak ada  di restaurant ini\n";
        break;
    }
    }
        hargatotal=j*15000+m*3000;
        cout<<"Harga total yang harus dibayar adalah "<< hargatotal;
    }
    else{
         cout<<"Masukkan pilihan angka yang sudah disediakan\n";
    }
    return 0;
}
#include<iostream>   //header yang dibutuhkan untuk input dan output
using namespace std; 

int main(){  //statement yang digunakan saat program dimulai
    int umur, thn;  //mendeklarasikan var umur dan tahun
    cout<<"masukkan tahun lahir = "; //untuk mencetak statement dalam tanda kutip (perintah memasukan tahun lahir)
    cin>> thn;  //untuk input dari user saat digunakan
    umur = 2021-thn;  //rumus (umur sekarang dikurang tahun lahir)
    cout<<"umur anda = "<<umur;  //untuk mencetak statement dalam tanda kutip (menampilkan umur)
    

    return 0; // perintah untuk mengakhiri program 
}

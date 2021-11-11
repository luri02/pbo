#include<iostream>
#include<string>

using namespace std;

class nama{
	private :
		string nama1;
		string nama2;
		string nama3;
		string nama4;
	
	public :
		void setnama(){
			string np,nt,nl,fn;
			nama1 = np;
			nama2 = nt;
			nama3 = nl;
			nama4 = fn;
			
			cin.ignore();
			cout<<"Masukan Nama Awal  = ";cin>>nama1;
			cin.ignore();
			cout<<"Masukan Nama Tengah   = ";cin>>nama2;
			cin.ignore();
			cout<<"Masukan Nama Akhir = ";cin>>nama3;
			cin.ignore();
			cout<<"Masukan Nama Panjang  = ";cin>>nama4;
			
			cin.ignore();
		}
		string getnama1(){
			return nama1;
		}
		string getnama2(){
			return nama2;
		}
		string getnama3(){
			return nama3;
		}
		string getnama4(){
			return nama4;
			
		}
};

int main(){
	int pilih;
	char ulang;
	nama a;

	menu:
		system("clear");
		cout<<"0. Keluar"<<endl;
		cout<<"1. Input "<<endl;
		cout<<"Masukan Pilihan Anda = ";cin>>pilih;
		
	if (pilih == 1){
		a.setnama();
		cout<<"Nama Awal  = "<<a.getnama1()<<endl;
		cout<<"Nama Tengah  = "<<a.getnama2()<<endl;
		cout<<"Nama Akhir = "<<a.getnama3()<<endl; 
		cout<<"Nama Panjang = "<<a.getnama4()<<endl;
		cout<<"Ingin memilih menu lain (y/t)? ";
    	cin >> ulang;
    	cout << endl;
	}


	
	if (pilih == 0){
		
		cout<<"Thanks";
	}
		
}
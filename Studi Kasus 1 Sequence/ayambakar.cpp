#include <iostream>
#include <fstream>

using namespace std;

int main(){
	
	int pilih,pesan, bayar, total, harga_akhir, diskon;
	int jmlpesan;
	int ayampesan1, ayampesan2;
	int totalgoreng, totalbakar;
	char n;
	string ayamgoreng = "Ayam Goreng";
	string ayambakar = "Ayam Bakar";
	int hargagoreng = 17000;
	int hargabakar = 21000;
	
	Menu:
		cout<<"=============================\n";
		cout<<"AYAM GORENG & BAKAR SUMBERADI"<<endl;
		cout<<"--PESAN (Ketik 1)--"<<endl;
		cout<<"--BAYAR (Ketik 2)--"<<endl;
		cout<<"--CETAK (Ketik 3)--"<<endl;
		cout<<"=============================\n";
		cout<<">>";cin>>pilih;
		
		if(pilih==1){
			PESAN:
				cout<<"\n\n1.Ayam Goreng Rp 17000"<<endl;
				cout<<"2.Ayam Bakar Rp 21000"<<endl;
				cout<<">>";cin>>pesan;
				if(pesan==1){
					cout<<"====================\n";
					cout<<"Anda Memilih Ayam Goreng"<<endl;
					cout<<"Bereapa yang anda pesan >> ";cin>>jmlpesan;
					cout<<"====================\n";
					total=jmlpesan*17000;
					cout<<"Tekan Y/y untuk lanjut ";cin>>n;
					system("cls");
					cout<<"====================\n";
					cout<<"Menu : Ayam Goreng "<<jmlpesan<<endl;
					cout<<"Total: "<<total<<endl;
					cout<<"====================\n";

//					goto PESAN;
				}
				else if(pesan==2){
					cout<<"====================\n";
					cout<<"Anda Memilih Ayam Bakar"<<endl;
					cout<<"Bereapa yang anda pesan >> ";cin>>jmlpesan;
					cout<<"====================\n";
					total=jmlpesan*21000;
					cout<<"Tekan Y/y untuk lanjut ";cin>>n;
					system("cls");
					cout<<"====================\n";
					cout<<"Menu : Ayam Bakar "<<jmlpesan<<endl;
					cout<<"Total: "<<total<<endl;
					cout<<"====================\n";

				}
				else if(pesan==3){
					cout<<"====================\n";
					cout<<"Anda Memilih 2 menu\n";
					cout<<"====================\n";
					cout<<"Anda memesan ayam goreng sebanyak >> ";cin>>ayampesan1;
					cout<<"Anda memesan ayam bakar sebanyak >> ";cin>>ayampesan2;
					totalgoreng=ayampesan1*17000;
					totalbakar=ayampesan2*21000;
					total=totalgoreng+totalbakar;
					cout<<"====================\n";
					cout<<"Menu : Ayam Goreng "<<ayampesan1<<" dan Ayam Bakar "<<ayampesan2<<endl;
					cout<<"Total: "<<total<<endl;
					cout<<"====================\n";
				}

				
		}

		
		if(total>45000){
			cout<<"ANDA DAPAT DISKON 10%"<<endl;
			diskon=total/10;
			harga_akhir=total-diskon;
			cout<<"Harga Akhir = "<<harga_akhir<<endl;
		}
		else{
			cout<<"Harga Akhir = "<<total;
		}
		
}

#include <iostream>
#include <string.h>
using namespace std;

string barang[]={"Sabun Beta","Sabun Alpha","Sabun Anak","Sabun Detol","Sabun Cair","Sabun Padat","Sabun Cuci","Sabun Wangi","Sabun Luxury","SabunWangiV2.0"};
int harga[]={10000,15000,11500,12000,12000,13500,13000,12000,50000,22500};

	void listsabun(string barang[]){
    cout<< "-----------------------------------------------------------------------------\n";
    cout<< "  No \t\t  Barang\t\t\tharga\n";
    cout<< "-----------------------------------------------------------------------------\n";
    for(int i=1;i<=9;i++){
        cout<<" "<<i<<"\t\t"<<barang[i]<<"\t\t\tRp "<<harga[i]<<endl;
    }
    cout << "------------------------------------------------------------------------------\n";
	}	   

int main(){
	
	int pilih,buy;
	int sabun,total_harga,bayar,harga_akhir;
	
	Menu:
		cout<<"=============================\n";
		cout<<"TOKO SERBUN(SERBA SABUN)"<<endl;
		listsabun(barang);
		cout<<"--BELI (Ketik 1)--"<<endl;
		cout<<"--KELUAR (Ketik 2)--"<<endl;
		cout<<"=============================\n";
		cout<<">>";cin>>pilih;
		
		if(pilih==1){
			beli:
				system("cls");
				listsabun(barang);
				cout<<"Sabun Apa yang anda ingin beli? (Ketik Nomernya Saja!)"<<endl;
				cin>>sabun;
				if(sabun==0||sabun>9){
					cout<<"SALAH,!!\n";
					system("pause");
					goto beli;
				}
				else{
					cout<<"Nama  Sabun: "<<barang[sabun]<<endl;
       				cout<<"Harga Sabun:Rp "<<harga[sabun]<<endl;
       				cout<<"Berapa Yang dibeli: ";cin>>buy;
       				total_harga=buy*harga[sabun];
       				cout<<"-----------------------------"<<endl;
       				cout<<"Total Harga:Rp "<<total_harga<<endl;
       				cout<<"-----------------------------"<<endl;
       				
				}
				system("cls");
				cout<<"Nama  Sabun: "<<barang[sabun]<<endl;
       			cout<<"Harga Sabun:Rp "<<harga[sabun]<<endl;
       			cout<<"Jumlah Beli: "<<buy<<endl;
       			cout<<"Total Harga:Rp "<<total_harga<<endl;
       			cout<<"-----------------------------"<<endl;
       			cout<<"Bayar      :Rp ";cin>>bayar;
				harga_akhir=bayar-total_harga;
				cout<<"Kembalian  :Rp "<<harga_akhir<<endl;
				system("pause");
			goto Menu;
		}
		
		
}

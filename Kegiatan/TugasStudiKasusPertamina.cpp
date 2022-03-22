#include <cstdlib>
#include <iostream>
#include <fstream>
using namespace std;
class Bensin{
      public :
             Bensin();
             void pilihan();
             void hitung_uang();
             void hitung_liter();
             void nama();
      private :
              double uang, liter, tampil;
              char pil;
              char ambil;
              double harga, pertamax, pertalite;
              string na;
      };
void Bensin::nama(){
	cout <<"\nMasukan nama pelanggan: ";
	cin>> na;
}
Bensin::Bensin(){
     harga = 0;
     pertalite = 7000;
     pertamax = 9000;
     }
void Bensin::pilihan(){
     cout<<"=======Selamat Datang di SPBU UAD======="<<endl;
     nama();
	 cout<<"\nBeli berdasarkan : "<<endl;
     cout<<"a --> Pertalite "<<endl;
     cout<<"b --> Pertamax "<<endl;
     cout<<"Masukkan pilihan anda = ";
     cin>>ambil;
     if(ambil == 'a' || ambil == 'b'){
              cout<<"Beli berdasarkan :"<<endl;
     cout<<"1 -> Uang"<<endl;
     cout<<"2 -> Liter"<<endl;
     cout<<"Masukkan pilihan pembelian : ";
     cin>> pil;
     if(pil == '1'){
          hitung_uang();
          }
     else if(pil=='2'){
          hitung_liter();
          }
     else{
          system("cls");
          pilihan();
          }
              }
     system("cls");
     pilihan();    
     }
void Bensin::hitung_uang(){
     cout<<"masukkan besarnya uang : ";
     cin>> uang;
     if(ambil == 'a'){
              harga = pertalite;
              }
     else if (ambil == 'b'){
          harga = pertamax;
          }
     tampil = uang / harga;
     if(ambil == 'a'){
        	cout << "\n=======Struk SPBU UAD=======" << endl;
			cout << "\nNama Pelanggan  : " << na << endl;
			cout << "Total Liter \t: " << tampil << endl;
            cout << "Jenis Bensin \t: " << "Pertalite" << endl;
            cout << "Total Harga \t: " << uang << endl;
            ofstream hsl;
        	hsl.open("struct.txt", ios::out);
        	hsl <<  "\n=======Struk SPBU UAD=======" << endl;
        	hsl <<  "Nama Pelanggan : " << na << endl;
        	hsl <<  "Total Liter \t: " << tampil << endl;
        	hsl <<  "Jenis Bensin \t: " << "Pertalite" << endl;
        	hsl <<  "Total Harga \t: " << uang << endl;
        	hsl.close();
              }
     else if (ambil == 'b'){
	 		cout << "\n=======Struk SPBU UAD=======" << endl;
			cout << "Nama Pelanggan : " << na << endl;
			cout << "Total Liter \t: " << tampil << endl;
            cout << "Jenis Bensin \t: " << "Pertamax" << endl;
            cout << "Total Harga \t: " << uang << endl;
            ofstream hsl;
        	hsl.open("struct.txt", ios::out);
        	hsl <<  "\n=======Struk SPBU UAD=======" << endl;
        	hsl <<  "Nama Pelanggan : " << na << endl;
        	hsl <<  "Total Liter \t: " << tampil << endl;
        	hsl <<  "Jenis Bensin \t: " << "Pertamax" << endl;
        	hsl <<  "Total Harga \t: " << uang << endl;
        	hsl.close();
	 }
     system("PAUSE");
     system("cls");
     pilihan();
     }
void Bensin::hitung_liter(){
     cout<<"masukkan jumlah liter : ";
     cin>> liter;
      if(ambil == 'a'){
              harga = pertalite;
              }
     else if (ambil == 'b'){
          harga = pertamax;
          }
     tampil = harga * liter;
     if(ambil == 'a'){
     		cout << "\n=======Struk SPBU UAD=======" << endl;
			cout << "Nama Pelanggan :  " << na << endl;
			cout << "Total Liter \t: " << liter << endl;
            cout << "Jenis Bensin \t: " << "Pertalite" << endl;
            cout << "Total Harga \t: " << tampil << endl;
            ofstream hsl;
        	hsl.open("struct.txt", ios::out);
        	hsl <<  "\n=======Struk SPBU UAD=======" << endl;
        	hsl <<  "Nama Pelanggan : " << na << endl;
        	hsl <<  "Total Liter \t: " << liter << endl;
        	hsl <<  "Jenis Bensin \t: " << "Pertalite" << endl;
        	hsl <<  "Total Harga \t: " << tampil << endl;
        	hsl.close();
            }
              
     else if (ambil == 'b'){
     		cout << "\n=======Struk SPBU UAD=======" << endl;
     		cout << "Nama Pelanggan : " << na << endl;
			cout << "Total Liter \t: " << liter << endl;
        	cout << "Jenis Bensin \t: " << "Pertamax" << endl;
        	cout << "Total Harga \t: " << tampil << endl;
        	ofstream hsl;
        	hsl.open("struct.txt", ios::out);
        	hsl <<  "\n=======Struk SPBU UAD=======" << endl;
        	hsl <<  "Nama Pelanggan : " << na << endl;
        	hsl <<  "Total Liter \t: " << liter << endl;
        	hsl <<  "Jenis Bensin \t: " << "Pertamax" << endl;
        	hsl <<  "Total Harga \t: " << tampil << endl;
        	hsl.close();
          }
     system("PAUSE");
     system("cls");
     pilihan();
     }
int main(int argc, char *argv[])
{
    Bensin x;
    x.pilihan();
    system("PAUSE");
    return EXIT_SUCCESS;
}

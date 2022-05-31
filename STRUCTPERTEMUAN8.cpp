#include <iostream>
#include <cstdlib>

using namespace std;

struct Mahasiswa
{
	char NIM[100];
	string Nama;
	string alamat;
	float ipk;
};

void input_data(Mahasiswa &mhs);
void print_data(const Mahasiswa &mhs);

int main () 
{
	Mahasiswa mhs[20];
	int jml, nmr;
	
	cout<<"\tAplikasi Input Data Mahasiswa" <<endl;
	cout<<"Banyak Data yang akan di inputkan : "; cin >> jml;
	
	for (int i=0; i<jml; i++)
	{
		system("cls");
		cout << "Mahasiswa ke-"<<(i+1)<<endl;
		input_data(mhs[i]);
	}
	
	system("cls");
	cout << "Tampilkan data no. : "; cin >> nmr;
	if (nmr <= jml)
	{
		print_data (mhs[nmr-1]);
	}
	else
		cout<< "Data tidak ada";
		
	return 0;
    }
    
    void input_data (Mahasiswa &mhs)
    {
    	cout << "Input data Mahasiswa" << endl;
    	cout << "NIM	: "; cin >> mhs.NIM;
    	cin.ignore(1, '\n');
    	cout << "Nama  : "; getline(cin, mhs.Nama);
    	cout << "Alamat: "; getline (cin, mhs.alamat);
    	cout << "IPK   : "; cin >> mhs.ipk;
    	
	}
	void print_data(const Mahasiswa &mhs)
	{
		cout << "Data Mahasiswa" << endl;
		cout << "NIM 	: "<< mhs.NIM <<endl;
		cout << "Nama 	: "<< mhs.Nama<<endl;
		cout << "Alamat : "<< mhs.alamat<<endl;
		cout << "IPK	: "<< mhs.ipk<<endl;
	}
	

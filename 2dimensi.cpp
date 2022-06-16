//Muhammad Naufal Labib Ramadhan (2100018378)
//Ilham Nur Cahyo (2100018387)
#include <iostream>
using namespace std;

class array{
	public:
		void input();
		void output();
	private:
		string nama[5][1];
	 	int stok[5][1];
		int harga[5][1];
		int jumlah[5];
		int total;
};

void array::input(){
	for(int i = 0; i < 5; i++) {
		cout<<"==========================="<<endl;
		for (int j = 0; j < 1; j++) {
			cout<<"Nama : ";
			cin>>nama[i][j];
		}
		for (int j = 0; j < 1; j++) {
			cout<<"Stok : ";
			cin>>stok[i][j];
		}
		for (int j = 0; j < 1; j++) {
			cout<<"harga : ";
			cin>>harga[i][j];
		}
		cout<<"==========================="<<endl<<endl;
	}
}

void array::output(){
  cout<<"===================================="<<endl;
	cout<<"|	Nama	  |	Stock	|	Harga	|"<<endl;
  cout<<"===================================="<<endl;
	for(int i = 0; i < 5; i++) {
		for (int j = 0; j < 1; j++) {
			cout<<"\t"<<nama[i][j]<<"\t\t\t\t"<<stok[i][j]<<"\t\t\t\t"<<harga[i][j];
		}
		cout<<endl;
	}
	
	for(int i = 0; i < 5; i++) {
		for (int j = 0; j < 1; j++) {
			jumlah[i] = stok[i][j] * harga[i][j];
		}
	}
	
	for(int i = 0; i < 5; i++) {
		total = total + jumlah[i];
	}
  cout<<"===================================="<<endl;
	cout<<"\t"<<"total : "<<total<<endl;
}

int main() {
	array out;
	out.input();
	out.output();
	return 0;
}


#include <iostream>
using namespace std;

int main(){
	/* Nama : Rivaldo
	   Kelas: B
	   NPM  : 2117051054
	   */
	int gaji,umr;
	
	cout<<"-------- Cek UMR gaji --------"<<endl;
	cout<<""<<endl;
	
	cout<<"Masukan Gaji : ";cin>>gaji;
	cout<<"Masukan Umr  : ";cin>>umr;
	//memasukan gaji dan umr untuk di cek di program if else
	
	cout<<"\n";
	cout<<"-------- Hasil Gaji Anda --------\n";
	cout<<"\n";
	
	if(gaji>umr){
		cout<<"Gaji Anda Diatas UMR"<<endl;
		//jika gaji lebih dari umr
	}
	else if(gaji==umr){
		cout<<"Gaji Anda Setara Umr"<<endl;
		//jika gaji pas dengan umr
	}
	else{
		cout<<"Gaji Anda dibawah Umr"<<endl;
		//jika gaji kurang dari umr
	}
	return 0;
}

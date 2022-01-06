#include <iostream>

using namespace std;

// mengecek syarat untuk sekolah artis minimal tinggi lebih 170, berat lebih 55 dan usia 15
int main() {
    int tinggi,berat,usia;
    //memasukan angka sesuai urutan input
    cin>>tinggi; 
    cin>>berat; 
    cin>>usia; 
if(tinggi>170 && berat>55 && usia>=15){
	//jika semua benar maka akan lolos
        cout<<"Lolos"<<endl;
    }
    else{
    	//akan gagal jika salah satu tidak lolos
        cout<<"Tidak Lolos"<<endl;
    }  
    return 0;
}

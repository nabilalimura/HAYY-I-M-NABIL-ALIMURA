#include<iostream>
using namespace std;
int main () {
    int nilai,hasil;
    char ulang;
    do {
    cout<<"MENENTUKAN SEBUAH BILANGAN GANJIL ATAU GENAP"<<endl;
    cout<<"MASUKKAN BILANGAN = ";
    cin>>nilai;
    hasil=nilai%2;
    cout<<"BILANGAN TERSEBUT ADALAH = ";
    if (hasil==0)
        cout<<"GENAP";
    else
        cout<<"GANJIL";
    cout<<endl;
    cout<<"APAKAH ANDA INGIN MENGULANGI ? ";
    cin>>ulang;
    }while(ulang=='Y' || ulang=='y');
    return 0;
}

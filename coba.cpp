#include <iostream>

using namespace std;
void menu()
{
    cout << "================================="<< endl;
    cout << "1. Burger       Harga = Rp15.000" << endl;
    cout << "2. French fries Harga = Rp10.000" << endl;
    cout << "3. Coca-Cola    Harga = Rp8.000" << endl;
    cout << "4. Combo meal   Harga = Rp26.400" << endl;
    cout << "=================================" <<endl;
}
int bayar(int uang, int jumlah)
{
    cout << "========================="
    cout << "1. Cash"
}

int main()
{
    int x, y, q,w,e,r;
    int hasil=0;
    char o,u,k;
    string menu2[4] ={"Burger", "French Fries", "Coca-cola"};
    int harga[4] ={15000,10000,8000,26400};


    cout <<"===========================" << endl;
    cout <<"Selamat datang" << endl;
    cout <<"===========================" << endl;
    cout << endl;
    menu();

    for(int i=0;i<4;i++){
        cout <<"Apakah anda akan memesan "<< menu2[i] << " (Y/N): ";
        cin >> o;
        if(o =='Y'){
            cout << "Berapa yang akan dipesan: ";
            cin >> q;
            hasil =+ q*harga[i];
        }
        else{
            cout << "Anda tidak memilih " << menu2[i];
        }
        cout << endl;
    }
    cout <<"===========================" << endl;
    cout <<"Silahkan masukkan uang mu: ";
    cin >> x;
    cout <<"===========================" << endl;



    return 0;
}


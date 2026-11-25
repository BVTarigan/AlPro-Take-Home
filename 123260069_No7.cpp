#include <iostream>
using namespace std;

string angka[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};

int main() {
    while (true) {
        int input = {};

        cout << "Masukkan Angka: ";
        cin >> input;

        int satuan = input % 10;
        int puluhan = (input - satuan) / 10;

        cout << "Terbilang: ";

        if(puluhan > 0){
            if(puluhan == 1){
                switch (satuan)
                    {
                    case 0:
                        cout << "sepuluh";
                        break;
                    case 1:
                        cout << "sebelas";
                        break;
                    default:
                        cout << angka[satuan] << " belas";
                        break;
                    }
            } else{
                cout << angka[puluhan] << " puluh ";

                if(satuan > 0) cout << angka[satuan];    
            }
        } else cout << angka[satuan];

        cout << "\n\n";
    }

    return 1;
}
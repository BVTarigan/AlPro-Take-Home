#include <iostream>
using namespace std;

int v(int value){
    return (value > 12) ? value - 12 : ( (value <= 0 ? 12 + value : value) );
}

int main(){
    cout << "-------------------------------------------\n";
    cout << "\t\tNama\t: Bryan Valentino Tarigan\n";
    cout << "\t\tKelas\t: IF-B\n";
    cout << "-------------------------------------------\n";
    cout << "Program Menentukan Notasi, Sifat Warna, dan Perpaduan Warna Harmonis\nWarna-warna:\n";

    cout << "1. Orange\t\t2. Red-Orange\t3. Red\n";
    cout << "4. Red-Violet\t\t5. Violet\t6. Blue-Violet\n";
    cout << "7. Blue\t\t\t8. Blue-Green\t9. Green\n";
    cout << "10. Yellow-Green\t11. Yellow\t12. Yellow-Orange\n";

    int inputWarna;
    cout << "\nPilihan warna nomor: ";
    cin >> inputWarna;

    cout << "\nNotasi warna\t: ";

    if (inputWarna == 1 || inputWarna == 5 || inputWarna == 9)
        cout << "Sekunder";
    else if(inputWarna == 2 || inputWarna == 4 || inputWarna == 6 || inputWarna == 8 || inputWarna == 10 || inputWarna == 12)
        cout << "Tersier";
    else if(inputWarna == 3 || inputWarna == 11 || inputWarna == 7)
        cout << "Primer";
    cout << "\n";

    cout << "Sifat warna\t: ";

    if(inputWarna <= 6) cout << "Hangat";
    else cout << "Sejuk";
    cout << "\n";

    cout << "Perpaduan Warna Harmonis\n";
    cout << "a. Perpaduan Warna Analogous\nb. Perpaduan Warna Complementary\n";
    cout << "c. Perpaduan Warna Split Complementary\nd. Perpaduan Warna Tradic Complementary\n";
    cout << "e. Perpaduan Warna Tetrad Complementary\n";

    cout << "Pilihan : ";
    char pilihanPerpaduan;
    cin >> pilihanPerpaduan;

    int iW = inputWarna;
    switch (pilihanPerpaduan){
        case 'a':
            { 
            cout << "Perpaduan Warna Analogous dengan warna nomor :\n";

            int perpaduan[3][3] = {{1, 2, 0}, {-2, -1, 1}, {1, -1, 0}};

            for(int i=0; i<3;i++){
                for(int j=0; j<3; j++){
                    int curr = perpaduan[i][j];

                    if(curr != 0)
                        cout << v(iW + curr);
                    if(j < 2 && perpaduan[i][j + 1] != 0) cout << ", ";
                }
                if(i < 2) cout << " atau ";
            }

            //cout << v(iW + 1) << ", " << v(iW + 2) << " atau " << v(iW - 2) << ", " << v(iW - 1) << " atau " << v(iW + 1) << ", " << v(iW - 1);
            }
            break;
        case 'b':
            cout << "Perpaduan Warna Complementary :\n";
            cout << iW << ", " << v(iW + 6);
            break;
        case 'c':
            {
                cout << "Perpaduan Warna Split Complementary :\n";
                int perpaduan[3] = {0, 5, 7};

                for(int i=0; i < 3; i++){
                    cout << v(iW + perpaduan[i]);
                    if(i < 2) cout << ", ";
                }
            }

            //cout << iW << ", " << v(iW + 5) << ", " << v(iW + 7);
            break;
        case 'd':
            {
                cout << "Perpaduan Warna Tradic Complementary :\n";
                int perpaduan[3] = {0, 4, 8};

                for(int i=0; i < 3; i++){
                    cout << v(iW + perpaduan[i]);
                    if(i < 2) cout << ", ";
                }
            }

            //cout << iW << ", " << v(iW + 4) << ", " << v(iW + 8);
            break;
        case 'e':
            {
                cout << "Perpaduan Warna Tetrad Complementary :\n";

                int perpaduan[4] = {0, 3, 6, 9};
                
                for(int i=0; i < 4; i++){
                    cout << v(iW + perpaduan[i]);
                    if(i < 3) cout << ", ";
                }
            }

            //cout << iW << ", " << v(iW + 3)<< ", " << v(iW + 6) << ", " << v(iW + 9 );
            break;
    }

    return 1;
}
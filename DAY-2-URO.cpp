# include <iostream>
using namespace std;
int main()
{
    char op;
    float num1, num2;
    cout << "1. Pertambahan" "\n";
    cout << "2. Pengurangan" "\n";
    cout << "3. Perkalian" "\n";
    cout << "4. Pembagian" "\n";
    cout << "Silahkan Pilih Operasi : ";
    cin >> op;
    cout << "Masukkan Kedua Angka: ";
    cin >> num1 >> num2;
    switch(op)
    {
        case '1':
            cout << num1+num2;
            break;
        case '2':
            cout << num1-num2;
            break;
        case '3':
            cout << num1*num2;
            break;
        case '4':
            cout << num1/num2;
            break;
        default:
            // If the operator is other than +, -, * or /, error message is shown
            cout << "Kode Salah, Silahkan Ulang Kembali !";
            break;
    }
    return 0;
}
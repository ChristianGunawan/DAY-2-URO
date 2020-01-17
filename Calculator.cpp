# include <iostream>
# include <math.h>
using namespace std;

int main()
{
    char op;
    float num1, num2;
    bool kondisi = 1;
    
    while(kondisi == 1){
	
	    cout << "1. Pertambahan" "\n";
	    cout << "2. Pengurangan" "\n";
	    cout << "3. Perkalian" "\n";
	    cout << "4. Pembagian" "\n";
	    cout << "5. Perpangkatan\n";
	    cout << "6. Polinom\n";
	    cout << "7. Off\n";
	    cout << "Silahkan Pilih Operasi : ";
	    cin >> op;
	    
	    
	    switch(op)
	    {
	        case '1':
	        	cout << "Masukkan Kedua Angka: \n";
	    		cin >> num1 >> num2;
	            cout << num1+num2 << endl << endl;
	            break;
	        case '2':
	        	cout << "Masukkan Kedua Angka: \n";
	    		cin >> num1 >> num2;
	            cout << num1-num2 << endl << endl;
	            break;
	        case '3':
	        	cout << "Masukkan Kedua Angka: \n";
	    		cin >> num1 >> num2;
	            cout << num1*num2 << endl << endl;
	            break;
	        case '4':
	        	cout << "Masukkan Kedua Angka: \n";
	    		cin >> num1 >> num2;
	            cout << num1/num2 << endl << endl;
	            break;
	        case '5':
	        	cout << "Masukkan angka yang ingin dipangkatkan: ";
	        	cin >> num1;
	        	cout << "Masukkan besar pangkat: ";
	        	cin >> num2;
	        	cout << pow(num1,num2) << endl << endl;
	        	break;
	        case '6':
	        	int n,i;
	        	float hasil;
	        	float var[100];
	        	float pangkat[100];
	        	char tanda[100];
	        	cout << "Masukkan jumlah elemen: ";
	        	cin >> n;
	
	        	for(i=0;i<n;i++){
	        		cout << "Masukkan elemen ke-" << i+1 <<": ";
	        		cin >> var[i];}
	        	for(i=0;i<n;i++){
	        		cout << "Masukkan pangkat elemen ke-" << i+1 <<": ";
	        		cin >>pangkat[i];}
	        	for(i=0;i<n;i++){
	        		cout << "Masukkan operasi elemen ke-" << i+1 <<" (+/-): ";
	        		cin >>tanda[i];}
	        	hasil=0;
	        	for(i=0;i<n;i++){
	        		if(tanda[i]=='+'){
	        		hasil += pow(var[i],pangkat[i]);}
	        		else if(tanda[i]=='-' or tanda [i]=='_'){
					hasil -= pow(var[i],pangkat[i]);}
				}
	        	cout << "Hasil: " << hasil << endl << endl;
	        	break;
	        
	        case '7':
	        	kondisi = 0;
	        	break;
	        
	        default:
	            // If the operator is other than +, -, * or /, error message is shown
	            cout << "Kode Salah, Silahkan Ulang Kembali !\n";
	            break;
	    }
	}
    return 0;
}

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
	        	int n,i,j,k,l;
	        	int hasil;
	        	int var[100];
	        	int pangkat[100];
	        	char tanda[100];
	        	cout << "Masukkan jumlah elemen: ";
	        	cin >> n;
	
	        	for(i=0;i<n;i++){
	        		cout << "Masukkan elemen ke-" << i+1 <<": ";
	        		cin >> var[i];}
	        	for(j=0;j<n;j++){
	        		cout << "Masukkan pangkat elemen ke-" << j+1 <<": ";
	        		cin >>pangkat[j];}
	        	for(k=0;k<n;k++){
	        		cout << "Masukkan operasi elemen ke-" << k+1 <<" (+/-): ";
	        		cin >>tanda[k];}
	        	hasil=0;
	        	for(k=0;k<n;k++){
	        		if(tanda[k]=='+'){
	        		hasil += pow(var[k],pangkat[k]);}
	        		else if(tanda[k]=='-' or tanda [k]=='_'){
					hasil -= pow(var[k],pangkat[k]);}
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

#include <iostream> 
#include <string>
#include <vector>
#include <functional>
#include <iostream>
#include <sstream>
using namespace std;

//
// Please read README.md before using this program.
//

void split(const string& s, char c,
           vector<string>& v) {
   string::size_type i = 0;
   string::size_type j = s.find(c);

   while (j != string::npos) {
      v.push_back(s.substr(i, j-i));
      i = ++j;
      j = s.find(c, j);

      if (j == string::npos)
         v.push_back(s.substr(i, s.length()));
   }
}
// Fungsi split diambil dari https://www.oreilly.com/library/view/c-cookbook/0596007612/ch04s07.html

float getConstant(string f){
	vector<string> a;
	float result;
	stringstream s;
	
	split(f, 'x', a);
	
	if (a[0].empty()) a[0] = '1';
	
	s << a[0];
	s >> result;
	return result;
}

float getPower(string f){
	vector<string> a;
	float result;
	stringstream s;
	
	split(f, 'x', a);
	
	if (a[1].empty()) a[1] = '1';
	
	s << a[1];
	s >> result;
	return result;
}

string dx(float power, float constant){
	if (power == 0 || constant == 0) return "0";
	constant *= power;
	power -= 1;
	
	string result, consstr, powstr;
	stringstream pow,cons;
	
	if (power != 1){
	pow << power;
	powstr = pow.str();
	}
	
	if (constant != 1){
	cons << constant;
	consstr = cons.str();}

	if (power > 0)
	result = consstr + 'x' + powstr;
	if (power <= 0)
	result = consstr;
	if (result == "") result = "1";
	return result;
}

string dx(string expr){
	return dx(getPower(expr), getConstant(expr));
}

int main() {
   string fxstr;
   vector<string> lfx;
   cin >> fxstr;
   
   split(fxstr, '+', lfx);
   for (int i = 0; i < lfx.size(); ++i) {
      cout << dx(lfx[i]);
      if(i+1 < lfx.size()) cout << '+';
   }
   cout << '\n';
   
   main();
}

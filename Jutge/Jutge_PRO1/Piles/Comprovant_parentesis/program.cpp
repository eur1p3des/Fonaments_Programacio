#include <iostream>
#include <string>
#include <stack>


using namespace std;

bool well_parenthesis( string& s ){
	stack<char> p;
	for (int i = 0; i < int(s.size()); ++i){
		char c = s[i];
		if ( c == '(' or c == '[' ){
			p.push(c);
		}
		else{
		if( p.empty()) return false;
		 if ( c==')' and p.top() != '(') return false;
		 if ( c==']' and p.top() != '[') return false;
		 p.pop();
		}
	}
	return p.empty();
}



int main(){
    string s;
    while (cin >> s){
    	if(well_parenthesis(s)) cout << s << " is correct" << endl;
	else cout << s << " is incorrect" << endl;    
    }
} 

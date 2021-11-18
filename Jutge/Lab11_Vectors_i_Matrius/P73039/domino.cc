#include <iostream>
#include <string>


using namespace std;

void partida(){
  char c = '$';
  string s;
  bool t = false;
  
  cin >> s;

  for (int i = 1; i < 10 ; i++){
    c = s[s.size()-1];
    cin >> s;
    if (s[0] != c and !t){
      if(i%2 == 0) { cout << 'B' << endl; }
      else { cout << 'A' << endl; }
      t = true;
    } 
  }
  if (!t) { cout << '=' << endl; }
}



int main(){
  int n;
  
  cin >> n;

  while(n--) partida();
}

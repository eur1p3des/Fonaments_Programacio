#include <iostream>
#include <stack>
#include <sstream>
using namespace std;

bool es_palindrom(stack <int> original, stack <int> reverse){
    while(!original.empty()){
        if (reverse.top() == original.top()){
            reverse.pop();
           original.pop();
        }
        else return false;
    }
    return true;
}


int main(){
    string s;
    while (getline(cin, s)){
        stringstream entrada(s);
        int n;
        stack <int> s, original;
        while (entrada >> n){
            s.push(n);
            original.push(n);
        }
        stack <int> reverse;
        while (!s.empty()){
            reverse.push(s.top());
            s.pop();
        }
        if(es_palindrom(original, reverse) == true) cout << "Es un palindrom." << endl;
        else cout << "NO es un palindrom." << endl;
    }
} 

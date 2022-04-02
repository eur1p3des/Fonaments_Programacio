#include <iostream>

#include <stack>

using namespace std;

int main() {
    int n;
    stack < int > p;
    while (cin >> n) {
        if (n != -1) {
            p.push(n);
        } else {
            while (not p.empty()) {
                if (p.size() != 1){
		   cout << p.top() << " ";
		   p.pop();
		}else{
		   cout << p.top();
		   p.pop();
		}
            }
            cout << endl;
        }

    }

}

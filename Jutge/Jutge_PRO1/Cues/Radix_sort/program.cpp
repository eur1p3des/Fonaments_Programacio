#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

typedef queue<string> cua;


int main () {
    string s;
    cua Q;
    vector<cua> v(300);
    while (cin >> s)
    {
        Q.push(s);
        for (in p = s.size()-1; p>=0; p--)
        {
            while (!Q.empty())
            {
                string s = Q.front(); 
                Q.pop();
                v[s[p]-'a'].push(s);
            }
            for (int i = 0; i < (int)v.size(); i++)
            {
                while (!v[i].empty()) {
                    Q.push(v[i].front());
                    v[i].pop();
                }
            }
        }
    }

    s = Q.front(); 
    cout << s;
    Q.pop();

    while ( !Q.empty())
    {
        s = Q.front();
        cout << " " << s;
        Q.pop();
    }
    cout << endl;
}

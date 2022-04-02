#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    int num;
    while (cin >> num)
    {
        vector<pair<stack<string>, int>> vec(num);
        for (unsigned int i = 0; i < vec.size(); i++)
        {
           vec[i].second = 0;
        }
        for (int i = 0; i < num; i++)
        {
            string cromo;
            while (cin >> cromo and cromo != "FI")
            {
                vec[i].first.push(cromo);
            }
        }
        int x, y, c;
        while (cin >> x >> y >> c and x != 0 and y != 0 and c != 0)
        {
            for (int i = 0; i < c; i++)
            {
                if (vec[y - 1].first.size() > 0)
                {
                    vec[x - 1].first.push(vec[y - 1].first.top());
                    vec[y - 1].first.pop();
                }
                else
                {
                    vec[y - 1].second += 1;
                }
            }
        }
        for (int i = 0; i < num; i++)
        {
            cout << vec[i].second;
            if (vec[i].first.size() > 0)
            {
                cout << " ";
            }

            for (int j = vec[i].first.size(); j > 0; j--)
            {
                cout << vec[i].first.top();
                vec[i].first.pop();
                if (vec[i].first.size() > 0)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << "----------" << endl;
    }
} 

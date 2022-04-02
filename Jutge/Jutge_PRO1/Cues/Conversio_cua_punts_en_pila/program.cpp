#include <iostream>
#include "queueIOpunt.hpp"
#include "stackIOpunt.hpp"

using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        queue<Punt> p;
        for (int i = 0; i < n; ++i)
        {
            Punt punt;
            cin >> punt;
            p.push(punt);
        }
        cout << p;
        stack<Punt> stack_p, punts;
        for (int i = 0; i < n; ++i)
        {
            stack_p.push(p.front());
            p.pop();
        }
        while(!stack_p.empty())
        {
            punts.push(stack_p.top());
            stack_p.pop();
        }
        cout << punts;
    }
}
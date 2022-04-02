#include <iostream>
#include <queue>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	cin.ignore();

	vector<queue<string>> vq(n);

	for (int i = 0; i < n; ++i)
	{
		queue<string> &q = vq[i];
		string line;
		getline(cin, line);
		istringstream mycin(line);
		string s;
		while (mycin >> s)
		{
			q.push(s);
		}
	}

	vector<string> departures;
	string command;

	while (cin >> command)
	{
		if (command == "SURT")
		{
			int index;
			cin >> index;
			--index;
			if (0 <= index and index < n and not vq[index].empty())
			{
				departures.push_back(vq[index].front());
				vq[index].pop();
			}
		}
		else
		{
			string name;
			int index;
			cin >> name >> index;
			--index;
			if (0 <= index and index < n)
			{
				vq[index].push(name);
			}
		}
	}

	cout << "SORTIDES" << endl;
	cout << "--------" << endl;

	for (int i = 0; i < int(departures.size()); ++i)
	{
		cout << departures[i] << endl;
	}

	cout << endl;
	cout << "CONTINGUTS FINALS" << endl;
	cout << "-----------------" << endl;
    
	for (int i = 0; i < n; ++i)
	{
		queue<string> &q = vq[i];
		cout << "cua " << (i + 1) << ":";
		while (not q.empty())
		{
			cout << " " << q.front();
			q.pop();
		}
		cout << endl;
	}
}

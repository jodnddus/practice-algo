#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

//무방향 무가중치 그래프
int main()
{
	vector<int> graphList[100];
	int node,edge;
	cin >> node  >> edge;

	for(int i=0;i<node;i++)
	{
		int node1, node2;
		cin >> node1 >> node2;
		graphList[node1].push_back(node2);
		graphList[node2].push_back(node1);
	}

	cout << "인접리스트 출력" << endl;
	for(int i=1;i<=node;i++)
	{
		cout << "node" << i << " :";
		for(int j=0;j<graphList[i].size();j++)
		{
			cout << graphList[i][j];
		}
		cout << "\n";
	}
	return 0;
}

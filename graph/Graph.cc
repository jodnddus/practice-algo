#include <iostream>
#include <vector>
#include <cstdio>

using namespace std;

//무방향 무가중치 그래프
int main()
{
	vector<int> Graph[100];

	int node,edge;
	cout << "노드와 엣지의 갯수 입력: ";
	cin >> node >> edge;

	cout << "인접리스트 입력 ㄱㄱ" << endl;;
	for(int i=0;i<edge;i++)
	{
		int node1,node2;
		cin >> node1 >> node2;
		Graph[node1].push_back(node2);
		Graph[node2].push_back(node1);
	}	

	for(int i=0;i<=edge;i++)
	{
		cout << "node" << i << ": ";
		for(int j=0;j<Graph[i].size();j++)
		{
			cout << Graph[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}

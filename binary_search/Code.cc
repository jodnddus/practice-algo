#include <iostream>
#include <vector>

using namespace std;

//use vector
bool BSearch(int target, vector<int> &num)
{
	int bottomNum = 0;
	int topNum = num.size();

	while(bottomNum < topNum)
	{
		int distance = bottomNum + topNum;
		int middleNum = distance / 2;

		if(num[middleNum] == target)
		{
			cout << num[middleNum] << endl;
			return true;
		}

		if(num[middleNum] > target)
		{
			topNum = middleNum;
		}
		else
		{
			bottomNum = middleNum + 1;
		}
	}
	return false;
}

int main()
{
	int vectorArray[8] = {1,2,3,4,5,6,7,8};
	vector<int> v(vectorArray, vectorArray + (sizeof(vectorArray) / sizeof(vectorArray[0])));
	if(BSearch(7, v) == true)
		cout << "Happy coding!" << endl;
	else
		cout << "...But Happy codding!" << endl;	
	
	return 0;
}

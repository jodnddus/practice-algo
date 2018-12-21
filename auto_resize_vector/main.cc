#include <iostream>

class bector {
private:
	int size;
	int *data;
	int top;
public:
	~bector()
   	{
		std::cout << "delete" << std::endl;
		delete[] data;
	}
	void init(int size)
	{
		data=new int[sizeof(int) * size];
		top = 0;
		size = 0;
	}
	void append(int _data)
	{
		*(data+top) = _data;
		size++;	
	}
	void print(int idx)
	{
		std::cout << *(data+idx) << std::endl;		
	}
};

int main(void)
{
	bector* b = new bector();
	b->init(10);
	b->append(1);
	b->print(0);
	return 0;	
}

#include <iostream>

class bector {
private:
	size_t nsize;
	size_t ntop;
	int *data;
public:
	bector (size_t s) : data(new int[s]), nsize(s), ntop(0) {}
	~bector () { std::cout << "delete" << std::endl; delete[] data; }

	size_t size() { return ntop; }
	size_t capacity() { return nsize; }	

	void append(int _data)
	{
		*(data+ntop) = _data;
		ntop++;
	}	
	int pop()
	{
		int temp = *(data+ntop);
		*(data+ntop) = 0;
		return temp;
	}
	void print()
	{
		for(int i=0;i<nsize;i++)
			std::cout << *(data+i) << std::endl;
	}
	
};

int main(void)
{
	bector *b = new bector(3);
	b->append(1);
	b->append(2);
	b->append(3);
	b->print();
	std::cout << b->size() << "," <<  b->capacity() << std::endl;
	delete b;
	return 0;	
}

#include <iostream>

class bector {
private:
	size_t nsize;
	size_t ntop;
	int *data;
public:
	explicit bector (size_t s) : data(new int[s]), nsize(s), ntop(0)
	{
		for(int i=0;i<s;i++)
			*(data+i) = 0;	
	}	
	explicit bector (size_t s, int _data): data(new int[s]), nsize(s), ntop(0)
	{
		for(int i=0;i<s;i++)
			*(data+i) = _data;
	}
	~bector () { std::cout << "delete" << std::endl; delete[] data; }

	size_t size() { return ntop; }
	size_t capacity() { return nsize; }	

	void pop() { ntop--; }

	void append(int _data)
	{
		*(data+ntop) = _data;
		ntop++;
	}	
	void print()
	{
		for(int i=0;i<ntop;i++)
			std::cout << *(data+i) << std::endl;
	}
	
};

int main(void)
{
	bector *b = new bector(5, 2);
	b->append(2);
	std::cout << "ntop: " << b->size() << std::endl; 
	b->append(4);
	std::cout << "ntop: " << b->size() << std::endl;
	b->append(6);
	std::cout << "ntop: " << b->size() << std::endl;
	b->print();
	//std::cout << b->size() << "," <<  b->capacity() << std::endl;
	b->pop();
	b->print();
	b->append(8);
	std::cout << "ntop: " << b->size() << std::endl;
	b->print();
	b->pop();
	delete b;
	return 0;	
}

#include <iostream>
#include <stdlib.h>

class bector {
private:
	size_t nsize;
	size_t ntop;
	int *data;
	
	//크기가 다 찻을 때, 크기의 두배를 리사이징한다
	//아이템을 poping할 때 원래 사이즈의 4분의1이면 반으로 리사이징한다
	void resize(int flag)
	{
		if(flag == 2)
		{
			std::cout << "Twice" << std::endl;
			data = (int*)realloc(data, nsize*2);
			nsize *= 2;
		}	
		else if(flag == 1)
		{
			std::cout << "half" << std::endl;
			data = (int*)realloc(data, nsize/2); 
			nsize /= 2;
		}	
	}
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

	void pop()
   	{
	   	ntop--;
		if(ntop * 4 == nsize) resize(1);
   	}
	void append(int _data)
	{
		*(data+ntop) = _data;
		ntop++;
		if(ntop == nsize) resize(2);
	}	
	void print()
	{
		for(int i=0;i<ntop;i++)
			std::cout << *(data+i) << std::endl;
	}
	int at(int index)
	{
		try
		{
			if(index < 0 || index > ntop)
			{
				throw "at: index out range";
			}
			return *(data+index);
		}
		catch(const char* st)
		{
			std::cout << st << std::endl;
			return 0;
		}
	}
	void insert(int index, int item)
	{
		try
		{
			if(ntop+1 > nsize) throw "insert: over index";
			for(int i=ntop;i>index;i--)
				*(data+i) = *(data+i-1);
			*(data+index) = item;
			ntop++;
			if(ntop == nsize) resize(2);
		}				
		catch(const char* st)
		{
			std::cout << st << std::endl;
		}
	}
	void remove(int index)
	{
		for(int i=index;i<ntop;i++)
			*(data+i) = *(data+i+1);
		ntop--;
	}
};

int main(void)
{
	/*bector *b = new bector(5, 2);
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
	std::cout<< "at(0): " << b->at(0) << std::endl;
	std::cout<< "at(1): " << b->at(1) << std::endl;
	b->insert(1, 3);
	b->print();
	b->remove(0);
	b->print();*/
	bector *b = new bector(5, 2);
	b->append(1);
	b->append(2);
	b->append(3);
	b->append(4);
	b->append(5);
	b->print();
	std::cout << "ntop: " <<  b->size() << std::endl;
	std::cout << "nsize: " << b->capacity() << std::endl;
	b->append(6);
	b->append(7);
	std::cout << "ntop: " <<  b->size() << std::endl;
	b->print();
	delete b;
	return 0;	
}

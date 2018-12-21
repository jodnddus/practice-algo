#include <iostream>

class bector {
private:
	size_t nsize;
	size_t ntop;
	int *data;
public:
	bector (size_t s) : data(new int[s]), nsize(s), ntop(0) {}
	
	size_t size() { return ntop; }
	size_t capacity() { return nsize; }	
	
	
};

int main(void)
{
	return 0;	
}

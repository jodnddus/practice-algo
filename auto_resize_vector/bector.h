class bector
{
private:
	size_t nsize;
	size_t ntop;
	int *data;
	void resize(int flag);
public:
	explicit bector(size_t s) : data(new int[s]), nsize(s), ntop(0);
	explicit bector(size_t s, int _data) : data(new int[s]), nsize(s), ntop(0);
	~bector();

	size_t size();
	size_t capacity();
	void pop();
	void append(int _data);
	void print();
	int at(int index);
	void insert(int index, int item);
	int remove(int index);	
}

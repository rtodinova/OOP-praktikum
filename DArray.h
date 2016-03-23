#ifndef _DARRAY_H
#define _DARRAY_H

class DArray{
private:
	int size;
	int* array;
	int capacity;

public:
	DArray();
	DArray(DArray const&);
	~DArray();
	void resize();
	void setValue(int, int);
	void pushBack(int);
	void popBack();
	void deleteAt(int);
	int getValue(int) const;
	int getSize() const;
	void print() const;
};

#endif

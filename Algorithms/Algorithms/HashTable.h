#pragma once
#include <iostream>

////////////////////////////////////////////////////////////////////////

class DataItem
{
	
public:
	int m_key;
	int m_dataItem;
	DataItem(unsigned key, unsigned dataItem);
};

///////////////////////////////////////////////////////////////////////

class HashTable
{
private:
	int m_key;
	unsigned m_size;
	DataItem** m_dataItemPtr;
	unsigned m_numberOfElements;

public:
	~HashTable();
	void remove(unsigned key);
	HashTable(unsigned size);
	void insert(DataItem* data);
	const DataItem* search(unsigned key);
	unsigned hashFunction(unsigned key);

};

///////////////////////////////////////////////////////////////////////


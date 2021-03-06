#pragma once
#include <iostream>

////////////////////////////////////////////////////////////////////////

class DataItem
{
	
private:
	int m_key;
	int m_dataItem;

	//////////////////////////////////////////////////////////

public:
	int getKey() const;
	int getdataItem() const;
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

	/////////////////////////////////////////////////

public:
	~HashTable();
	void remove(unsigned key);
	HashTable(unsigned size);
	void insert(DataItem* data);
	unsigned hashFunction(unsigned key);
	const DataItem* search(unsigned key);
};

///////////////////////////////////////////////////////////////////////


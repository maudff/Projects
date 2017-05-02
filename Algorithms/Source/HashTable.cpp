#include "HashTable.h"

/////////////////////////////////////////////////////////////////////////////////

void HashTable::remove(unsigned key)
{
	unsigned hashIndex = hashFunction(key);

	if (m_numberOfElements == 0)
	{
		std::cout << "Hash Table is empty" << std::endl;
	}

	while (m_dataItemPtr[hashIndex] != NULL)
	{
		const DataItem* ptr = m_dataItemPtr[hashIndex];
		if (ptr->m_key == key)
		{
			delete ptr;
			return;
		}

		++hashIndex;
		hashIndex %= m_size;
	}

	--m_numberOfElements;
}

/////////////////////////////////////////////////////////////////////////////////

HashTable::HashTable(unsigned size) : m_key( 0 ) , m_size( size) , m_dataItemPtr( new DataItem*[size] ) , m_numberOfElements( 0 )
{
	DataItem* ptr = new DataItem(-1, 0);

	for (unsigned i = 0; i < size; i++)
	{
		m_dataItemPtr[i] = NULL;
	}
}

/////////////////////////////////////////////////////////////////////////////////

void HashTable::insert(DataItem* data)
{
	if (m_numberOfElements == m_size)
	{
		std::cout << "Hash Table is full" << std::endl;
		return;
	}

	unsigned hashIndex = hashFunction(data->m_key);

	DataItem* ptr = m_dataItemPtr[hashIndex];


	while ( m_dataItemPtr[hashIndex] != NULL )
	{
		++hashIndex;
		hashIndex %= m_size;
	}

	m_dataItemPtr[hashIndex] = data;
	++m_numberOfElements;

}

/////////////////////////////////////////////////////////////////////////////////

HashTable::~HashTable()
{
	delete m_dataItemPtr;
}

/////////////////////////////////////////////////////////////////////////////////

const DataItem* HashTable::search(unsigned key)
{
	unsigned hashIndex = hashFunction(key);

	while (m_dataItemPtr[hashIndex] != NULL)
	{
		const DataItem* ptr = m_dataItemPtr[hashIndex];
		if (ptr->m_key == key)
		{
			return ptr;
		}
		else
		{
			++hashIndex;
			hashIndex %= m_size;
		}
	}

	return NULL;
}

/////////////////////////////////////////////////////////////////////////////////

unsigned HashTable::hashFunction(unsigned key)
{
	return key % m_size;
}

/////////////////////////////////////////////////////////////////////////////////

DataItem::DataItem(unsigned key, unsigned dataItem) : m_key( key ) , m_dataItem( dataItem )
{

}

/////////////////////////////////////////////////////////////////////////////////
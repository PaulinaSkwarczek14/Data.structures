#include "Queue.h"

Queue::Queue() 
{
	data = std::make_unique<std::vector<int>>();
}
void Queue::addElement(int element)
{
	data->push_back(element);
}
int Queue::takeElement()
{
	int erasedData = data->front();
	data->erase(data->begin());
	return erasedData;
}
int Queue::peekElement()
{
	return *data->begin();
}
bool Queue::isEmpty()
{
	return data->empty();
}
int Queue::getSize()
{
	return data->size();
}
void Queue::Print(std::ostringstream& OD)
{
	OD<< " Queue: ";
	for (const int& element : *data)
	{
		OD<< element << " " << "\n";
	}
}
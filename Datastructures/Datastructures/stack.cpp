#include "stack.h"

Stack::Stack()
{
	data = std::make_shared<std::vector<int>>();
}
void Stack::addElement(int element)
{
	data->push_back(element);
}
int Stack::peekElement()
{
	return data -> back();
}
bool Stack::isEmpty()
{
	return data -> empty();
}
int Stack::getSize()
{
	return data->size();
}
int Stack::takeElement()
{
	int erasedData=data->back();
	data->pop_back();
	return erasedData;
}
void Stack::Print(std::ostringstream &OS)
{
	OS << " Stack: ";
	for (const int& element : *data)
	{
		OS << element << "	";
	}
	OS << std::endl;

}
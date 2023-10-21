#pragma once
#include <vector>
#include <memory>
#include <sstream>

class Stack
{
public:
	Stack();
	void addElement(int element);
	int takeElement();
	int peekElement();
	bool isEmpty();
	int getSize();
	void Print(std::ostringstream &OS);

private:
	int size;
	std::shared_ptr <std::vector<int>> data;
	
};

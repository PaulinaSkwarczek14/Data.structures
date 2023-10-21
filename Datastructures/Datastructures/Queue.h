#pragma once
#include <memory>
#include <vector>
#include <sstream>

class Queue
{
public:
	Queue();
	void addElement(int element);
	int takeElement();
	int peekElement();
	bool isEmpty();
	int getSize();
	void Print(std::ostringstream& OD);
private:
	int size;
	std::unique_ptr <std::vector<int>> data;
};


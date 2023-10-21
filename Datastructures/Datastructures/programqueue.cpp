#include <iostream>
#include <sstream>
#include "Queue.h"

int main()
{
	Queue* gimmeQueue;
	gimmeQueue = new Queue();
	gimmeQueue->addElement(4);
	gimmeQueue->addElement(3);
	gimmeQueue->addElement(5);
	std::ostringstream OD;
	gimmeQueue->Print(OD);
	std::cout << OD.str();
	gimmeQueue->addElement(6);
	gimmeQueue->addElement(9);
	gimmeQueue->addElement(3);
	gimmeQueue->addElement(2);
	gimmeQueue->peekElement();
	gimmeQueue->addElement(0);
	gimmeQueue->Print(OD);
	std::cout << OD.str();
	gimmeQueue->getSize();
	std::cout << '\n';
	gimmeQueue->isEmpty();
	std::cout << '\n';
	gimmeQueue->takeElement();
	std::cout << '\n';
	gimmeQueue->peekElement();


}
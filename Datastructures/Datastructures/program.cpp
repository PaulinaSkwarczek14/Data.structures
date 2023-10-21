#include <iostream>
#include <sstream>
#include "stack.h"

int main()
{
	Stack* gimmeVector;
	gimmeVector = new Stack();
	gimmeVector->addElement(5);
	std::ostringstream OS;
	gimmeVector->Print(OS);
	std::cout << OS.str();
	gimmeVector->addElement(3);
	gimmeVector->addElement(2);
	gimmeVector->addElement(1);
	gimmeVector->addElement(0);
	gimmeVector->addElement(9);
	std::cout << gimmeVector->isEmpty();
	std::cout<<std::endl;
	std::cout << gimmeVector->getSize();
	std::cout << std::endl;
	std::cout << gimmeVector->peekElement();
	std::cout << std::endl;
	gimmeVector->takeElement();
	gimmeVector->Print(OS);
	std::cout << OS.str();



}
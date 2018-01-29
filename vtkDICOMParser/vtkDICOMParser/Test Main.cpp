// vtkDICOMParser.cpp: 定义控制台应用程序的入口点。
//
//#include "ShiftChar.h"
#include "ShiftString.h"
#include <stdlib.h>
#include <iostream>

int main()
{
	ShiftString* str = new ShiftString("ABCZzz!!576", 7);
	str->Update();

	std::cout << str << std::endl;

	str->SetStepLength(-7);

	str->Update();

	std::cout << str << std::endl;

	system("pause");
    return 0;
}


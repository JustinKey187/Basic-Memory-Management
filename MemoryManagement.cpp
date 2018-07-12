// MemoryManagement.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Person.h"
using std::string;


int _tmain(int argc, _TCHAR* argv[])
{
	Person Justin("Justin", "Key", 345);
	Justin.SetResource("Justin Resource");
	Justin.SetResource("Justin Second Resource");
	Person Justin2 = Justin;
	Justin = Justin2;
	string s1 = Justin.GetResourceName();
	return 0;
}


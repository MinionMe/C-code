#include <iostream>
using namespace std;

#include "CP_DebugLogActiveTest.h"

int main(int argc, char* args[ ])
{
	CP_DebugLogActive a("testDebugLogActive.txt");
	gb_testDebugLogActive(a);
	a.m_active = false;
	a << "No active\n";
	a.m_active = true;
	a << "Active\n";
	return 0;
} // mainº¯Êý½áÊø

#include "CP_DebugLogActiveTest.h"
#include "CP_Chain.h"

void gb_testDebugLogActive(CP_DebugLogActive & a )
{
	CP_Chain p;
	a.mb_clear( );
	a << "test\n";
	gb_createNodeFromFile(p, "��������.txt",a);
} // gb_testDebugLogActive��������
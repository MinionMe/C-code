#ifndef CP_SET_H
#define CP_SET_H

class CP_NUMCompare // Less
{
public:
	bool operator( )(const int& a, const int& b) const
	{ return (a < b); }
}; 

#endif
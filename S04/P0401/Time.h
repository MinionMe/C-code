#ifndef TIME_H
#define TIME_H
#include <ctime>
class Time
{
public:
	Time();
	~Time(){};
	void mb_getStart( );
	void mb_getEnd( );
	void mb_reportInMicrosecond( );
	void mb_setScale(double s) {m_scale=s;}
private:
	clock_t TimeStart,TimeEnd;
	double m_scale;
};
#endif // !Time_H

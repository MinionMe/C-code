#ifndef Date_H
#define Date_H
class Date
{
public:
	Date();
	Date(Date &p);
	~Date();
	friend int leap(int year);
	friend void GetNowDate(int N,Date &d1,Date &d2);
	friend void OutPut(Date d,int N);
private:
	int year,month,day;
};

#endif // !Date_H

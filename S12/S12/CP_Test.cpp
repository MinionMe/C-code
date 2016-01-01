#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <fstream>
#include <set>
#include "CP_Set.h"

int GetFile(vector<int> &v)
{
	int i,b[1000],j;
	char a;
	fstream outfile("Data.txt",ios::in|ios::out);
	if (!outfile)
	{
		cout << "��д���ļ�ʧ��" <<endl;
		return -1;
	}
	for (i = 0;i < 1000;i++)
	{
		b[i] = 0;
	}
	for (i = 0;!outfile.eof();i++)
	{
		a = outfile.get();
		if (a <= '9' && a >= '0')
		{
			b[i] = b[i] * 10 + a - '0';
			i--;
		}
	}
	for (j = 0;j < i;j++)
	{
		v.push_back(b[j]);
	}
	return 0;
}

template<class T, class K>
void gt_showSet(const set<T, K>& s)
{
	cout << "Set Contents: " << s.size( );
	set<T, K>::iterator st;
	int i = 0;
	for (st=s.begin( );st!=s.end( );st++, i++)
		cout << ": [" << i << "]" << *st;
	cout << endl;
} // ����ģ��gt_showSet����

template<class T>
void gt_showVector(const vector<T>& v)
{
	int i;
	int n = v.size( );
	cout << "size=" << v.size( ) << ":";
	cout << "capacity=" << v.capacity( ) << endl;
	cout << "Contents: " << v.size( );
	for (i=0; i<n; i++)
	{
		cout << ": [" << i << "]" << v[i];
	}
	cout << endl;
} // ����ģ��gt_showVector����

void gb_test( )
{
	vector<int> v;
	GetFile(v);
	cout << "ʹ��sort��������������0\n" << "ʹ��set����������1" << endl;
	int i;
	cin >> i;
	while(i != 0 && i != 1)
	{
		cout << "����������" << endl;
		cin >> i;
	}
	if (i == 0)
	{
		cout << "ԭʼ���������: ";
		gt_showVector<int>(v);

		sort(v.begin( ), v.end( ));
		cout << "����֮�������: ";
		gt_showVector<int>(v);
	}
	if (i == 1)
	{
		set<int, CP_NUMCompare> s(v.begin( ), v.end( ));
		cout << "ԭʼ���������: ";
		gt_showVector<int>(v);
		cout << "����֮�������: ";
		gt_showSet(s);
	}
} 
int main(int argc, char* argv[])
{
	gb_test();
	return 0;
}
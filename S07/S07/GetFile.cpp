#include "GetFile.h"
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

int  GetFile()
{
	char a[100] = {'\0'},c,b[1000] = {'\0'};
	int i = 0,j = 0,n = 0,len = 0;
	cout << "请输入文件名" << endl;
	cin >> a;
	fstream outfile(a,ios::in|ios::out);
	ofstream mfile("result.txt");
	ofstream infile("log.txt");
	if (!outfile)
	{
		cout << "打开写入文件失败" <<endl;
		return -1;
	}
	for (i = 0;!outfile.eof();i++)
	{
		b[i] = outfile.get();
		if (b[i] == ';')		
		{
			c = outfile.get();
			if (c != '\n' && c != ';')
			{
				len = strlen(b);
				n++;
				mfile.write(b,len);
				mfile << '\n';
				for (j = 0;j < len;j++)
				{
					b[j] = '\0';
				}
				i = 0;
				b[0] = c;
			}
			else if (c == '\n')
			{
				b[++i] = c;
			}
			else if (c == ';')
			{
				len = strlen(b);
				n++;
				mfile.write(b,len);
				mfile << '\n';
				mfile << c << '\n';
				for (j = 0;j < len;j++)
				{
					b[j] = '\0';
				}
				i = -1;
			}
		}

	}
	len = strlen(b);
	mfile.write(b,len);
	infile << "共有" << n << "处分号后无换行符"<<endl;
	outfile.close();
	infile.close();
	mfile.close();
	return 0;
}
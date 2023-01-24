#include <string.h>
#include <winsock2.h>

#include <iostream>
#include <fstream>
#include <bitset>
#include <fstream>
#include <sstream>
#include <iomanip>

using namespace std;

size_t a=0;

class Database
{
	
};

void capture_data()
{
	
	string datum,y,z,b;
	ifstream x;
	streambuf *sb;
	char ch;
	string echo_date="echo %date% %time%>>date_time";	

	system(echo_date.c_str());

	x.open("date_time");

	while(getline(x,y))
	z.append(y);
	
	x.close();			

	stringstream ss(z);
	sb=ss.rdbuf();

	do
	{
		ch=sb->sgetc();
		if(isspace(ch)||isalpha(ch)||ch=='/'||ch==':'||ch=='.')continue;
		b.append(1,ch);
		
	}while(sb->snextc()!=EOF);
	cout<<b<<"\n";	
	system("del date_time");
	
}

int main(int argc,char **argv)
{
	
	do
	{
		++a;
		//Sleep(rand());
		capture_data();
		

	}while(a!=4000000000);
	
	return 0;
}


#include<fstream>
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	fstream file;
	string str;
	int size;
	int count = 0;
	char ch = 's';
	file.open("file.txt",ios::in);
	if(!file)
	{
		cout << "The file cannot open" << endl; 
	}
	else
	{
				
		while(file >> str)
		{
			size = str.length();
			if(str[size-1]==ch)
			{
				count++;
			}
			//cout << str << endl;			
			
		}
	}
	cout << "Total word is "<<count<<endl;
	return 0;
}


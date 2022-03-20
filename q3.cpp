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
	char ch = 'e';
	file.open("file.txt",ios::in);
	if(!file)
	{
		cout << "The file cannot open" << endl; 
	}
	else
	{
				
		while(file >> str)
		{
			//size = strlen(str)
			if(str[0]==ch)
			{
				count++;
				continue;
			}
			//cout << str << endl;			
			
		}
	}
	cout << "Total word is "<<count<<endl;
	return 0;
}


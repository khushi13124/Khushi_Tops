#include<iostream>
#include<fstream>
using namespace std;
main()
{
	//Create and write a file
//	ofstream fout;
//	fout.open("cfile1.txt");
//	fout<<"Welcome to file handling";

//  reading a file
	ifstream fin;
	fin.open("cfile1.txt");
	char ch;
	while(!fin.eof())
	{
		ch=fin.get();
		cout<<ch;
	}
}

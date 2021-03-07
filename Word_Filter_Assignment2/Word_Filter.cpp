#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct SBannedText
{
	string name1;
	string name2;
	string name3;
	string name4;
	string name5;
	string name6;
	string name7;
	string name8;
};

void WriteToFile(SBannedText bannedText)
{
	ofstream outfile("banned.txt");
	if (!outfile)
	{
		cout << "ERROR: ";
		cout << "Can't open output file\n";
	}
	outfile << bannedText.name1 << endl;
	outfile << bannedText.name2 << endl;
	outfile << bannedText.name3 << endl;
	outfile << bannedText.name4 << endl;
	outfile << bannedText.name5 << endl;
	outfile << bannedText.name6 << endl;
	outfile << bannedText.name7 << endl;
	outfile << bannedText.name8 << endl;
	outfile.close();

}

void ReadFromFile(SBannedText& bannedText)
{
	ifstream infile("banned.txt");
	if (!infile)
	{
		cout << "ERROR: ";
		cout << "Can't open input file\n";
	}
	infile >> bannedText.name1;
	infile >> bannedText.name2;
	infile >> bannedText.name3;
	infile >> bannedText.name4;
	infile >> bannedText.name5;
	infile >> bannedText.name6;
	infile >> bannedText.name7;
	infile >> bannedText.name8;
	infile.close();
}

const int SIZE = 8;

void DisplayBannedText(SBannedText bannedText)
{
	/*for (int i = 0; i < SIZE; ++i)
	{
		cout << bannedText[i].name << endl;
	}
	cout << endl;*/
	cout << bannedText.name1 << endl;
	cout << bannedText.name2 << endl;
	cout << bannedText.name3 << endl;
	cout << bannedText.name4 << endl;
	cout << bannedText.name5 << endl;
	cout << bannedText.name6 << endl;
	cout << bannedText.name7 << endl;
	cout << bannedText.name8 << endl;
}



int main()
{
	

	/*SBannedText bannedText[SIZE] = {
		{ "cat" },
		{ "dog" },
		{ "aim" },
		{ "add"},
		{ "ear" },
		{ "back" },
		{ "punk" },
		{ "able" },
	};*/
	
	SBannedText textType;
	
	textType.name1 = "cat";
	textType.name2 = "dog";
	textType.name3 = "aim";
	textType.name4 = "add";
	textType.name5 = "ear";
	textType.name6 = "back";
	textType.name7 = "punk";
	textType.name8 = "able";

	//cout << endl << "The words are:" << endl;
	//DisplayBannedText(bannedText);

	WriteToFile(textType);
	// let's check that read works by assigning empty strings and 0 to the "person" variable
	textType.name1 = "";
	textType.name2 = "";
	textType.name3 = "";
	textType.name4 = "";
	textType.name5 = "";
	textType.name6 = "";
	textType.name7 = "";
	textType.name8 = "";
	ReadFromFile(textType);
	DisplayBannedText(textType);
	
	
	//ifstream infile;
	//infile.open("banned.txt");
	//if (!infile)
	//{
	//	cout << "ERROR: ";
	//	cout << "Can't open input file\n";
	//}

	//// read a single character
	//char ch;
	//ch = infile.get();
	//cout << ch;
	//cout << endl;
	//infile.close();

	//cout << "---------------" << endl;

	////read a single word
	//infile.open("filename.txt");
	//string str;
	//infile >> str;
	//cout << str;
	//cout << endl;
	//infile.close();

	//cout << "---------------" << endl;

	////three words per line, so do need to do 3 reads
	//infile.open("filename.txt");
	//string word1;
	//string word2;
	//string word3;
	//infile >> word1;
	//infile >> word2;
	//infile >> word3;
	//cout << word1 << " ";
	//cout << word2 << " ";
	//cout << word3 << " ";
	//cout << endl;
	//infile.close();

	//cout << "---------------" << endl;

	//// reading 3 words per line, continue reading until end of file
	//infile.open("filename.txt");
	//infile >> word1;
	//infile >> word2;
	//infile >> word3;
	//while (!infile.eof())
	//{
	//	cout << word1 << " ";
	//	cout << word2 << " ";
	//	cout << word3 << " ";
	//	cout << endl;

	//	infile >> word1;
	//	infile >> word2;
	//	infile >> word3;
	//}
	//infile.close();

	//cout << "---------------" << endl;

	//// read a whole line, including the white space
	//infile.open("filename.txt");
	//getline(infile, str);
	//cout << str;
	//cout << endl;
	//infile.close();

	//cout << "---------------" << endl;

	//// read a whole line, including the white space, until the end of the file
	//infile.open("filename.txt");
	//while (!infile.eof())
	//{
	//	getline(infile, str);
	//	cout << str;
	//	cout << endl;
	//}
	//infile.close();

	//cout << "---------------" << endl;

	system("pause");
	//return 0;
}
#include "FileExchange.h"
 
using namespace std;
void FileExchange::setFileName( char name[])
{

	this->fileName = name;
}

char* FileExchange::getFileName()
{

	return this->fileName;
}

void FileExchange::readFile()
{
	streampos begin, end;
	std::ifstream istr;
	//::cout << fileName;
	istr.open(fileName, std::ios::binary);
	if (!istr.is_open())
	{
		std::cout << "No file";
		return;
	}
	//istr >> data;
	int n = 1000;// istr.tellg(); // file-size
	char* data = new char[n];
 
	istr.read(data, n);
	istr.close();
	begin = istr.tellg();
	istr.seekg(0, ios::end);
	end = istr.tellg();
	istr.close();
	cout << "size is: " << end << begin << " bytes.\n";
	// parse check-file-working, parse data
	for(int i =0; i < n; i++)
		 std::cout << data[i];
	 
	delete[] data;
}


void FileExchange::writeFile(char data[])
{
	 
	std::ofstream ostr;
	ostr.open(fileName);
	ostr << data;
	ostr.close();

}

void FileExchange::parseFileBuffer()
{

}

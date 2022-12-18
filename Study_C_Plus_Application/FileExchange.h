#pragma once
#include <fstream>
#include <iostream> 

class FileExchange
{
private:
	char* fileName;

public:
	//FileExchange();

	void setFileName(char n[]);
	char* getFileName();
	void readFile();
	void writeFile(char data[]);

	void parseFileBuffer();

	// Json Parse <-- use ExLib json parser
	
};


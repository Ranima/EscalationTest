#include <fstream>
#include <iostream>
#include <string>

struct Things
{
	unsigned short uID;
	unsigned short typeID;
	float x, y;
	float nx, ny;
	char pad[12];
};

void main()
{
	std::fstream file;
	Things monster;

	
}

//IntroToCPP/Topics/TextFiles/TextFileIO
//IntroToCPP/Topics/BinaryFiles/FileIO
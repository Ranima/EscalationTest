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
	std::fstream fin("EscalationProgrammerTest.bin", std::ios::in | std::ios::binary);
	if (fin.good()) {
		while (!fin.eof() && fin.peek() != EOF) {
			fin.read((char*)&monster, sizeof(Things));
			std::cout << monster.uID << "\n" << monster.typeID << "\n" <<
				monster.x << " " << monster.y << "\n" << monster.nx << " " << monster.ny;
		}
		fin.close();
	}
	system("pause");
}

//IntroToCPP/Topics/TextFiles/TextFileIO
//IntroToCPP/Topics/BinaryFiles/FileIO
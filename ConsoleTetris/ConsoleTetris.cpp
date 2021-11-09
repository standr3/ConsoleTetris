#include <iostream>

using namespace std;

wstring tetromino[7];


int main()
{
    
    
	tetromino[0].append(L"..X...X...X...X."); 
	tetromino[1].append(L"..X..XX...X.....");
	tetromino[2].append(L".....XX..XX.....");
	tetromino[3].append(L"..X..XX..X......");
	tetromino[4].append(L".X...XX...X.....");
	tetromino[5].append(L".X...X...XX.....");
	tetromino[6].append(L"..X...X..XX.....");

	return 0;
}

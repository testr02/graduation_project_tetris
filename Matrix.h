#pragma once
class Matrix
{
public:
	Matrix(int sizeX, int sizeY);
	~Matrix();

	int Get(int x, int y);
	void Set(int x, int y, int value);
private:
	int xSize;
	int ySize;

	int** matrix;
};


#pragma once
#include "Vector2.h"
#include <vector>

template <class T>
class Matrix2
{
public:

	float Matr[2][2];


	Vector2 xAxis;
	Vector2 yAxis;
	Vector2 zAxis;

	vector<vector<double>> defineMatr(int dimM, int dimN);



};

#pragma once
#include "Vector3.h"
#include <vector>

template <class T>
class Matrix3
{
public:

	Matrix3();

	float Matr[2][2];


	Vector3 xAxis();
	Vector3 yAxis();
	Vector3 zAxis();



};


#pragma once
#include "Vector4.h"


template <class T>
class Matrix4
{
public:

	Matrix4();

	float Matr[4][4];

	Vector4 xAxis;
	Vector4 yAxis;
	Vector4 zAxis;


};

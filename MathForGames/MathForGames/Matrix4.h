#pragma once
#include "Vector4.h"
#include <vector>

template <class T>
class Matrix4
{
private:
	Vector4 data[3];
	Matrix4 data[
		    1, 2, 3,
			4, 5, 6,
			7, 8, 9

	];



public:

	Matrix4();
	~Matrix4();

	Matrix4 operator * (Matrix4 rhs);
	Matrix4 operator + (Matrix4 rhs);
	Matrix4 operator - (Matrix4 rhs);

	void rotX(float raidian);
	void roty(float raidian);
	void rotz(float raidian);


};

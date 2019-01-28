#pragma once
#include "Vector3.h"
#include <vector>

template <class T>
class Matrix3
{
private:
	Vector3 data[3];
	Matrix3 data[
		    1, 2, 3,
			4, 5, 6,
			7, 8, 9

	];

public:

	Matrix3();
	~Matrix3();

	Matrix3 operator * (Matrix3 rhs);
	Matrix3 operator + (Matrix3 rhs);
	Matrix3 operator - (Matrix3 rhs);
	

	void rotX(float raidian);
	void roty(float raidian);
	void rotz(float raidian);


};

 
#pragma once
#include <cmath>
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

class Matrix3
{
private:

	float MatDat[3][3];
	float TempDat[3][3];

public:
	Matrix3();

	Matrix3(Vector3, Vector3, Vector3);

	Matrix3(
		float, float, float,
		float, float, float,
		float, float, float
	);

	

	
	Matrix3 operator * (Matrix3);
	Vector3 operator * (Vector3);

	operator float*();

	Vector3& operator[] (int);

	void setRotateX(float);
	void setRotateY(float);
	void setRotateZ(float);


};
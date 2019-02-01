#pragma once
#include <cmath>
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

class Matrix4
{
private:

	float MatDat[4][4];
	float TempDat[4][4];

public:
	Matrix4();

	Matrix4(Vector4, Vector4, Vector4, Vector4);

	Matrix4(
		float, float, float, float,
		float, float, float, float,
		float, float, float, float,
		float, float, float, float
	);

	Matrix4 operator * (Matrix4);


	void rotationX(float);
	void rotationY(float);
	void rotationZ(float);
	void rotationW(float);


};
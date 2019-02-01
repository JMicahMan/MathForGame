#pragma once
#include <math.h>
#include <cmath>
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

class Matrix3
{
private:
	float apos;
	float bpos;
	float cpos;
	float dpos;
	float epos;
	float fpos;
	float gpos;
	float hpos;
	float ipos;


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

	float geta();
	float getb();
	float getc();
	float getd();
	float gete();
	float getf();
	float getg();
	float geth();
	float geti();

	
	Matrix3 operator * (Matrix3);

	void rotationX(float);
	void rotationY(float);
	void rotationZ(float);


};
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
	

public:

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

	
	Matrix3 operator * (float& rhs);

	void rotationX(float);
	void rotationY(float);
	void rotationZ(float);


};
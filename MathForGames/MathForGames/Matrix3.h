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

	Matrix3 operator + (float& rhs);
	Matrix3 operator - (float& rhs);
	Matrix3 operator * (float& rhs);

	bool operator == (Matrix3& rhs);
	bool operator != (Matrix3& rhs);


};
#pragma once
#include <math.h>
#include <cmath>
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

class Matrix4
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
	float jpos;
	float kpos;
	float lpos;

	float mpos;
	float npos;
	float opos;
	float ppos;

public:

	Matrix4(
		float, float, float, float,
		float, float, float, float,
		float, float, float, float,
		float, float, float, float
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
	float getj();
	float getk();
	float getl();
	float getm();
	float getn();
	float geto();
	float getp();

	Matrix4 operator + (float& rhs);
	Matrix4 operator - (float& rhs);
	Matrix4 operator * (float& rhs);

	bool operator == (Matrix4& rhs);
	bool operator != (Matrix4& rhs);


};
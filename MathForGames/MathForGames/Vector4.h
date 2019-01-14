#pragma once
#include <math.h>
#include "Vector4.h"


template <class T>
class Vector4
{

private:
	float xpos1;
	float ypos1;
	float zpos1;
	float xpos2;
	float ypos2;
	float zpos2;
	float xpos3;
	float ypos3;
	float zpos3;

public:
	Vector4();
	~Vector4();
	float getx2;
	float gety2;
	Vector4 operator + (Vector4& rhs);
	Vector4 operator - (Vector4& rhs);
	Vector4 operator * (float& rhs);
	bool operator == (Vector4& rhs);
	bool operator != (Vector4& rhs);
	float magnitude();
	Vector4 Normalize();
	float Distance(Vector4 other);
};


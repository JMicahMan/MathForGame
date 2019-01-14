#pragma once
#include <math.h>
#include "Vector3.h"


template <class T>
class Vector3
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
	Vector3();
	~Vector3();
	float getx2;
	float gety2;
	Vector3 operator + (Vector3& rhs);
	Vector3 operator - (Vector3& rhs);
	Vector3 operator * (float& rhs);
	bool operator == (Vector3& rhs);
	bool operator != (Vector3& rhs);
	float magnitude();
	Vector3 Normalize();
	float Distance(Vector3 other);
};


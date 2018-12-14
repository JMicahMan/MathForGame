#pragma once
#include <math.h>
#include "Vector3.h"


template <class T>
class Vector3
{

private:
	float xpos2;
	float ypos2;

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


#pragma once
#include <math.h>
#include "Vector2.h"


template <class T>
class Vector2
{

private:
	float xpos;
	float ypos;

public:
	Vector2();
	~Vector2();
	float getx;
	float gety; 
	Vector2 operator + (Vector2& rhs);
	Vector2 operator - (Vector2& rhs);
	Vector2 operator * (float& rhs);
	bool operator == (Vector2& rhs);
	bool operator != (Vector2& rhs);
	float magnitude();
	Vector2 Normalize();
	float Distance(Vector2 other);
};


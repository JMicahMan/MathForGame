#pragma once
#include <cmath>



class Vector4
{

private:
	float xpos1;
	float ypos1;
	float zpos1;
	float wpos1;

public:
	Vector4();
	Vector4(float, float, float, float);

	float getx();
	float gety();
	float getz();
	float getw();
	Vector4 operator + (float& rhs);
	Vector4 operator - (float& rhs);
	Vector4 operator * (float& rhs);
	bool operator == (Vector4& rhs);
	bool operator != (Vector4& rhs);
	float magnitude();
	float normalise();
	float dot(Vector4& rhs);
	float cross(Vector4);
	float operator[] (int index);
	operator float* ();






};


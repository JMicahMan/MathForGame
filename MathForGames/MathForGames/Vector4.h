#pragma once
#include <math.h>



template <class T>
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
	Vector4 operator + (Vector4& rhs);
	Vector4 operator - (Vector4& rhs);
	Vector4 operator * (float& rhs);
	bool operator == (Vector4& rhs);
	bool operator != (Vector4& rhs);
	float magnitude();
	Vector4 normalise();
	float dot(Vector4& rhs);
	//Vector4.cross(Vector3);
	//float operator[] (index);






};


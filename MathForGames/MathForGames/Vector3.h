#pragma once
#include <cmath>



class Vector3
{

private:
	float xpos1;
	float ypos1;
	float zpos1;

public:
	Vector3();
	Vector3(float, float, float);

	float getx();
	float gety();
	float getz();
	Vector3 operator + (float& rhs);
	Vector3 operator - (float& rhs);
	Vector3 operator * (float& rhs);
	bool operator == (Vector3& rhs);
	bool operator != (Vector3& rhs);
	float magnitude();
	float normalise();
	float dot(Vector3& rhs);
	Vector3 cross(Vector3);
	float operator[] (int index);
	operator float* ();





};


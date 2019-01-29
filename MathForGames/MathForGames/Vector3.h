#pragma once
#include <math.h>



template <class T>
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
	Vector3 operator + (Vector3& rhs);
	Vector3 operator - (Vector3& rhs);
	Vector3 operator * (float& rhs);
	bool operator == (Vector3& rhs);
	bool operator != (Vector3& rhs);
	float magnitude();
	Vector3 normalise();
	float dot(Vector3& rhs);
	//Vector3.cross(Vector3);
	//float operator[] (index);






};


#pragma once
#include <cmath>



class Vector2
{

private:
	float xpos1;
	float ypos1;

public:
	Vector2();
	Vector2(float, float);

	float getx();
	float gety();
	Vector2 operator + (float& rhs);
	Vector2 operator - (float& rhs);
	Vector2 operator * (float& rhs);
	bool operator == (Vector2& rhs);
	bool operator != (Vector2& rhs);
	float magnitude();
	float normalise();
	float dot(Vector2& rhs);
	float operator[] (int index);
	operator float * ();

	


	

};


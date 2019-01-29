#pragma once
#include <math.h>



template <class T>
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
	Vector2 operator + (Vector2& rhs);
	Vector2 operator - (Vector2& rhs);
	Vector2 operator * (float& rhs);
	bool operator == (Vector2& rhs);
	bool operator != (Vector2& rhs);
	float magnitude();
	Vector2 normalise();
	float dot(Vector2& rhs);
	//Vector2.cross(Vector2);
	//float operator[] (index);

	


	

};


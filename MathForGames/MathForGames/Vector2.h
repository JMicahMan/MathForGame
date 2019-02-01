#pragma once
#include <cmath>



class Vector2
{

private:
	float xpos1;
	float ypos1;

public:
	Vector2(float, float);

	float getx();
	float gety();
	Vector2 operator + (float& rhs);
    //Vector2 operator + (Vector2& rhs);
	Vector2 operator - (float& rhs);
	//Vector2 operator - (Vector2& rhs);
	Vector2 operator * (float& rhs);
	bool operator == (Vector2& rhs);
	bool operator != (Vector2& rhs);
	float magnitude();
	float normalise();
	//Vector2 normalise();
	float dot(Vector2& rhs);
	float cross(Vector2);
	float operator[] (int index);

	


	

};


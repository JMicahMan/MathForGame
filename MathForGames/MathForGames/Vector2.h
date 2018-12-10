#pragma once
#include <math.h>

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
	Vector2 Normalize(); //asdqawdqwzxczC 
};


Vector2 Vector2::operator+(Vector2 & rhs)
{
	
	return Vector2();
}

inline Vector2 Vector2::operator-(Vector2 & rhs)
{
	return Vector2();
}

inline Vector2 Vector2::operator*(float & rhs)
{
	return Vector2();
}

inline bool Vector2::operator==(Vector2 & rhs)
{
	return false;
}

inline bool Vector2::operator!=(Vector2 & rhs)
{
	return false;
}

inline float Vector2::magnitude()
{
	float cpos;
	cpos = sqrt((xpos*xpos) + (ypos * ypos));
	return cpos;
}

inline Vector2 Vector2::Normalize()
{
	float normiex;
	float normiey;
	normiex = (xpos / );

	return Vector2();
}

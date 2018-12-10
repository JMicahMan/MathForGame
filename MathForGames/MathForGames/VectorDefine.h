#pragma once
#include <math.h>
#include "Vector3.h"
#include "Vector2.h"



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
	normiex = (xpos / magnitude());
	normiey = (ypos / magnitude());

	return Vector2();
}

inline float Vector2::Distance(Vector2 other)
{
	return 0.0f;
}

Vector3 Vector3::operator+(Vector3 & rhs)
{
	
	return Vector3();
}

inline Vector3 Vector3::operator-(Vector3 & rhs)
{
	return Vector3();
}

inline Vector3 Vector3::operator*(float & rhs)
{
	return Vector3();
}

inline bool Vector3::operator==(Vector3 & rhs)
{
	return false;
}

inline bool Vector3::operator!=(Vector3 & rhs)
{
	return false;
}

inline float Vector3::magnitude()
{
	float cpos2;
	cpos2 = sqrt((xpos2*xpos2) + (ypos2 * ypos2));
	return cpos2;
}

inline Vector3 Vector3::Normalize()
{
	float normiex2;
	float normiey2;
	normiex2 = (xpos2 / magnitude());
	normiey2 = (ypos2 / magnitude());

	return Vector3();
}

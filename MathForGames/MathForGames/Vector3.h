#pragma once

class Vector3
{

private:
	float xpos;
	float ypos;

public:
	Vector3();
	Vector3();
	float getx;
	float gety;
	Vector3 operator + (Vector3 rhs);
	Vector3 operator - (Vector3 rhs);
	Vector3 operator * (Vector3 rhs);
	bool operator == (Vector3 rhs);
	bool operator != (Vector3 rhs);
	float magnitude();
	Vector3 Normalize();

};

Vector3 Vector3::operator+(Vector3 rhs)
{
	return Vector3();
}

inline Vector3 Vector3::operator-(Vector3 rhs)
{
	return Vector3();
}

inline Vector3 Vector3::operator*(Vector3 rhs)
{
	return Vector3();
}

inline bool Vector3::operator==(Vector3 rhs)
{
	return false;
}

inline bool Vector3::operator!=(Vector3 rhs)
{
	return false;
}

inline float Vector3::magnitude()
{
	return 0.0f;
}

inline Vector3 Vector3::Normalize()
{
	return Vector3();
}


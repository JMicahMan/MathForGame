#include "Vector4.h"
#include <math.h>


template<class T>
Vector4<T>::Vector4()
{
	xpos1 = 0.0f;
	ypos1 = 0.0f;
}

template<class T>
Vector4<T>::Vector4(float x, float y)
{
	xpos1 = x;
	ypos1 = y;
}





template<class T>
float Vector4<T>::getx()
{
	return xpos1;
}

template<class T>
float Vector4<T>::gety()
{
	return ypos1;
}

template<class T>
Vector4 Vector4<T>::operator+(Vector4 & rhs)
{

	return Vector4((x + rhs), (y + rhs));
}

template<class T>
Vector4 Vector4<T>::operator-(Vector4 & rhs)
{
	return Vector4((x - rhs), (y - rhs));
}

template<class T>
Vector4 Vector4<T>::operator*(float & rhs)
{
	scale = rhs;
	return Vector4((x * scale), (y * scale));
}

template<class T>
bool Vector4<T>::operator==(Vector4 & rhs)
{
	if ((xpos1 == rhs.getx()) && (ypos1 == rhs.gety()))
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<class T>
bool Vector4<T>::operator!=(Vector4 & rhs)
{
	if ((xpos1 != rhs.getx()) && (ypos1 != rhs.gety()))
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<class T>
float Vector4<T>::magnitude()
{
	float mag = sqrt((xpos1 ^ 2) + (ypos1 ^ 2));
	return mag;
}

template<class T>
Vector4 Vector4<T>::normalise()
{
	Vector4 mag = sqrt((xpos1 ^ 2) + (ypos1 ^ 2));

	Vector4 norm = ((xpos1 / mag), (ypos1 / mag));

	return norm;
}

template<class T>
float Vector4<T>::dot(Vector4 & rhs)
{
	float dotprod = (xpos1 * rhs.getx) + (ypos1 * rhs.gety);
	return dotprod;
}

template<class T>
float Vector4<T>::operator[](index)
{
	if (index == 0)
	{
		return xpos1;
	}

	else if (index == 1)
	{
		return ypos1;
	}
}


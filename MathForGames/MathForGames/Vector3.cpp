#include "Vector3.h"
#include <math.h>


template<class T>
Vector3<T>::Vector3()
{
	xpos1 = 0.0f;
	ypos1 = 0.0f;
	zpos1 = 0.0f;
}


template<class T>
Vector3<T>::Vector3(float x, float y, float z)
{
	xpos1 = x;
	ypos1 = y;
	zpos1 = z;
}





template<class T>
float Vector3<T>::getx()
{
	return xpos1;
}

template<class T>
float Vector3<T>::gety()
{
	return ypos1;
}

template<class T>
float Vector3<T>::getz()
{
	return zpos1;
}


template<class T>
Vector3 Vector3<T>::operator+(Vector3 & rhs)
{

	return Vector3((x + rhs), (y + rhs), (z + rhs));
}

template<class T>
Vector3 Vector3<T>::operator-(Vector3 & rhs)
{
	return Vector3((x - rhs), (y - rhs), (z - rhs));
}

template<class T>
Vector3 Vector3<T>::operator*(float & rhs)
{
	scale = rhs;
	return Vector3((x * scale), (y * scale), (z * sclae));
}

template<class T>
bool Vector3<T>::operator==(Vector3 & rhs)
{
	if ((xpos1 == rhs.getx()) && (ypos1 == rhs.gety()) && (zpos1 == rhs.getz()))
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<class T>
bool Vector3<T>::operator!=(Vector3 & rhs)
{
	if ((xpos1 != rhs.getx()) && (ypos1 != rhs.gety()) && (zpos1 != rhs.getz()))
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<class T>
float Vector3<T>::magnitude()
{
	float mag = sqrt((xpos1 ^ 2) + (ypos1 ^ 2) + (zpos1 ^ 2));
	return mag;
}

template<class T>
Vector3 Vector3<T>::normalise()
{
	Vector3 mag = sqrt((xpos1 ^ 2) + (ypos1 ^ 2) + (zpos1 ^ 2));

	Vector3 norm = ((xpos1 / mag), (ypos1 / mag), (zpos1 / mag));

	return norm;
}

template<class T>
float Vector3<T>::dot(Vector3 & rhs)
{
	float dotprod = (xpos1 * rhs.getx) + (ypos1 * rhs.gety) + (zpos1 * rhs.getz);
	return dotprod;
}

//template<class T>
//float Vector3<T>::operator[](index)
//{
//	if (index == 0)
//	{
//		return xpos1;
//	}
//
//	else if (index == 1)
//	{
//		return ypos1;
//	}
//
//	else if (index == 2)
//	{
//		return zpos1;
//	}
//}


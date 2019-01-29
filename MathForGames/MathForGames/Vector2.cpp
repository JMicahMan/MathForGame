#include "Vector2.h"
#include <math.h>


template<class T>
Vector2<T>::Vector2()
{
	xpos1 = 0.0f;
	ypos1 = 0.0f;
}

//template<class T>
//Vector2<T>::Vector2(float, float)
//{
//}

template<class T>
Vector2<T>::Vector2(float x, float y)
{
	xpos1 = x;
	ypos1 = y;
}





template<class T>
float Vector2<T>::getx()
{
	return xpos1;
}

template<class T>
float Vector2<T>::gety()
{
	return ypos1;
}

template<class T>
Vector2 Vector2<T>::operator+(Vector2 & rhs)
{

	return Vector2((x + rhs),(y + rhs) );
}

template<class T>
Vector2 Vector2<T>::operator-(Vector2 & rhs)
{
	return Vector2((x - rhs),(y - rhs));
}

template<class T>
Vector2 Vector2<T>::operator*(float & rhs)
{
	scale = rhs;
	return Vector2((x * scale), (y * scale));
}

template<class T>
bool Vector2<T>::operator==(Vector2 & rhs)
{
	if ((xpos1 == rhs.getx())&&(ypos1 == rhs.gety()))
	{
		return true;
	}
	else
	{
		return false;
	}
}

template<class T>
bool Vector2<T>::operator!=(Vector2 & rhs)
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
float Vector2<T>::magnitude()
{
	float mag = sqrt((xpos1 ^ 2) + (ypos1 ^ 2));
	return mag;
}

template<class T>
Vector2 Vector2<T>::normalise()
{
	Vector2 mag = sqrt((xpos1 ^ 2) + (ypos1 ^ 2));

	Vector2 norm = ((xpos1/mag), (ypos1/mag));

	return norm;
}

template<class T>
float Vector2<T>::dot(Vector2 & rhs)
{
	float dotprod = (xpos1 * rhs.getx) + (ypos1 * rhs.gety);
	return dotprod;
}

template<class T>
float Vector2<T>::operator[](index)
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



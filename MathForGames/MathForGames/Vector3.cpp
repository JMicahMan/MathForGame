#include "Vector3.h"


template<class T>
Vector3<T>::Vector3()
{

}

template<class T>
Vector3<T>::~Vector3()
{
}

template<class T>
Vector3 Vector3<T>::operator+(Vector3 & rhs)
{
	rhs = (xpos1 + xpos1, ypos1 + ypos2);
	return Vector2();
}

template<class T>
Vector3 Vector3<T>::operator-(Vector3 & rhs)
{
	rhs = (xpos1 - xpos2, ypos1 - ypos2);
	return Vector2();
}

template<class T>
Vector3 Vector3<T>::operator*(float & rhs)
{
	rhs = (xpos1*xpos2) + (ypos1*ypos2);
	return Vector2();
}

template<class T>
bool Vector3<T>::operator==(Vector3 & rhs)
{
	if (xpos1 == xpos2 && ypos1 == ypos2)
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
	if (xpos1 != xpos1 || ypos1 != ypos2)
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
	zpos1 = sqrt((xpos1 * xpos1) + (ypos1 * ypos1));
	return zpos1;
}

template<class T>
Vector3 Vector3<T>::Normalize()
{

	zpos1 = sqrt((xpos1 * xpos1) + (ypos1 * ypos1));
	float normiex;
	float normiey;
	normiex = (xpos1 / zpos1);
	normiey = (ypos1 / zpos1);
	return Vector3();
}

template<class T>
float Vector3<T>::Distance(Vector3 other)
{
	if (xpos1 > ypos)
	{
		zpos1 = xpos1 - ypos1;
	}

	else if (xpos1 < ypos1)
	{
		zpos1 = ypos1 - xpos1;
	}

	else
	{
		zpos1 = 0.0f;
	}

	return zpos1;
}

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
	rhs = (xpos2 + ypos2);
	return Vector3();
}

template<class T>
Vector3 Vector3<T>::operator-(Vector3 & rhs)
{
	rhs = (xpos2 - ypos2);

	return Vector3();
}

template<class T>
Vector3 Vector3<T>::operator*(float & rhs)
{
	rhs = (xpos2 * ypos2);

	return Vector3();
}

template<class T>
bool Vector3<T>::operator==(Vector3 & rhs)
{
	if (xpos2 == ypos2)
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
	if (xpos2 != ypos2)
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
	float cpos2;
	cpos2 = sqrt((xpos2 * xpos2) + (ypos2 * ypos2));
	return cpos2;
}

template<class T>
Vector3 Vector3<T>::Normalize()
{

	float cpos2;
	cpos2 = sqrt((xpos2 * xpos2) + (ypos2 * ypos2));
	float normiex2;
	float normiey2;
	normiex = (xpos2 / cpos2);
	normiey = (ypos2 / cpos2);
	return Vector3();
}

template<class T>
float Vector3<T>::Distance(Vector3 other)
{
	float dpos2;
	if (xpos2 > ypos2)
	{
		dpos2 = xpos2 - ypos2;//fgre
	}

	else if (xpos2 < ypos2)
	{
		dpos2 = ypos2 - xpos2;
	}

	else
	{
		dpos2 = 0.0f;
	}

	return dpos2;
}

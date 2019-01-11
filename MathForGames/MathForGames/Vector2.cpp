#include "Vector2.h"


template<class T>
Vector2<T>::Vector2()
{

}

template<class T>
Vector2<T>::~Vector2()
{
}

template<class T>
Vector2 Vector2<T>::operator+(Vector2 & rhs)
{
	rhs = (xpos + ypos);
	return Vector2();
}

template<class T>
Vector2 Vector2<T>::operator-(Vector2 & rhs)
{
	rhs = (xpos - ypos);
	return Vector2();
}

template<class T>
Vector2 Vector2<T>::operator*(float & rhs)
{
	rhs = (xpos * ypos);
	return Vector2();
}

template<class T>
bool Vector2<T>::operator==(Vector2 & rhs)
{
	if (xpos == ypos)
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
	if (xpos != ypos)
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
	float cpos;
	cpos = sqrt((xpos * xpos) + (ypos * ypos));
	return cpos;
}

template<class T>
Vector2 Vector2<T>::Normalize()
{
	float cpos;
	cpos = sqrt((xpos * xpos) + (ypos * ypos));
	float normiex;
	float normiey;
	normiex = (xpos / cpos);
	normiey = (ypos / cpos);
	return Vector2();
}

template<class T>
float Vector2<T>::Distance(Vector2 other)
{
	float dpos;
	if (xpos > ypos)
	{
		dpos = xpos - ypos;
	}

	else if (xpos < ypos)
	{
		dpos = ypos - xpos;
	}

	else
	{
		dpos = 0.0f;
	}

	return dpos;
}

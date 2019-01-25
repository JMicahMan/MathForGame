#include "Matrix3.h"



template<class T>
Matrix3<T>::Matrix3()
{
}

template<class T>
Vector3 Matrix3<T>::xAxis()
{
	return Vector3();
}

template<class T>
Vector3 Matrix3<T>::yAxis()
{
	return Vector2();
}

template<class T>
Vector3 Matrix3<T>::zAxis()
{
	return Vector3();
}

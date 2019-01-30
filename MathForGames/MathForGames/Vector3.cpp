#include "Vector3.h"
#include <math.h>
#include <cmath>



Vector3::Vector3(float x, float y, float z)
{
	xpos1 = x;
	ypos1 = y;
	zpos1 = z;

}

float Vector3::getx()
{
	return xpos1;
}

float Vector3::gety()
{
	return ypos1;
}

float Vector3::getz()
{
	return zpos1;
}

Vector3 Vector3::operator+(float & rhs)
{
	float add1 = xpos1 + rhs;
	float add2 = ypos1 + rhs;
	float add3 = zpos1 + rhs;
	Vector3 addtru(add1, add2, add3);
	return addtru;
}

Vector3 Vector3::operator-(float & rhs)
{
	float minus1 = xpos1 - rhs;
	float minus2 = ypos1 - rhs;
	float minus3 = zpos1 - rhs;
	Vector3 minustru(minus1, minus2, minus3);
	return minustru;
}

Vector3 Vector3::operator*(float & rhs)
{

	float prodo1 = xpos1 * rhs;
	float prodo2 = ypos1 * rhs;
	float prodo3 = zpos1 * rhs;
	Vector3 prodotru(prodo1, prodo2, prodo3);
	return prodotru;
}

bool Vector3::operator==(Vector3 & rhs)
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

bool Vector3::operator!=(Vector3 & rhs)
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

float Vector3::magnitude()
{
	float xsqur = xpos1 * xpos1;
	float ysqur = ypos1 * ypos1;
	float zsqur = zpos1 * zpos1;
	float mag = sqrt(xsqur + ysqur + zsqur);
	return mag;
}

float Vector3::normalise()
{
	float xsqur = xpos1 * xpos1;
	float ysqur = ypos1 * ypos1;
	float zsqur = zpos1 * zpos1;
	float mag = sqrt(xsqur + ysqur + zsqur);
	float normpt1 = xpos1 / mag;
	float normpt2 = ypos1 / mag;
	float normpt3 = zpos1 / mag;
	float norm = (normpt1, normpt2, normpt3);

	return norm;
}

float Vector3::dot(Vector3 & rhs)
{
	float dotprod = (xpos1 * rhs.getx()) + (ypos1 * rhs.gety()) + (zpos1 * rhs.getz());
	return dotprod;
}

float Vector3::cross(Vector3)
{
	
	float cross = sin(xpos1 * ypos1 * zpos1);

	return cross;

}

float Vector3::operator[](int index)
{
	if (index == 0)
	{
		return xpos1;
	}

	else if (index == 1)
	{
		return ypos1;
	}

	else if (index == 2)
	{
		return zpos1;
	}
}

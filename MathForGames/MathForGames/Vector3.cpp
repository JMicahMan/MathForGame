#include "Vector3.h"
#include <cmath>



Vector3::Vector3()
{
}

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

Vector3 Vector3::operator+(Vector3& rhs)
{
	float add1 = xpos1 + rhs.getx();
	float add2 = ypos1 + rhs.gety();
	float add3 = zpos1 + rhs.getz();
	Vector3 addtru(add1, add2, add3);
	return addtru;
}

Vector3 Vector3::operator-(Vector3& rhs)
{
	float minus1 = xpos1 - rhs.getx();
	float minus2 = ypos1 - rhs.gety();
	float minus3 = zpos1 - rhs.getz();
	Vector3 minustru(minus1, minus2, minus3);
	return minustru;
}

Vector3 Vector3::operator*(float rhs)
{

	xpos1 *= rhs;
	ypos1 *= rhs;
	zpos1 *= rhs;

	return *this;
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

Vector3 Vector3::cross(Vector3 rhs)
{
	return Vector3(ypos1 * rhs.zpos1 - zpos1 * rhs.ypos1,
		zpos1 * rhs.xpos1 - xpos1 * rhs.zpos1,
		xpos1 * rhs.ypos1 - ypos1 * rhs.xpos1);
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

	else
	{
		return 0;
	}
}

Vector3::operator float*()
{
	float f[3] = { xpos1, ypos1, zpos1 };
	return &f[0];
}

Vector3 operator*(float rhs, Vector3 stndin)
{
	{

		float prod1 = stndin.getx() * rhs;
		float prod2 = stndin.gety() * rhs;
		float prod3 = stndin.getz() * rhs;
		Vector3 prod = Vector3(prod1, prod2, prod3);
		return prod;
	}

}

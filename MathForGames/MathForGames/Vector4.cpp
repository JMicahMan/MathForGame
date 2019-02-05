#include "Vector4.h"
#include <cmath>



Vector4::Vector4()
{
}

Vector4::Vector4(float x, float y, float z, float w)
{
	xpos1 = x;
	ypos1 = y;
	zpos1 = z;
	wpos1 = w;

}

float Vector4::getx()
{
	return xpos1;
}

float Vector4::gety()
{
	return ypos1;
}

float Vector4::getz()
{
	return zpos1;
}

float Vector4::getw()
{
	return wpos1;
}

Vector4 Vector4::operator+(float & rhs)
{
	float add1 = xpos1 + rhs;
	float add2 = ypos1 + rhs;
	float add3 = zpos1 + rhs;
	float add4 = wpos1 + rhs;
	Vector4 addtru(add1, add2, add3, add4);
	return addtru;
}

Vector4 Vector4::operator-(float & rhs)
{
	float minus1 = xpos1 - rhs;
	float minus2 = ypos1 - rhs;
	float minus3 = zpos1 - rhs;
	float minus4 = wpos1 - rhs;
	Vector4 minustru(minus1, minus2, minus3, minus4);
	return minustru;
}

Vector4 Vector4::operator*(float & rhs)
{

	xpos1 *= rhs;
	ypos1 *= rhs;
	zpos1 *= rhs;
	wpos1 *= rhs;

	return *this;
}

bool Vector4::operator==(Vector4 & rhs)
{
	if ((xpos1 == rhs.getx()) && (ypos1 == rhs.gety()) && (zpos1 == rhs.getz()) && (zpos1 == rhs.getw()))
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Vector4::operator!=(Vector4 & rhs)
{
	if ((xpos1 != rhs.getx()) && (ypos1 != rhs.gety()) && (zpos1 != rhs.getz()) && (zpos1 != rhs.getw()))
	{
		return true;
	}
	else
	{
		return false;
	}
}

float Vector4::magnitude()
{
	float xsqur = xpos1 * xpos1;
	float ysqur = ypos1 * ypos1;
	float zsqur = zpos1 * zpos1;
	float wsqur = wpos1 * wpos1;
	float mag = sqrt(xsqur + ysqur + zsqur + wsqur);
	return mag;
}

float Vector4::normalise()
{
	float xsqur = xpos1 * xpos1;
	float ysqur = ypos1 * ypos1;
	float zsqur = zpos1 * zpos1;
	float wsqur = wpos1 * wpos1;
	float mag = sqrt(xsqur + ysqur + zsqur + wsqur);
	float normpt1 = xpos1 / mag;
	float normpt2 = ypos1 / mag;
	float normpt3 = zpos1 / mag;
	float normpt4 = wpos1 / mag;
	float norm = (normpt1, normpt2, normpt3, normpt4);

	return norm;
}

float Vector4::dot(Vector4 & rhs)
{
	float dotprod = (xpos1 * rhs.getx()) + (ypos1 * rhs.gety()) + (zpos1 * rhs.getz()) + (wpos1 * rhs.getw());
	return dotprod;
}

float Vector4::cross(Vector4)
{
	
	float cross = sin(xpos1 * ypos1 * zpos1 * wpos1);

	return cross;

}

float Vector4::operator[](int index)
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

	else if (index == 3)
	{
		return wpos1;
	}

	else
	{
		return 0;
	}
}

Vector4::operator float*()
{
	float f[4] = { xpos1, ypos1, zpos1, wpos1 };
	return &f[0];
}

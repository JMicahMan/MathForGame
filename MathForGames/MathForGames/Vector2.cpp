#include "Vector2.h"
#include <cmath>



Vector2::Vector2()
{

}

Vector2::Vector2(float x, float y)
{
	xpos1 = x;
	ypos1 = y;

}

float Vector2::getx()
{
	return xpos1;
}

float Vector2::gety()
{
	return ypos1;
}

Vector2 Vector2::operator+(Vector2& rhs)
{
	float add1 = xpos1 + rhs.getx();
	float add2 = ypos1 + rhs.gety();
	Vector2 addtru(add1, add2);
	return addtru;
}

Vector2 Vector2::operator-(Vector2& rhs)
{
	float minus1 = xpos1 - rhs.getx();
	float minus2 = ypos1 - rhs.gety();
	Vector2 minustru(minus1, minus2);
	return minustru;
}

Vector2 Vector2::operator*(float rhs)
{
	xpos1 *= rhs;
	ypos1 *= rhs;

	return *this;
}

bool Vector2::operator==(Vector2 & rhs)
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

bool Vector2::operator!=(Vector2 & rhs)
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

float Vector2::magnitude()
{
	float xsqur = xpos1 * xpos1;
	float ysqur = ypos1 * ypos1;
	float mag = sqrt(xsqur + ysqur);
	return mag;
}

float Vector2::normalise()
{
	float xsqur = xpos1 * xpos1;
	float ysqur = ypos1 * ypos1;
	float mag = sqrt(xsqur + ysqur);
	float normpt1 = xpos1 / mag;
	float normpt2 = ypos1 / mag;
	float norm = (normpt1, normpt2);

	return norm;
}

float Vector2::dot(Vector2 & rhs)
{
	float dotprod = (xpos1 * rhs.getx()) + (ypos1 * rhs.gety());
	return dotprod;
}


float Vector2::operator[](int index)
{
	if (index == 0)
	{
		return xpos1;
	}

	else if (index == 1)
	{
		return ypos1;
	}
	
	else
	{
		return 0;
	}
}

Vector2::operator float*()
{
	float f[2] = { xpos1, ypos1 };
	return &f[0];

}

Vector2 operator*(float rhs, Vector2 stndin)
{
	
	float prod1 = stndin.getx() * rhs;
	float prod2 = stndin.gety() * rhs;
	Vector2 prod = Vector2(prod1, prod2);
	return prod;
}

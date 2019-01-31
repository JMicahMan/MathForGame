#include "Matrix3.h"

Matrix3::Matrix3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
{
	apos = a;
	bpos = b;
	cpos = c;
	dpos = d;
	epos = e;
	fpos = f;
	gpos = g;
	hpos = h;
	ipos = i;
}

float Matrix3::geta()
{
	return apos;
}

float Matrix3::getb()
{
	return bpos;
}

float Matrix3::getc()
{
	return cpos;
}

float Matrix3::getd()
{
	return dpos;
}

float Matrix3::gete()
{
	return epos;
}

float Matrix3::getf()
{
	return fpos;
}

float Matrix3::getg()
{
	return gpos;
}

float Matrix3::geth()
{
	return hpos;
}

float Matrix3::geti()
{
	return ipos;
}


Matrix3 Matrix3::operator*(float & rhs)
{
	float matmula = apos * rhs;
	float matmulb = bpos * rhs;
	float matmulc = cpos * rhs;
	float matmuld = dpos * rhs;
	float matmule = epos * rhs;
	float matmulf = fpos * rhs;
	float matmulg = gpos * rhs;
	float matmulh = hpos * rhs;
	float matmuli = ipos * rhs;

	Matrix3 MatProd(matmula, matmulb, matmulc, matmuld, matmule, matmulf, matmulg, matmulh, matmuli);

	return MatProd;
}

void Matrix3::rotationX(float)
{
}

void Matrix3::rotationY(float)
{
}

void Matrix3::rotationZ(float)
{
}

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

Matrix3 Matrix3::operator+(float & rhs)
{
	float matadda = apos + rhs.geta;
	float mataddb = bpos + rhs.getb;
	float mataddc = cpos + rhs.getc;
	float mataddd = dpos + rhs.getd;
	float matadde = epos + rhs.gete;
	float mataddf = fpos + rhs.getf;
	float mataddg = gpos + rhs.getg;
	float mataddh = hpos + rhs.geth;
	float mataddi = ipos + rhs.geti;

	Matrix3 MatPlus (matadda, mataddb, mataddc, mataddd, matadde, mataddf, mataddg, mataddh, mataddi);

	return MatPlus;
}

Matrix3 Matrix3::operator-(float & rhs)
{
	float matsuba = apos - rhs.geta;
	float matsubb = bpos - rhs.getb;
	float matsubc = cpos - rhs.getc;
	float matsubd = dpos - rhs.getd;
	float matsube = epos - rhs.gete;
	float matsubf = fpos - rhs.getf;
	float matsubg = gpos - rhs.getg;
	float matsubh = hpos - rhs.geth;
	float matsubi = ipos - rhs.geti;

	Matrix3 MatMinus (matsuba, matsubb, matsubc, matsubd, matsube, matsubf, matsubg, matsubh, matsubi);

	return MatMinus;

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

	return MatProd();
}

bool Matrix3::operator==(Matrix3 & rhs)
{
	return false;
}

bool Matrix3::operator!=(Matrix3 & rhs)
{
	return false;
}

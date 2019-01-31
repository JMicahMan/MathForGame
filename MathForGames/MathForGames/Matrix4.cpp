#include "Matrix4.h"

Matrix4::Matrix4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p)
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
	jpos = j;
	kpos = k;
	lpos = l;
	mpos = m;
	npos = n;
	opos = o;
	ppos = p;
}

float Matrix4::geta()
{
	return apos;
}

float Matrix4::getb()
{
	return bpos;
}

float Matrix4::getc()
{
	return cpos;
}

float Matrix4::getd()
{
	return dpos;
}

float Matrix4::gete()
{
	return epos;
}

float Matrix4::getf()
{
	return fpos;
}

float Matrix4::getg()
{
	return gpos;
}

float Matrix4::geth()
{
	return hpos;
}

float Matrix4::geti()
{
	return ipos;
}

float Matrix4::getj()
{
	return jpos;
}

float Matrix4::getk()
{
	return kpos;
}

float Matrix4::getl()
{
	return lpos;
}

float Matrix4::getm()
{
	return mpos;
}

float Matrix4::getn()
{
	return npos;
}

float Matrix4::geto()
{
	return opos;
}

float Matrix4::getp()
{
	return ppos;
}




Matrix4 Matrix4::operator*(float & rhs)
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
	float matmulj = jpos * rhs;
	float matmulk = kpos * rhs;
	float matmull = lpos * rhs;
	float matmulm = mpos * rhs;
	float matmuln = npos * rhs;
	float matmulo = opos * rhs;
	float matmulp = ppos * rhs;


	Matrix4 MatProd(matmula, matmulb, matmulc, matmuld,
					 matmule, matmulf, matmulg, matmulh,
				     matmuli, matmulj, matmulk, matmull,
					 matmulm, matmuln, matmulo, matmulp);

	return MatProd;
}

bool Matrix4::operator==(Matrix4 & rhs)
{
	return false;
}

bool Matrix4::operator!=(Matrix4 & rhs)
{
	return false;
}

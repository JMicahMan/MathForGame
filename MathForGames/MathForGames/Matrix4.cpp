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



Matrix4 Matrix4::operator+(float & rhs)
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
	float mataddj = jpos + rhs.getj;
	float mataddk = kpos + rhs.getk;
	float mataddl = lpos + rhs.getl;
	float mataddm = mpos + rhs.getm;
	float mataddn = npos + rhs.getn;
	float mataddo = opos + rhs.geto;
	float mataddp = ppos + rhs.getp;


	Matrix4 MatPlus(matadda, mataddb, mataddc, mataddd, 
		            matadde, mataddf, mataddg, mataddh, 
		            mataddi, mataddj, mataddk, mataddl,
					mataddm, mataddn, mataddo, mataddp);

	return MatPlus;
}

Matrix4 Matrix4::operator-(float & rhs)
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
	float matsubj = jpos - rhs.getj;
	float matsubk = kpos - rhs.getk;
	float matsubl = lpos - rhs.getl;
	float matsubm = mpos - rhs.getm;
	float matsubn = npos - rhs.getn;
	float matsubo = opos - rhs.geto;
	float matsubp = ppos - rhs.getp;


	Matrix4 MatMinus(matsuba, matsubb, matsubc, matsubd,
					 matsube, matsubf, matsubg, matsubh, 
					 matsubi, matsubj, matsubk, matsubl,
					 matsubm, matsubn, matsubo, matsubp);

	return MatMinus;

}

Matrix4 Matrix4::operator*(float & rhs)
{
	float matmula = apos - rhs.geta;
	float matmulb = bpos - rhs.getb;
	float matmulc = cpos - rhs.getc;
	float matmuld = dpos - rhs.getd;
	float matmule = epos - rhs.gete;
	float matmulf = fpos - rhs.getf;
	float matmulg = gpos - rhs.getg;
	float matmulh = hpos - rhs.geth;
	float matmuli = ipos - rhs.geti;
	float matmulj = jpos - rhs.getj;
	float matmulk = kpos - rhs.getk;
	float matmull = lpos - rhs.getl;
	float matmulm = mpos - rhs.getm;
	float matmuln = npos - rhs.getn;
	float matmulo = opos - rhs.geto;
	float matmulp = ppos - rhs.getp;


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

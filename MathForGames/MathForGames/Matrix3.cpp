#include "Matrix3.h"

Matrix3::Matrix3()
{
}

Matrix3::Matrix3(Vector3, Vector3, Vector3)
{
}

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


Matrix3 Matrix3::operator*(Matrix3 rhs)
{
	Matrix3 MatProd;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatProd.MatDat[i][j] = MatDat[i][0] * rhs.MatDat[0][j] + MatDat[i][1] * rhs.MatDat[1][j]
				+ MatDat[i][2] * rhs.MatDat[2][j];
			return MatProd;
		}
	}


}

void Matrix3::rotationX(float rad)
{
	Matrix3 x = Matrix3(cos(rad), sin(rad), 0, -sin(rad), cos(rad), 0, 0, 0, 1);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatDat[i][j] = TempDat[0][i] * x.MatDat[j][0] + TempDat[1][i] * x.MatDat[j][1] +
				TempDat[2][i] * x.MatDat[j][2];
		}
	}
}

void Matrix3::rotationY(float rad)
{

	Matrix3 y = Matrix3(cos(rad), sin(rad), 0, -sin(rad), cos(rad), 0, 0, 0, 1);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatDat[i][j] = TempDat[0][i] * y.MatDat[j][0] + TempDat[1][i] * y.MatDat[j][1] +
				TempDat[2][i] * y.MatDat[j][2];
		}
	}

}

void Matrix3::rotationZ(float rad)
{

	Matrix3 z = Matrix3(cos(rad), sin(rad), 0, -sin(rad), cos(rad), 0, 0, 0, 1);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatDat[i][j] = TempDat[0][i] * z.MatDat[j][0] + TempDat[1][i] * z.MatDat[j][1] +
				TempDat[2][i] * z.MatDat[j][2];
		}
	}

}

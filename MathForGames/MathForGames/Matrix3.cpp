#include "Matrix3.h"

Matrix3::Matrix3()
{
	MatDat[0][0] = 1;
	MatDat[1][0] = 0;
	MatDat[2][0] = 0;
	MatDat[0][1] = 0;
	MatDat[1][1] = 1;
	MatDat[2][1] = 0;
	MatDat[0][2] = 0;
	MatDat[1][2] = 0;
	MatDat[2][2] = 1;

	TempDat[0][0] = 1;
	TempDat[1][0] = 0;
	TempDat[2][0] = 0;
	TempDat[0][1] = 0;
	TempDat[1][1] = 1;
	TempDat[2][1] = 0;
	TempDat[0][2] = 0;
	TempDat[1][2] = 0;
	TempDat[2][2] = 1;

}

Matrix3::Matrix3(Vector3 x, Vector3 y, Vector3 z)
{
	for (int i = 0; i < 3; i++)
	{
		MatDat[i][0] = x[i];
		TempDat[i][0] = x[i];
	}

	for (int i = 0; i < 3; i++)
	{
		MatDat[i][1] = y[i];
		TempDat[i][0] = y[i];
	}

	for (int i = 0; i < 3; i++)
	{
		MatDat[i][2] = z[i];
		TempDat[i][0] = z[i];
	}



}

Matrix3::Matrix3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
{
	MatDat[0][0] = a;
	MatDat[1][0] = b;
	MatDat[2][0] = c;
	MatDat[0][1] = d;
	MatDat[1][1] = e;
	MatDat[2][1] = f;
	MatDat[0][2] = g;
	MatDat[1][2] = h;
	MatDat[2][2] = i;

	TempDat[0][0] = a;
	TempDat[1][0] = b;
	TempDat[2][0] = c;
	TempDat[0][1] = d;
	TempDat[1][1] = e;
	TempDat[2][1] = f;
	TempDat[0][2] = g;
	TempDat[1][2] = h;
	TempDat[2][2] = i;

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

Vector3 Matrix3::operator*(Vector3 rhs)
{
	Vector3 MatVecProd;

	for (int i=0;i<3;i++)
	{
		MatVecProd[i] == MatDat[0][i] * rhs[i]+
					   	 MatDat[1][i] * rhs[i]+
						 MatDat[2][i] * rhs[i];
	}

	return MatVecProd;
}

Matrix3::operator float*()
{
	return MatDat[0];
}

Vector3 & Matrix3::operator[](int C)
{

	if (C == 0)
	{
		Vector3 V;
	 V = Vector3 (TempDat[0][0],
			      TempDat[1][0],
			      TempDat[2][0]);

	 return V;
	}
	
	if (C == 1)
	{
		Vector3 V;
		V = Vector3(TempDat[0][1],
			        TempDat[1][1],
					TempDat[2][1]);

		return V;
	}

	if (C == 2)
	{
		Vector3 V;
		V = Vector3(TempDat[0][2],
					TempDat[1][2],
					TempDat[2][2]);

		return V;
	}


}

void Matrix3::setRotateZ(float rad)
{
	Matrix3 z = Matrix3(
		cos(rad), sin(rad), 0.0f,
		-sin(rad), cos(rad), 0.0f, 
		0.0f, 0.0f, 1);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatDat[j][i] = TempDat[0][i] * z.MatDat[j][0] +
						   TempDat[1][i] * z.MatDat[j][1] +
						   TempDat[2][i] * z.MatDat[j][2];
		}
	}
}

void Matrix3::setRotateY(float rad)
{

	Matrix3 y = Matrix3(cos(rad), 0.0f, -sin(rad), 
						0.0f, 1, 0.0f,
						sin(rad), 0.0f, cos(rad));
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatDat[j][i] = TempDat[0][i] * y.MatDat[j][0] +
						   TempDat[1][i] * y.MatDat[j][1] +
						   TempDat[2][i] * y.MatDat[j][2];
		}
	}

}

void Matrix3::setRotateX(float rad)
{

	Matrix3 x = Matrix3(1, 0.0f, 0.0f, 0.0f, cos(rad), sin(rad), 0.0f, -sin(rad), cos(rad));
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatDat[j][i] =  TempDat[0][i] * x.MatDat[j][0] +
							TempDat[1][i] * x.MatDat[j][1] +
				            TempDat[2][i] * x.MatDat[j][2];
		}
	}

}

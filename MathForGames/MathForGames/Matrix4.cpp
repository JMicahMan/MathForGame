#include "Matrix4.h"

Matrix4::Matrix4()
{
	MatDat[0][0] = 1;
	MatDat[1][0] = 0;
	MatDat[2][0] = 0;
	MatDat[3][0] = 0;
	MatDat[0][1] = 0;
	MatDat[1][1] = 1;
	MatDat[2][1] = 0;
	MatDat[3][1] = 0;
	MatDat[0][2] = 0;
	MatDat[1][2] = 0;
	MatDat[2][2] = 1;
	MatDat[3][2] = 0;
	MatDat[0][3] = 0;
	MatDat[1][3] = 0;
	MatDat[2][3] = 0;
	MatDat[3][3] = 1;

	TempDat[0][0] = 1;
	TempDat[1][0] = 0;
	TempDat[2][0] = 0;
	TempDat[3][0] = 0;
	TempDat[0][1] = 0;
	TempDat[1][1] = 1;
	TempDat[2][1] = 0;
	TempDat[3][1] = 0;
	TempDat[0][2] = 0;
	TempDat[1][2] = 0;
	TempDat[2][2] = 1;
	TempDat[3][2] = 0;
	TempDat[0][3] = 0;
	TempDat[1][3] = 0;
	TempDat[2][3] = 0;
	TempDat[3][3] = 1;


}

Matrix4::Matrix4(Vector4 x, Vector4 y, Vector4 z, Vector4 w)
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
		MatDat[i][2] = x[i];
		TempDat[i][0] = x[i];
	}

	for (int i = 0; i < 4; i++)
	{
		MatDat[i][3] = z[i];
		TempDat[i][3] = z[i];
	}


}

Matrix4::Matrix4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p)
{
	MatDat[0][0] = a;
	MatDat[1][0] = b;
	MatDat[2][0] = c;
	MatDat[3][0] = d;
	MatDat[0][1] = e;
	MatDat[1][1] = f;
	MatDat[2][1] = g;
	MatDat[3][1] = h;
	MatDat[0][2] = i;
	MatDat[1][2] = c;
	MatDat[2][2] = d;
	MatDat[3][2] = e;
	MatDat[0][3] = f;
	MatDat[1][3] = g;
	MatDat[2][3] = h;
	MatDat[3][3] = i;


	TempDat[0][0] = a;
	TempDat[1][0] = b;
	TempDat[2][0] = c;
	TempDat[3][0] = d;
	TempDat[0][1] = e;
	TempDat[1][1] = f;
	TempDat[2][1] = g;
	TempDat[3][1] = h;
	TempDat[0][2] = i;
	TempDat[1][2] = c;
	TempDat[2][2] = d;
	TempDat[3][2] = e;
	TempDat[0][3] = f;
	TempDat[1][3] = g;
	TempDat[2][3] = h;
	TempDat[3][3] = i;

}






Matrix4 Matrix4::operator*(Matrix4 rhs)
{
	Matrix4 MatProd;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatProd.MatDat[i][j] = MatDat[i][0] * rhs.MatDat[0][j] + MatDat[i][1] * rhs.MatDat[1][j]
				+ MatDat[i][2] * rhs.MatDat[2][j] + MatDat[i][3] * rhs.MatDat[3][j];
			return MatProd;
		}
	}


}

Vector4 Matrix4::operator*(Vector4 rhs)
{
	Vector4 MatVecProd;

	for (int i = 0; i<3; i++)
	{
		MatVecProd[i] == MatDat[0][i] * rhs[i] + MatDat[1][i] * rhs[i] + MatDat[2][i] * rhs[i] + 
			MatDat[3][i] * rhs[i];
	}

	return MatVecProd;

}

Vector4 & Matrix4::operator[](int C)
{
	if (C == 0)
	{
		Vector4 V;
		V = Vector4(TempDat[0][0],
					TempDat[1][0],
					TempDat[2][0],
					TempDat[3][0]);

		return V;
	}

	if (C == 1)
	{
		Vector4 V;
		V = Vector4(TempDat[0][1],
				    TempDat[1][1],
					TempDat[2][1],
					TempDat[3][1]);

		return V;
	}

	if (C == 2)
	{
		Vector4 V;
		V = Vector4(TempDat[0][2],
					TempDat[1][2],
					TempDat[2][2],
					TempDat[3][2]);

		return V;
	}

	if (C == 3)
	{
		Vector4 V;
		V = Vector4(TempDat[0][3],
					TempDat[1][3],
					TempDat[2][3],
					TempDat[3][3]);

		return V;
	}

}

Matrix4::operator float*()
{
	return MatDat[0];
}

void Matrix4::setRotateX(float rad)
{
	Matrix4 x = Matrix4(1, 0.0f, 0.0f, 0.0f,
						0.0f, cos(rad), sin(rad), 0.0f,
						0.0f, -sin(rad), cos(rad), 0.0f,
						0.0f, 0.0f, 0.0f, 1);
	
						
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			MatDat[i][j] =  TempDat[0][i] * x.MatDat[j][0] +
							TempDat[1][i] * x.MatDat[j][1] +
							TempDat[2][i] * x.MatDat[j][2] +
							TempDat[3][i] * x.MatDat[j][3];

		}
	}

}

void Matrix4::setRotateY(float rad)
{

	Matrix4 y = Matrix4(cos(rad), 0.0f, -sin(rad), 0.0f,
						0.0f, 1, 0.0f, 0.0f,
						sin(rad), 0.0f, cos(rad), 0.0f,
						0.0f, 0.0f, 0.0f, 1);
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			MatDat[i][j] =  TempDat[0][i] * y.MatDat[j][0] +
							TempDat[1][i] * y.MatDat[j][1] +
							TempDat[2][i] * y.MatDat[j][2] +
							TempDat[3][i] * y.MatDat[j][3];
		}
	}

}

void Matrix4::setRotateZ(float rad)
{
	Matrix4 z = Matrix4(cos(rad), sin(rad), 0.0f, 0.0f,
						-sin(rad),cos(rad), 0.0f, 0.0f,
						0.0f, 0.0f, 1, 0.0f, 
						0.0f, 0.0f, 0.0f, 1);

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			MatDat[i][j] =  TempDat[0][i] * z.MatDat[j][0] +
							TempDat[1][i] * z.MatDat[j][1] +
							TempDat[2][i] * z.MatDat[j][2] +
							TempDat[3][i] * z.MatDat[j][3];
		}
	}

}


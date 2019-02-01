#include "Matrix4.h"

Matrix4::Matrix4()
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			MatDat[i][j] = 0;
			TempDat[i][j] = 0;
		}
	}
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
}






Matrix4 Matrix4::operator*(Matrix4 rhs)
{
	Matrix4 MatProd;

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

void Matrix4::rotationX(float rad)
{
	Matrix4 x = Matrix4(cos(rad), sin(rad), 0, 0, -sin(rad), cos(rad), 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatDat[i][j] = TempDat[0][i] * x.MatDat[j][0] + TempDat[1][i] * x.MatDat[j][1] +
				TempDat[2][i] * x.MatDat[j][2] + TempDat[3][i] * x.MatDat[j][3];
		}
	}

}

void Matrix4::rotationY(float rad)
{

	Matrix4 y = Matrix4(cos(rad), sin(rad), 0, 0, -sin(rad), cos(rad), 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatDat[i][j] = TempDat[0][i] * y.MatDat[j][0] + TempDat[1][i] * y.MatDat[j][1] +
				TempDat[2][i] * y.MatDat[j][2] + TempDat[3][i] * y.MatDat[j][3];
		}
	}

}

void Matrix4::rotationZ(float rad)
{
	Matrix4 z = Matrix4(cos(rad), sin(rad), 0, 0, -sin(rad), cos(rad), 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatDat[i][j] = TempDat[0][i] * z.MatDat[j][0] + TempDat[1][i] * z.MatDat[j][1] +
				TempDat[2][i] * z.MatDat[j][2] + TempDat[3][i] * z.MatDat[j][3];
		}
	}

}

void Matrix4::rotationW(float rad)
{
	Matrix4 w = Matrix4(cos(rad), sin(rad), 0, 0, -sin(rad), cos(rad), 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MatDat[i][j] = TempDat[0][i] * w.MatDat[j][0] + TempDat[1][i] * w.MatDat[j][1] +
				TempDat[2][i] * w.MatDat[j][2] + TempDat[3][i] * w.MatDat[j][3];
		}
	}

}

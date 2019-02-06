#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Matrix3.h"
#include "Matrix4.h"
#include <iostream>



int main()
{

	Matrix3 Test1;
	Matrix4 Test2;
	Matrix3 Test3;
	Matrix4 Test4;
	Matrix3 Test5;
	Matrix4 Test6;



	Test1.setRotateX(3.98f);
	Test2.setRotateX(4.5f);
	Test3.setRotateY(1.76f);
	Test4.setRotateY(-2.6f);
	Test5.setRotateZ(9.62f);
	Test6.setRotateZ(0.72f);


	system("pause");
}  
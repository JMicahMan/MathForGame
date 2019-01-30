#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include <iostream>



int main()
{
	Vector2 test = Vector2 (2.2f, 3.3f);

	float scale = 6;

	Vector2 case0 = test + scale;
	
	Vector2 case1 = test - scale;

	Vector2 case2 = test * scale;

	
	

	system("pause");
}  
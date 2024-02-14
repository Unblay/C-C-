#include <stdio.h>

int Data_Type()
{
	//*****Data Type*****

	//1byte = 8bit
	//1024B=1KB 1024KB=1MB 1024MB=1GB 1024GB=1TB
	 
	//자료형(크기 단위,byte)
	//정수형:char(1byte),short(2byte),int(4byte),long(4byte),long long(8byte)등등
	//실수형:float(4byte),double(8byte)등등





	//***정수형***
	//unsigned : 양수만 표현할 때(range : 2^8 / 0~255)
	//signed : 양수, 음수 둘 다 표현할때(range : 2^8 / -128~127)
	//               l
	//               v
	//         "2의 보수"로 나타내짐
	
	//서식지정자 : %d - char, short, int   /   %ld - long   /   %lld - long long

	//변수 선언
	int size;
	//사이즈 크기 확인
	size = sizeof(size);

	



	//***실수형***
	//"부동소수점"로 나타내짐(부호부, 지수부, 가수부)
	
	//서식지정자 : %f - float, double   /   %Lf - long double
	//지수표기법   %e - float, double   /   %Le - long double

	float n1 = 0.1f;
	double n2 = 0.1;
	long double n3 = 0.1l;
}
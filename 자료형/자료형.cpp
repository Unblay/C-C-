#include <stdio.h>

int Data_Type()
{
	//*****Data Type*****

	//1byte = 8bit
	//1024B=1KB 1024KB=1MB 1024MB=1GB 1024GB=1TB
	 
	//�ڷ���(ũ�� ����,byte)
	//������:char(1byte),short(2byte),int(4byte),long(4byte),long long(8byte)���
	//�Ǽ���:float(4byte),double(8byte)���





	//***������***
	//unsigned : ����� ǥ���� ��(range : 2^8 / 0~255)
	//signed : ���, ���� �� �� ǥ���Ҷ�(range : 2^8 / -128~127)
	//               l
	//               v
	//         "2�� ����"�� ��Ÿ����
	
	//���������� : %d - char, short, int   /   %ld - long   /   %lld - long long

	//���� ����
	int size;
	//������ ũ�� Ȯ��
	size = sizeof(size);

	



	//***�Ǽ���***
	//"�ε��Ҽ���"�� ��Ÿ����(��ȣ��, ������, ������)
	
	//���������� : %f - float, double   /   %Lf - long double
	//����ǥ���   %e - float, double   /   %Le - long double

	float n1 = 0.1f;
	double n2 = 0.1;
	long double n3 = 0.1l;
}
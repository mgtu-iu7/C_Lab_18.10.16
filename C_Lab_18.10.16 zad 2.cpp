#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"RUS");

	const int iRANGE=7;
	const int iMAXARRAY=15;
	int iArray_In[iMAXARRAY],iArray_Out[iMAXARRAY];
	int i,j;
	srand((unsigned)time(NULL));

	for (i=0;i<iMAXARRAY;i++)     // ���������� �������
	{
		iArray_In[i]=(rand()%iRANGE);
		printf("%3d",iArray_In[i]);
	}
	
int iCount_Temp(iMAXARRAY-1);
bool bSwap;
for (i=0; i<iMAXARRAY-1;i++)
{
	bSwap=false;	
	for (j=iMAXARRAY-2-i;j>=0;j--)	//������� ����� � ����� ������� � ������
		if ((iArray_In[iMAXARRAY-1-i]==iArray_In[j])) // ��������� �������� �������� ������� ������� � ����������� ����������
		{												// ���� ����� ������� ����� ������-�� �������� ����� ���������� � �������� � ���������� �������� � �������������� 
		bSwap=true;
		break;
		}

	if (!bSwap)
	{
	iArray_Out[iCount_Temp]=iArray_In[iMAXARRAY-1-i]; //���� ������� �� ����� �� ������ �������� � ������ ����� ���� ��� � �������� ������
	iCount_Temp--;										//������� ���������� ��������� �������, ��� ��� �������� ������ ����������� � ����� ���� �� ����������
	}
}
iArray_Out[iCount_Temp]=iArray_In[0];
 
   	printf("\n");
    for (i=iCount_Temp;i<iMAXARRAY;i++)
    printf("%3d",iArray_Out[i]); //����� �� ����� ��������� �������
	_getch();
	return 0;	
}

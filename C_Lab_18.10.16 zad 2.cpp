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

	for (i=0;i<iMAXARRAY;i++)     // «аполнение массива
	{
		iArray_In[i]=(rand()%iRANGE);
		printf("%3d",iArray_In[i]);
	}
	
int iCount_Temp(iMAXARRAY-1);
bool bSwap;
for (i=0; i<iMAXARRAY-1;i++)
{
	bSwap=false;	
	for (j=iMAXARRAY-2-i;j>=0;j--)	//провожу поиск с конца массива к началу
		if ((iArray_In[iMAXARRAY-1-i]==iArray_In[j])) // сравниваю например поледний элемент массива с отстальными элементами
		{												// если такой элемент равен какому-то элементу поиск заканчиваю и перехожу к следующему например к предпослежнему 
		bSwap=true;
		break;
		}

	if (!bSwap)
	{
	iArray_Out[iCount_Temp]=iArray_In[iMAXARRAY-1-i]; //если элемент не равен ни какому элементу в масиве тогда ложу его в выходной массив
	iCount_Temp--;										//счетчик заполнени€ выходного массива, так как выходной массив заполн€етс€ с конца идет на уменьшение
	}
}
iArray_Out[iCount_Temp]=iArray_In[0];
 
   	printf("\n");
    for (i=iCount_Temp;i<iMAXARRAY;i++)
    printf("%3d",iArray_Out[i]); //вывод на экран выходного массива
	_getch();
	return 0;	
}

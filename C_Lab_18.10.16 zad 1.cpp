#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
	setlocale(LC_ALL,"RUS");

	const int iRANGE=100;
	const int iMAXARRAY=10;
	int iArray_In[iMAXARRAY],iArray_Out[iMAXARRAY], iArray_Temp[iMAXARRAY];
	int i,j,iCount_Temp(0);
	srand((unsigned)time(NULL));

	for (i=0;i<iMAXARRAY;i++)     // Заполнение массива
	{
		iArray_In[i]=(rand()%iRANGE);
		printf("%3d",iArray_In[i]);
	}
	
//	printf("\n");	
	for (i=0;i<iMAXARRAY;i++)	//Заполняем временный массив четными числами
		if (!(iArray_In[i]%2))
		{
			iArray_Temp[iCount_Temp++]=iArray_In[i];			
			//printf("%3d",iArray_Temp[iCount_Temp-1]);
		}
	
  
	for (i=0;i<iCount_Temp-1;i++) //Пузырьковая сортировка по возрастанию
	{
	bool Swap=false;		
			for (j=0;j<iCount_Temp-i-1;j++)
				if (iArray_Temp[j]>iArray_Temp[j+1])
				{
				int iTemp=iArray_Temp[j];
				iArray_Temp[j]=iArray_Temp[j+1];
				iArray_Temp[j+1]=iTemp;
				Swap=true;
				}
	if (!Swap)
	   break;
    }
    iCount_Temp=0;
    
    	for (i=0;i<iMAXARRAY;i++) //Замена четных элементов на сортированные
		if (!(iArray_In[i]%2))
		{
			iArray_Out[i]=iArray_Temp[iCount_Temp++];
		}
		else
			iArray_Out[i]=iArray_In[i];
    
	printf("\n");
    for (i=0;i<iMAXARRAY;i++)
    printf("%3d",iArray_Out[i]);
	_getch();
	return 0;	
}

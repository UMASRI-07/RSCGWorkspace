/***************************************************************************
 *  * FILENAME :details.c
 *  * DESCRIPTION :This file defined required function for showing worker details
 *  *
 *  **********************************************************/





#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define Max_Length 5
#define Max_Cols 3
//indef_Worker_MACRO_H
//define_Worker_MACRO_H

/*******************************
 *  * FILENAME:details.c
 *  FUCTION NAME:display()
 *  DESCRIPTIOM: this function displays string of worker_firstname,worker_lastname
 *  RETURN :this function returns total wages
 *  ******************/


void access_array()
{
	int arr[][Max_Cols]={{1,2,3},{4,5,6}};
	int (*ptr)[Max_Cols];
	ptr = &arr[0];
	for(int i=0;i<Max_Cols-1;i++)
	{
		for(int j=0;j<Max_Cols;j++)
		{
			printf("%d",(*ptr)[j]);
		}
		for(int j=0;j<Max_Cols;j++)
		{
			printf("%p",&(*ptr)[j]);
		}
		ptr++;
		printf("\n");
	}
}

int main()
{
	char arr[]="ABC";
	char (*ptr2)[Max_Length];
	char *ptr3="AB";
	char *ptr4[2];
	char **ptr5={NULL};
	char* ptr =(char*)& arr;
	char msg[][Max_Length]={"AB","gh","er"};
	for(int i=0;i<Max_Cols-1;i++)
	{
		for(int j=0;j<Max_Cols-1;j++)
		{
			printf("%p",&(*ptr2)[j]);
		}
		ptr2++;
		printf("\n");
	}
	printf("%lu %lu %lu %lu \n",sizeof(ptr2),sizeof(ptr3),sizeof(ptr4),sizeof(ptr5));
	ptr2=&msg[0];
	access_array();
}


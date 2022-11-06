#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max_size 50
int arr[Max_size]={0};
int totalElements=0;
extern void display(int arr[Max_size],int number);
extern int inputElements(int arr[Max_size],int elements,int max);
extern int sumOf_Max_and_MinEle(int arr[Max_size]);
extern int myCount(int arr[Max_size],int item,int totalElements);
extern void myrev(int arr[Max_size],int totalElements);
extern void revstr(char *str1);
int inputElements(int arr[Max_size],int elements,int max)
{
	if(elements <=max)
	{
		int i=0;
		for(i=0;i<elements ;i++)
		{
			printf("\n Enter the elements arr[%d]:",i);
			scanf("%d",&arr[i]);
		}
		return i;
	}
	else
	{
		printf("\n Warning ! limit of array exceeded");
		return EXIT_FAILURE;
	}
}
void display(int arr[Max_size],int number)
{
	int i=0;
	for(i=0;i<number;i++)
	{
		printf("\n%d",arr[i]);
	}
}
int sumOf_Max_and_MinEle(int arr[Max_size])
{
	int minimum=arr[0],maximum=arr[0],sum=0,i=0;
	for(i=0;i<totalElements;i++)
	{
		if(arr[i]<minimum)
		{
			minimum=arr[i];
		}
		if(arr[i]>maximum)
		{
			maximum=arr[i];
		}
	}
	sum=minimum+maximum;
	return sum;
}
int myCount(int arr[Max_size],int item,int totalElements)
{
		int count=0;
		int i=0;
		for(i=0;i<totalElements;i++)
		{
			if(arr[i]==item)
			{
				count++;
			}
		}
		return count;
}
void myrev(int arr[Max_size],int totalElements)
	{
		int temp=0,
		start=0,end=totalElements-1,i=0;
		printf("\n Elements before reversing :\n");
		for(i=0;i<totalElements;i++)
		{
			printf("%d \t",arr[i]);
		}
	}
void revstr(char *str1)
{
	int i,len,temp;
	len =strlen(str1);
	for(i=0;i<len/2;i++)
	{
		temp=str1[i];
		str1[i]=str1[len-i-1];
		str1[len-i-1]=temp;
	}
}
int main()
{
	int number=0,sum=0,item=0,count=0,elements=0;
	char str[Max_size];
	do
	{
		printf("\n No.of Elements you want to store:");
		scanf("%d",&elements);
		totalElements=inputElements(arr,elements,Max_size);
	}
	while(totalElements == EXIT_FAILURE);
	printf("\n No. of Elements stored are: %d ",totalElements);
	scanf("%d",&number);

	display(arr,number);
	sumOf_Max_and_MinEle(arr);

	printf("\nSum of min and max Elements is: %d",sumOf_Max_and_MinEle(arr));
	printf("\nEnter elements to count occurence :");
	scanf("%d", &item);
	count = myCount(arr,item,totalElements);
	printf("NO of occurence of %d is : %d\n",item,count);

myrev(arr,totalElements);

printf("\n Enter your name:");
scanf("%s",str);
		printf("\n Before reversing the string: %s \n",str);
		 revstr(str);

		 printf("After reversing the string: %s",str);
		 return EXIT_SUCCESS;
 }










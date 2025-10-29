#include<stdio.h>
main()
{
	int age;
	float weight;
	char gender;
	char name[54];
	printf ("Enter Your Name ");
	scanf("%s",&name);
	printf ("\nenter gender ");
	scanf(" %c",&gender);
	printf ("\nEnter Age ");
	scanf("%d",&age);
	printf ("\nenter weight ");
	scanf("%f",&weight);	
	printf("\nName:%s\nAge:%d\nWeight:%f\nGender:%c",name,age,weight,gender);
}

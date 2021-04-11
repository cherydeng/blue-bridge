#include<string.h>
#include<stdio.h>
#define N 5
struct student
{
	int num;
	char *name;
	char sex;
	float age;
}stu[N]={ {1,"李芳",'F',45},{2,"于红",'F',62.5},{3,"何万山",'M',92.5},
{4,"程亚丽",'M',87},{5,"王明",'M',58}};
int main()
{ 
struct student *p;
printf("no./t name /t sex /t age \n");
for(p=stu;p<stu+3;p++){  
  printf("%5d %-20s %2c %4d\n",p->num,p->name,p->sex,p->age);
}
}



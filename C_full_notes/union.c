#include<stdio.h>
#include<string.h>

/*
union Demo{

 int i;
  float f;
  char str;
};
*/

 union demo{
//char i[20];
int i;
float f;
char str[20];
};




int main()
{

  // which is longest data types will be cover the space 

 //  union Demo data;
 //  printf("Memory size occupied bt demo : %d \n ",sizeof(union Demo));
 


//example 2
 /*union demo data;
 data.i=20;
 data.f=230.5;
strcpy(data.str,"Micro solution " );

  printf("Value of i : %d \n",data.i);
  printf("Value of f : %f  \n",data.f);
  printf("Valueo of String : %s \n",data.str);
*/


union demo data;
 data.i=20;
 printf("Value of i : %d \n",data.i);
  
 data.f=230.5;
 printf("Value of f : %f \n ",data.f);
  

 strcpy(data.str," Micro solution ");
printf("Value of str : %s \n",data.str);


 printf("Value of i : %s \n",data.i);

  return 0;
}
#include<stdio.h>
#include<string.h>

int main()
{


// method 1 store the string 
//char name[20]={'A','r','z','o','o'};


 // method 2 store the string
 //char name []="arzoo';

  
/* char name;
    name="arzoo";
    printf("%c",name);
    
    */
 

// input name & mobile no 


  /* char name[20];
  char mobile[10];
  printf("enter your name : ");
  scanf("%s",&name);  // gets (name)


  printf("enter your mobile no : ");
   scanf("%s",&mobile);  // gets(mobile)

  printf("\n your name is : %s \n",name);   // puts(name)
  
  printf("your mobile no is : %s \n",mobile);  // puts(mobile)

 */


   // string length 
 
 /* 

  char str[20]="microsolution";
  printf("Length of string %d ",strlen(str));
*/

   // string campare 

  /*  char s1[20]="microsolution";
   char s2[20]="arzoo";
     if(strcmp(s1,s2)==0)
     {
    
     printf("string  1 and string 2 are equal ");
    
    }
    else {
    
    printf("string 1 and 2 are different ");
    
    
    }

     */




  // strcat function string concatination 
  
/* 

  char s1[20]="welcome to ";
   char s2[20]="micro solution ";
 strcat(s1,s2);
 printf("ouput is string after concatination : %s ",s1);
*/

// string copy is function strcpy

  /* char s1[30]="learn c programming ";
   char s2[30];
  //this functin has copied s1 into s2 
     strcpy(s2,s1);
     printf("strinf s2 is : %s",s2);   
 
*/




//  chapter of string is important function : -


/*

    strlen();
    strcpy();
    strcat();
    strcmp();
    strrev();
    strupr();
    strlwr();
    strcmpi();
    
    
    
    */
return 0;
}
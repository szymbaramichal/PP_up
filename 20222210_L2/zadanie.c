#include <stdio.h>

int main() {
    Program1();
    Program2();
    Program3();
    Program4();
    Program5();
    Program6();
    Program7();
    Program8();
}

//Dla liczby 3
int Program1() // 24
{
 int k;
 printf("podaj liczbe\n");
 scanf("%d", &k);

 while(k < 20)
   k += 7;
   printf("%d\n", k);

 return 0;
}

int Program2() // 10, 17, 24
{
 int k;
 printf("podaj liczbe\n");
 scanf("%d", &k);

 do{
   k += 7; 
   printf("%d\n", k);
 }while(k < 20);

 return 0;
}

int Program3() // 24
{
 int k;
 printf("podaj liczbe\n");
 scanf("%d", &k);

 do{
   k += 7; 
 }while(k < 20); 
   printf("%d\n", k);
 return 0;
}

int Program4() // 10, 17, 24
{
 int k;
 printf("podaj liczbe\n");
 scanf("%d", &k);

 while(k < 20){
   k += 7;
   printf("%d\n", k);
 }

 return 0;
}

int Program5() // 10, 24
{
 int k;
 printf("podaj liczbe\n");
 scanf("%d", &k);

   k += 7;
   printf("%d\n", k);
 while(k < 20)
   k += 7;
   printf("%d\n", k);

 return 0;
}


int Program6() //10, 17, 24
{
 int k;
 printf("podaj liczbe\n");
 scanf("%d", &k);

 if(k < 20)
 do{
   k += 7; 
   printf("%d\n", k);
 }while(k < 20); 

 return 0;
}



int Program7() // 10, 17, 24
{
 int k;
 printf("podaj liczbe\n");
 scanf("%d", &k);

 if(k < 20);
 do{
   k += 7; 
   printf("%d\n", k);
 }while(k < 20);

 return 0;
}


int Program8() //10, 17, 24
{
 int k;
 printf("podaj liczbe\n");
 scanf("%d", &k);

   k += 7;
   printf("%d\n", k);
 while(k < 20){
   k += 7;
   printf("%d\n", k);
 }

 return 0;
}

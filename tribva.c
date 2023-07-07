//boundary value analysis
#include <stdio.h>

int main() {
  int a,b,c,c1,c2,c3;
  printf("Enter the value of side a ");
  scanf("%d",&a);
  printf("Enter the value of side b ");
  scanf("%d",&b);
  printf("Enter the value of side c ");
  scanf("%d",&c);

  c1=a>=1 && a<=10;
  c2=b>=1 && b<=10;
  c3=c>=1 && c<=10;
  if((!c1)||(!c2)||(!c3)||(!(c1 && c2 && c3))){
    printf("value of a/b/c not in range\n");
  }
  

  if((a<b+c) && (b<a+c) && (c<a+b)){
    printf("It is a triangle ");
    if((a==b) && (b==c) && (a==b)){
      printf("\nIt is a equilateral triangle");
    }
    else if((a==b)||(b==c)||(a==c)){
      printf("\n Isoceles triangle");
    }
    else if((a!=b)||(b!=c)||(a!=c)){
      printf("\nScalene Triangle");
    }
    else{
      printf("\n invalid input");
    }
  }
  else{
      printf("\n invalid input");
}
}
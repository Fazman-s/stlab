//decision table app
#include <stdio.h>

int main() {
  int a,b,c;
  printf("Enter the value of side a ");
  scanf("%d",&a);
  printf("Enter the value of side b ");
  scanf("%d",&b);
  printf("Enter the value of side c ");
  scanf("%d",&c);

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
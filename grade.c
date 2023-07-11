#include <stdio.h>

int main() {
  float per;
  char grade;
  scanf("%f",&per);
  if(per >= 90)
    grade ='A';
  else if(per>=80 && per <90)
    grade='B';
  else if(per>=70 && per <80)
    grade='C';
  else if(per>=60 && per <70)
    grade='D';
  else grade='E';

  switch(grade){
    case 'A': printf("\n Execellent");break;
    case 'B': printf("\n Very Good");break;
    case 'C': printf("\n Good");break;
    case 'D': printf("\n Above Average");break;
    case 'E': printf("\n Satisfactory");break;
  }

  printf("\n The Percentage =%f and grade is %c :",per,grade);

  
  return 0;
}

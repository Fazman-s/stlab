#include <stdio.h>

int main() {
  int locks,stocks,barrels,tl,ts,tb;
  float lp,sp,bp,sales,comm;
  int c1,c2,c3,temp;

  lp=45;
  sp=30;
  bp=25;
  tl=0;
  ts=0;
  tb=0;

  printf("\n Enter the number of locks \n or \n Enter -1 to exit the loop\n");
  scanf("%d",&locks);

  while(locks!=-1){
    printf("Enter the number of stocks, barrels \n");
    scanf("%d %d",&stocks,&barrels);
    c1=(locks>=0 && locks<=70);
    c2=(stocks>=0 && stocks<=80);
    c3=(barrels>=0 && barrels<=90);

    if(!c1){
      printf("\n value of locks not in the range 1...70");
    }
    else{
      temp=tl+locks;
      if(temp>70)
        printf("\nnew total locks is not int range1...70");
      else
        tl=temp;
    }
    printf("\n Total locks = %d ",tl);


    if(!c2){
      printf("\n value of stocks not in the range 1...80");
    }
    else{
      temp=ts+stocks;
      if(temp>80)
        printf("\nnew total stocks is not int range1...70");
      else
        ts=temp;
    }
    printf("\n Total stocks = %d ",ts);


    if(!c3){
      printf("\n value of barrels not in the range 1...90");
    }
    else{
      temp=tb+barrels;
      if(temp>90)
        printf("\nnew total barrels is not int range1...90");
      else
        tb=temp;
    }
    printf("\n Total barrels = %d ",tb);
    printf("\n Enter the number of locks or to exit the loop enter -1 \n");
    scanf("%d",&locks);
  }  

  printf("\n Total locks = %d\n total stocks = %d \n total barrels = %d \n",tl,ts,tb);
  sales=lp*tl +sp*ts +bp*tb;
    printf("\nthe total sales=%f\n",sales);
  
  if(sales>0){
    if(sales>1800){
      comm=0.10*1000;
      comm=comm + 0.15*800;
      comm=comm + 0.20*(sales-1800);
    }
    else if(sales>1000){
       comm=0.10*1000;
       comm=comm + 0.15*800;
    }
    else{
      comm=0.10*sales;
    }
    printf("The Commission is =%f\n",comm);
  }
  else{
    printf("There is no sales\n");
  }
  return 0;
  
  
}

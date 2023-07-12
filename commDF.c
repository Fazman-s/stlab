
#include <stdio.h>
int main() {
  int locks,stocks,barrels,tlocks,tstocks,tbarrels;
  float lprice,sprice,bprice,lsales,ssales,bsales,sales,comm;
  lprice =45.0;
  sprice=30.0;
  bprice=25.0;
  tlocks=0;
  tstocks=0;
  tbarrels=0;
  printf("Enter the number of locks or -1 to exit the loop \n");
  scanf("%d",&locks);
  while(locks!=-1){
    printf("Enter the number of stocks and barrels \n");
    scanf("%d %d",&stocks,&barrels);
    tlocks = tlocks+locks;
    tstocks=tstocks+stocks;
    tbarrels=tbarrels+barrels;
    printf("Enter the number of locks or -1 to exit the loop \n ");
    scanf("%d",&locks);
  }
  printf("\nTotal locks = %d",tlocks);
  printf("\nTotal stocks = %d",tstocks);
  printf("\nTotal barrels = %d",tbarrels);
  lsales = lprice*tlocks;
  ssales = sprice*tstocks;
  bsales= bprice*tbarrels;
  sales =lsales +ssales+bsales;
  printf("\n Total sales =%f :",sales);
  if(sales >1800){
    comm = 0.10*1000;
    comm = comm+ 0.15*800;
    comm=comm + 0.20*(sales -1800);
  }
  else if(sales >1000)
  {
    comm = 0.10*1000;
    comm=comm+0.15*(sales -1000);
  }
  else
    comm=0.10*sales;
  printf("\nThe commission = %f",comm);
  return 0;
}

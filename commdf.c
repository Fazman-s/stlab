//Dataflow Testing for commission calculation)
#include<stdio.h>
int main()
{
int locks, stocks, barrels, tlocks, tstocks, tbarrels;
float lprice,sprice,bprice,lsales,ssales,bsales,sales,comm;
lprice=45.0;
sprice=30.0;
bprice=25.0;
tlocks=0;
tstocks=0;
tbarrels=0;
printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");

scanf("%d", &locks);
while(locks!=-1) {
printf("enter the number of stocks and barrels\n");

scanf("%d%d",&stocks,&barrels);

tlocks=tlocks+locks;
tstocks=tstocks+stocks;
tbarrels=btarrels+barrels;
printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");
scanf("%d",&locks);
}
printf("\ntotal locks = %d\n",tlocks);
printf("total stocks =%d\n",tstocks);
printf("total barrels =%d\n",tbarrels);
lsales = lprice*tlocks;
ssales=sprice*tstocks;
bsales=bprice*tbarrels;
sales=lsales+ssales+bsales;
printf("\nthe total sales=%f\n",sales);
if(sales > 1800.0)
{
comm=0.10*1000.0;
comm=comm+0.15*800;
comm=comm+0.20*(sales-1800.0);

}

else if(sales > 1000)
{
comm =0.10*1000;
comm=comm+0.15*(sales-1000);

}
else//38
comm=0.10*sales;//39
printf("the commission is=%f\n",comm);//40
return 0; //41
} //42

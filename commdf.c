//Dataflow Testing for commission calculation)//1
#include<stdio.h>//2
int main()//3
{//4
int locks, stocks, barrels, tlocks, tstocks, tbarrels;//5
float lprice,sprice,bprice,lsales,ssales,bsales,sales,comm;//6
lprice=45.0;//7
sprice=30.0;//8
bprice=25.0;//9
tlocks=0;//10
tstocks=0;//11
tbarrels=0;//12
printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");//13

scanf("%d", &locks);
while(locks!=-1) {//14
printf("enter the number of stocks and barrels\n");//15

scanf("%d%d",&stocks,&barrels);

tlocks=tlocks+locks;//16
tstocks=tstocks+stocks;//17
tbarrels=btarrels+barrels;//18
printf("\nenter the number of locks and to exit the loop enter -1 for locks\n");//19
scanf("%d",&locks);
}//20
printf("\ntotal locks = %d\n",tlocks);//21
printf("total stocks =%d\n",tstocks);//22
printf("total barrels =%d\n",tbarrels);//23
lsales = lprice*tlocks;//24
ssales=sprice*tstocks;//25
bsales=bprice*tbarrels;//26
sales=lsales+ssales+bsales;//27
printf("\nthe total sales=%f\n",sales);//28
if(sales > 1800.0)//29
{//30
comm=0.10*1000.0;//32
comm=comm+0.15*800;//32
comm=comm+0.20*(sales-1800.0);//33

}

else if(sales > 1000)//34
{//35
comm =0.10*1000;//36
comm=comm+0.15*(sales-1000);//37

}
else//38
comm=0.10*sales;//39
printf("the commission is=%f\n",comm);//40
return 0; //41
} //42
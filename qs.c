#include<stdio.h>
void quicksort(int x[10],int first,int last)
{
    int temp,pivot,i,j;
    if(first<last)
    {
        pivot=first;
        i=first;
        j=last;
        while(i<j)
        {
          while(x[i]<=x[pivot] && i<last)
            i++;
          while(x[j]>x[pivot])
            j--;
           if(i<j)
           {
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;

           }
        }
     temp=x[pivot];
     x[pivot]=x[j];
     x[j]=temp;
     quicksort(x,first,j-1);
     quicksort(x,j+1,last);
    }
}

int main()
{
    int a[20],i,key,n;
    printf("enter the size of the array");
    scanf("%d",&n);
    if(n>0)
    {
        printf("enter the elements of the array");
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        quicksort(a,0,n-1);
        printf("the elements in the sorted array is:\n");

        for(i=0;i<n;i++)
             printf("%d\t",a[i]);
    }
    else
    {
          printf(“size of array is invalid\n”);
    }

void quicksort(int x[10],int first,int last)
{
    int temp,pivot,i,j;// 1
      if(first<last)// 2
       {
         pivot=first;// 3
         i=first;// 4
         j=last; //5
         while(i<j)// 6
         {
          while(x[i]<=x[pivot] && i<last)/// 7
             i++; //8
             while(x[j]>x[pivot])// 9
             j--;// 10
             if(i<j)  //11
             {
              temp=x[i];// 12
              x[i]=x[j]; //13
              x[j]=temp;// 14
             }
         }
         temp=x[pivot]; //15
         x[pivot]=x[j]; //16
         x[j]=temp; //17
         quicksort(x,first,j-1); //18
         quicksort(x,j+1,last);// 19
        }
}     //20

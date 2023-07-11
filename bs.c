#include <stdio.h>

int binsrc(int x[],int low,int high,int key){
  int mid;
  while(low<=high){
    mid =(low+high)/2;
    if(x[mid] == key){
      return mid;
    }
    if(x[mid] < key){
      low = mid +1;
      
    }else high = mid-1;
  }
  return -1;
}

int main(void) {
   int a[20],n,i,key,succ;
  printf("Enter the number of elements to entered \n");
  scanf("%d",&n);

  printf("Enter the elements in ascending order : \t");
  for(int i=0;i<n;i++){
    scanf("%d",&a[i]);
  }

  printf("\nEnter the key element to searched : \t");
  scanf("%d",&key);

  succ=binsrc(a,0,n-1,key);
  if(succ >= 0)
    printf("\n The key element found at position = %d\n",succ+1);
  else
    printf("\n Key element not found ");
  
  if(succ < 0){ 
  printf("\nNumber of element must be greater than 0");
  }
  

}

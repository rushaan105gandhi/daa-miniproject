#include <stdio.h>
int main(){
    int n;
    int i=1;
  int arr[] = {2,3,5,7,11,13,17,19,23,29,31,37,43,47};
  printf("Enter the numner of testcases");
  scanf("%d",&n);
  for (i = 1;i<=n;i++)
  {
    scanf("%d",&i);
  }
  for (i = 1;i<=n;i++)
  {
    printf("%d\n",arr[i]);
  }
  
  
return 0;
}
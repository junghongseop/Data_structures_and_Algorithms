// gap/2에서 짝수가 나오면 +1 시켜서 홀수로 만들거임 
// gap이 1이 될때까지 계속 실행
// 쉘 정렬시키고 나온 리스트는 삽입정렬을 사용해서 정렬 
 
#include <stdio.h>

void insertsort(int list[], int first, int last, int gap){
   int i, j, key;
   for(i=first+gap; i<=last; i=i+gap){
      key=list[i];
      for(j=i-gap; j>=first && key<list[j]; j=j-gap)
         list[j+gap]=list[j];
      list[j+gap]=key;
   } 
}
int main()
{
    int list[]={10,8,6,20,4,3,22,1,0,15,16};
    int i, j, gap, n; 
    n=sizeof(list)/sizeof(int);
    
      for(gap=n/2; gap>0; gap=gap/2)
      {
         if((gap%2)==0) gap++;
         for(i=0; i<gap; i++)
            insertsort(list,i,n-1, gap);
      } 
   for(i=0; i<n; i++){
      printf("%d ", list[i]);
   }
    return 0;
    
}
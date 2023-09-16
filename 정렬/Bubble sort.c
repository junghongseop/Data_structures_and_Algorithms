#include <stdio.h>
	
int main() {
    int list[] = {5, 3, 8, 1, 2, 7};
    int n, temp;
    n = sizeof(list) / sizeof(int);
    
    for(int i = 0; i<n; i++){
    	for(int j=0; j<i; j++){
    		if(list[j]>list[j+1]){
    			temp = list[j];
    			list[j] = list[j+1];
    			list[j+1] = temp;
			}
		}
		for (int k = 0; k < n; k++)
        	printf("%d ", list[k]);
        printf("\n");
	}
	/*for (int i = 0; i < n; i++) {
     	   printf("%d ", list[i]);
    }
	*/
    return 0;
}
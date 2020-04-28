#include <stdio.h>

int main(){
	int i,j,n1,n2,count=0,largest=0,x=1,d1,d2;
  
  printf("Enter length and width: );
	scanf("%d %d",&n1,&n2);
	int arr[n1][n2];

	for(i=0;i<n1;i++)
		for(j=0;j<n2;j++)
			scanf("%d",&arr[i][j]);

	for(i=1;i<n1-1;i++){
		count=0;
        for(j=1;j<n2-1;j++){
        	if(arr[i][j] == arr[i-x][j] && arr[i][j] == arr[i][j-x]  && arr[i][j] == arr[i+x][j] && arr[i][j] == arr[i][j+x]){
        		count++;
				while(arr[i-x][j] ==arr[i-(++x)][j] && arr[i][j-x] == arr[i][j-(++x)] &&  arr[i+x][j] == arr[i+(++x)][j] && arr[i][j+x] == arr[i][j+(++x)])
					count++;
			}
		if(count>largest){
				largest = count;
				d1 = i;
				d2 = j;
			}
		}

    }
    printf("%d %d", d1,d2);

	return 0;
}

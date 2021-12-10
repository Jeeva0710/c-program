#include<stdio.h>
int main(){
int n,flag=0,i;
scanf("%d",&n);

for(i=2;i<n;i++){
	if(n%i==0){
		flag++;
		break;
		
	}
}
if(flag==0){
	printf("prime number");
}
else{
	printf("not a prime number");
}

	return 0;
}

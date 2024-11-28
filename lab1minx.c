#include <stdio.h>

int main(){
	int n1;
	int n2;
	
	scanf("%d",&n1);
	scanf("%d",&n2);	
	if(n1 > n2){
		int total = n1 - n2;
		printf("Number 1 more than Number 2 = %d" ,  total );		
	}else{
		int total = n2 - n1;
		printf("Number 2 more than Number 1 = %d" ,  total );
	}
}


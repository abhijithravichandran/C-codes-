#include<stdio.h>

int prime(int a);
int prime(int a){
	int i=2;
	int count=0;
	while(i<a){
		if(a%i==0){
			count=1;
			break;
		}
		else{
			count=0;
	}
        i++;
    }
	if(count==0){
		printf("%d\n",i);
	
	}
	return 0;

}
int main(){
    int a=2,b=10;
	printf("The prime numbers between %d and %d are\n",a,b);
    range(a,b); // Just call the range and the prime numbers bt the intervels will be given
    return 0;
}
int range(int a,int b){
    int range=0;
    int i=a;
    while(a<=i && i<=b){
        range=i;
        prime(i);
        i++;
    }
}
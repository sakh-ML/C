#include <stdio.h>

#define MAX_SIZE 100


long long fib_n(int n){

	if(n <= 0){
		return -1;
	}

	if(n == 1){
		return 0;
	}

	if(n == 2){
		return 1;
	}

	long long numbers[n + 1];
	numbers[0] = 0;
	numbers[1] = 1;

	for(int i = 2; i <= n; ++i){
	numbers[i] = numbers[i - 1] + numbers[i - 2];
	}

	return numbers[n];

}


int main(){

	int n;
	printf("Which fib u need: ");

	scanf("%d", &n);

	printf("Fib %d : %lld ", n,fib_n(n));


	return 0;
}

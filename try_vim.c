#include <stdio.h>

void print_n_mal_hello(int n){
	while(n > 0){
		printf("Hello \n");
		--n;
	}
}

int add_a_with_b(int a, int b){
	return a + b;
}

int find_max(int* array, int size){
	int max = array[0];
	for(int i = 1; i < size; ++i){
		if(array[i] > max){
			max = array[i];
		}	
	}

	return max;
}

int main(){

int array1[] = {5,3,1,2,7,10,11,4,5};
int max = find_max(array1, 9);
printf("The max of the array is: %d", max);

printf("Hello from vim ! ");
print_n_mal_hello(5);
printf("3 + 5 = %d", add_a_with_b(3,5));

return 0;

}

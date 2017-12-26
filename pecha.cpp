#include<cstdio>

int main(){
	int m;
	scanf("Please specify count value: %d", &m);
	for(int i = 1; i <= 10; i++){
		printf("%d * %d = %d \n", m, i, (m*i));
	}
	return 0;
}
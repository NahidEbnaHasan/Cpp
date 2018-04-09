#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>

int main(){
	freopen("plus_minus.in", "r", stdin);
	int n, num;
	std::cin>>n;
	int arr[n];
	double plus_minus_zeros[3] = {0.0, 0.0, 0.0};
	for(int i = 0; i < n; i++){
		std::cin>>num;
		if(num > 0){
			plus_minus_zeros[0] += 1;
		}else if(num < 0){
			plus_minus_zeros[1] += 1;
		}else{
			plus_minus_zeros[2] += 1;
		}
	}
	printf("%.6lf\n", (plus_minus_zeros[0] / n));
	printf("%.6lf\n", (plus_minus_zeros[1] / n));
	printf("%.6lf\n", (plus_minus_zeros[2] / n));
	return 0;
}
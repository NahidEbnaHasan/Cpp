#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>

int main(){
	freopen("min_max_sum.in", "r", stdin);
	long long n, arr[5], total = 0, sum_arr[5];
	for(int i = 0; i < 5; i++){
		std::cin>>n;
		arr[i] = n;
		total += n;
	}
	// std::cout<<total<<std::endl;
	for(int i = 0; i < 5; i++){
		sum_arr[i] = (total - arr[i]);
		// std::cout<<sum_arr[i]<<" ";
	}
	// std::cout<<std::endl;
	std::sort(sum_arr, sum_arr + 5);
	std::cout<<sum_arr[0]<<" "<<sum_arr[4]<<std::endl;
	return 0;
}
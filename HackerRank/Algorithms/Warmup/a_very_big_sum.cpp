#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>

int main(){
	freopen("a_very_big_sum.txt", "r", stdin);
	int n;
	long long num, sum = 0;
	std::cin>>n;
	while(n--){
		std::cin>>num;
		sum += num;
	}
	std::cout<<sum<<std::endl;
	return 0;
}
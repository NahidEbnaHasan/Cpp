#include <iostream>

int main(){
	int nums, num, sum = 0;
	std::cin>>nums;
	while(nums--){
		std::cin>>num;
		sum += num;
	}
	std::cout<<sum<<std::endl;
	return 0;
}

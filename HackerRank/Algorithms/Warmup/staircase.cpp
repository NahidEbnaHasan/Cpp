#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>

int main(){
	// freopen("plus_minus.in", "r", stdin);
	int n;
	std::cin>>n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j >= ((n - 1) - i)){
				std::cout<<"#";
			}else{
				std::cout<<" ";
			}
		}
		std::cout<<std::endl;
	}
	return 0;
}
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>

int main(){
	freopen("birthday_cake_candles.in", "r", stdin);
	int n, max_height = 0, count = 1;
	std::cin>>n;
	int candle_heights[n];
	for(int i = 0; i < n; i++){
		std::cin>>n;
		// std::cout<<n<<" "<<max_height<<std::endl;
		candle_heights[i] = n;
	}
	for (int i = 0; i < n; i++){
		if(candle_heights[i] > max_height){
			max_height = candle_heights[i];
			std::cout<<"MAX HEIGHT: "<<max_height<<std::endl;
			count = 1;
			std::cout<<"COUNT: "<<count<<std::endl;
			// count++;
		}else if(candle_heights[i] == max_height){
			count++;
			std::cout<<"COUNT: "<<count<<std::endl;
		}
	}
	std::cout<<count<<std::endl;
	return 0;
}
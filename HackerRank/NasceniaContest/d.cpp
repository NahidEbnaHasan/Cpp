#include <iostream>
#include <cmath>
#include <cstdio>

int main(){
	freopen("in.txt","r",stdin);
	std::string s;
	std::cin>>s;
	int len = s.size();
	int r = floor(sqrt(len));
	int c = ceil(sqrt(len));
	if(r * c < len){
		for(int i = r; (r*c) <= len; i++){
			r = i;
		}
		// std::cout<<r<<std::endl;
	}
	std::string res = "";
	char arr[r][c];
	int cx = 0;
	for(int i = 0; i< r; i++){
		for(int j = 0; j < c; j++){
			arr[i][j] = s[cx++];
		}
	}
	int count = 1;
	for(int j = 0; j < c; j++){
		for(int i = 0; i < r; i++){
			if(arr[i][j]){
				std::cout<<arr[i][j];
			}
		}
		if (count < c) {
		  std::cout<<" ";
		  count++;	
		}	
	}
	std::cout<<std::endl;
}
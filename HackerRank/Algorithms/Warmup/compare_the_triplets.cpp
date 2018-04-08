#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <sstream>
#include <iterator>
// #include <bits/stdc++.h>

int* compare_result(int triplets_alice[], int triplets_bob[], int res[]){
	// int res[] = {0, 0};
	for(int i = 0; i < 3; i++){
		// std::cout<<triplets_alice[i]<< " alice : bob " << triplets_bob[i]<<std::endl;
		if(triplets_alice[i] > triplets_bob[i]){
			res[0] += 1;
		}else if(triplets_alice[i] < triplets_bob[i]){
			res[1] += 1;
		}
	}
	return res;
}

int main(){
	freopen("comp_triplets.txt", "r", stdin);
	int triplets_alice[3];
	int triplets_bob[3];
	int result[2] = {0, 0}; 
	int a, b, c;
	std::cin>>a>>b>>c;
	triplets_alice[0] = a; triplets_alice[1] = b; triplets_alice[2] = c;
	std::cin>>a>>b>>c;
	triplets_bob[0] = a;triplets_bob[1] = b;triplets_bob[2] = c;
	compare_result(triplets_alice, triplets_bob, result);
	std::cout<<result[0]<<" "<<result[1]<<std::endl;
	return 0;
}
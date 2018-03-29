#include <iostream>
#include <cstdio>
// #include <map>
#include <algorithm>


int main(){
	// freopen("in.txt","r",stdin);
	int n, k, v;
	int arr[100001];
	std::cin>>n;
	std::cin>>k;
	for(int i = 0; i < n; i++){
		std::cin>>v;
		arr[i] = v;
	}
	std::sort(arr, arr + n);
	// std::cout<<arr[k-1] - arr[0]<<std::endl;
	int m, min = 1000000001;
	if(n == k){
		min = arr[n - 1] - arr[0];
	}else{
		for(int i = 0; i < (n - (k - 1)); i++){
			m = arr[i + (k - 1)] - arr[i];
			if(m < min){
				min = m;
			}
		}
	}
	std::cout<<min<<std::endl;
	return 0;
}

/*
CRITICAL TEST CASES:
2
2
0
0

4
2
0
100
100
100

4
2
0
0
1
6


/*int main(){
	// freopen("in.txt","r",stdin);
	int n,k,v;
	std::map<int, int> arr;
	std::cin>>n;
	std::cin>>k;
	for(int i = 0; i < n; i++){
		std::cin>>v;
		arr[v] = v;
	}
	int cx = 0, max, min;
	for(std::map<int, int>::iterator it = arr.begin(); cx < k; ++it, ++cx){
		// std::cout<<it->second<<std::endl;
		if(cx == 0){
			min = it->second;
			// std::cout<<"MIN: "<<it->second<<std::endl;
		}
		// if((k-1) == cx){
			// std::cout<<"MAX: "<<it->second<<std::endl;
			max = it->second;
			// break;
		// }
	}
	std::cout<<max-min<<std::endl;
	return 0;
}*/
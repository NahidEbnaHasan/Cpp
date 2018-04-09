#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>

int main(){
	freopen("diagonal_diff.in", "r", stdin);
	int n,m;
	std::cin>>n;
	int matrix[n][n];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			std::cin>>m;
			matrix[i][j] = m;
		}	
	}
	int diag_sum[2] = {0, 0};
	for(int i = 0, j = i, k = (n - 1), l = i; i < n; i++, j++, k--, l++){
		diag_sum[0] += matrix[i][j];
		diag_sum[1] += matrix[k][l];
		// std::cout<<i<<" i : j "<<j<<std::endl;
		// std::cout<<k<<" k : l "<<l<<std::endl;
	}
	std::cout<<std::abs(diag_sum[0] - diag_sum[1])<<std::endl;
	return 0;
}
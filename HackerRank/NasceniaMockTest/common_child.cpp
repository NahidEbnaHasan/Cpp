// #include <bits/stdc++.h>
#include <iostream>
#include <cstring>

int max(int a, int b){
	return (a > b) ? a : b; 
}

// recursive get time limit exceed
int LCS_R(std::string m, std::string n, int i, int j){
	if(i == 0 || j == 0){
		return 0;
	}else if(m[i-1] == n[j-1]){
		return 1 + LCS_R(m, n, i-1, j-1);
	}else{
		return max(LCS_R(m, n, i-1, j), LCS_R(m, n, i, j-1));
	}
}

// DP
int LCS_DP(std::string m, std::string n, int x, int y){
	int L[x+1][y+1];
	for(int i = 0; i <= x; i++){
		for(int j = 0; j <= y; j++){
			if(i == 0 || j == 0){
				L[i][j] = 0;
			}else if(m[i-1] == n[j-1]){
				L[i][j] = L[i-1][j-1] + 1;
			}else{
				L[i][j] = max(L[i-1][j], L[i][j-1]);
			}
		}
	}
	return L[x][y];
}

int main(){
	freopen("in.txt","r",stdin);
	std::string m,n;
	std::cin>>m;
	std::cin>>n;
	// std::cout<<m<<m.size()<<" "<<n<<n.size()<<std::endl;
	std::cout<<LCS_DP(m, n , m.size(), n.size())<<std::endl;
}
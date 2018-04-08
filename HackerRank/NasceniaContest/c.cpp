#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <cstring>
// #define MAX 1000
#define MAX 1000001

int dp[MAX];
bool prime[MAX];

void SieveOfEratosthenes(){
    // Create a boolean array "prime[0..n]" and initialize
    // all entries it as true. A value in prime[i] will
    // finally be false if i is Not a prime, else true.
    memset(prime, true, sizeof(prime));
 
    for (int p=2; p*p <= MAX; p++){
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true){
            // Update all multiples of p
            for (int i=p*2; i<= MAX; i += p)
                prime[i] = false;
        }
    }
 
    // Print all prime numbers
    // for (int p=2; p<=n; p++)
    //    if (prime[p])
    //       cout << p << " ";
}


int main(){
	SieveOfEratosthenes();
	dp[0] = 0;
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	dp[4] = 3;
	dp[5] = 4;
	for(int i = 6; i < MAX; i++){
		if(prime[i]){
			dp[i] = dp[i-1] + 1;
		}else{
			int _sqrt = ceil(sqrt(i));
			// bool flag = false;
			// std::cout<<i<<" : "<<_sqrt<<std::endl;
			int max_move = i;
			for(int j = 2; j <= _sqrt; j++){
				if(i%j == 0){
					int max_f = i/j;
					if(dp[max_f] + 1 < max_move){
						// std::cout<<i<<" : "<<_sqrt<<std::endl;
						max_move = dp[max_f] + 1;
						// dp[i] = max_move;
						// flag = true;
						// break;
					}
				}
			}
			dp[i] = max_move;
		}
	}
	// for(int i = 0; i < MAX; i++){
	// 	std::cout<<dp[i]<<" ";
	// }

	freopen("in.txt","r",stdin);
	int q, n;
	std::cin>>q;
	while(q--){
		std::cin>>n;
		std::cout<<dp[n]<<std::endl;
	}
	return 0;
}
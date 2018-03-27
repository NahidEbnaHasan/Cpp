#include <iostream>
#include <cstdio>

void process_grade(int m){
	int temp = m % 5;
	// std::cout<<"TEMP: "<<temp<<std::endl;
	int temp1 = 5 - temp;
	// std::cout<<"TEMP1: "<<temp1<<std::endl;
	if(m < 38){
		std::cout<<m<<std::endl;
	}else if(3 > temp1){
		std::cout<<m + temp1<<std::endl;
	}else{
		std::cout<<m<<std::endl;
	}
}

int main(){
	//freopen("in.txt","r",stdin);
	int n, mark;
	std::cin>>n;
	for(int i = 0; i< n; i++){
		std::cin>>mark;
		process_grade(mark);
	}
	return 0;
}
#include <iostream>
#include <map>
#include <cstdio>

std::string func(int h, int m){
	std::string hours[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve"};
	std::string mins[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten",
	                      "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen", "twenty",
	                      "twenty one", "twenty two", "twenty three", "twenty four", "twenty five", "twenty six", 
	                      "twenty seven", "twenty eight", "twenty nine"};

	std::map<int, std::string> my_map;
	my_map[0] = " o' clock";
	my_map[15] = "quarter past ";
	my_map[30] = "half past ";
	my_map[45] = "quarter to ";

	if(m == 0){
		return hours[h-1] + my_map[0];
	}else if(m==15 || m==30 || m==45){
		if(m <= 30){
			return my_map[m] + hours[h-1];
		}else{
			return my_map[m] + hours[h];
		}
	}else{
		if(m <= 30){
			// std::cout<<"HELLO"<<m<<std::endl;
			if(mins[m-1] == "one"){
				return mins[m-1] + " minute past " + hours[h-1]; 	
			}else{
				return mins[m-1] + " minutes past " + hours[h-1]; 
			}
		}else{
			if(mins[59-m] == "one"){
				// std::cout<<"HELLO"<<hours[h]<<std::endl;
				// std::cout<<"HELLO"<<h<<std::endl;
				if(h == 12)
					h = 0;
				return mins[59-m] + " minute to " + hours[h];	
			}else{
				return mins[59-m] + " minutes to " + hours[h];
			}
		}
	}
}

int main(){
	freopen("in.txt","r",stdin);
	int m,h;
	// while()
	std::cin>>h;
	std::cin>>m;
	std::cout<<func(h,m)<<std::endl;
	return 0;
}
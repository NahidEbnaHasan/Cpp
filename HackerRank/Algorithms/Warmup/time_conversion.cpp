#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <sstream>
#include <iterator>
#include <vector>
#include <string>

/*template <class Container>
void split(const std::string& str, Container& cont, char delim = ' '){
    std::stringstream ss(str);
    std::string token;
    while (std::getline(ss, token, delim)) {
        cont.push_back(token);
    }
}*/

std::string timeConversion(std::string str){
	std::vector<std::string> v;
	std::stringstream ss(str);
    std::string token;
    char delim = ':';
    while (std::getline(ss, token, delim)) {
        v.push_back(token);
    }
    int h_12 = std::atoi(v[0].c_str()), h_24;
    std::string meridien = v[2].substr(2, 2);
    // std::cout<<meridien<<std::endl;
    if(meridien == "PM"){
    	if(h_12 < 12){
    		h_24 = 12 + h_12;
    	}else{
    		h_24 = h_12;
    	}
    }else{
    	if(h_12 == 12){
    		h_24 = 0;
    	}else{
    		h_24 = h_12;
    	}
    }
    std::stringstream ss_h_24;
    ss_h_24 << h_24;
    v[0] = h_24 < 10 ? "0" + ss_h_24.str() : ss_h_24.str();
    return v[0] + ":" + v[1] + ":" + v[2].substr(0, 2);
}

int main(){
	// freopen("time_conversion.in", "r", stdin);
	std::string s;
	getline(std::cin, s);
	std::string res = timeConversion(s);
	std::cout<<res<<std::endl;
	/*while(getline(std::cin, s)){
		std::string res = timeConversion(s);
		std::cout<<res<<std::endl;
	}*/
	return 0;
}
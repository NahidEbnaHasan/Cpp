#include <iostream>
#include <cstdio>
#include <map>
#include <vector>

int main(){
  freopen("4d.in", "r", stdin);
  // freopen("4d.out","w",stdout);
  // map<int,int> index;
  int noe, ch, cw;
  while(scanf("%d %d %d", &noe, &ch, &cw) == 3){
    int e[5001][2];
    int index = 0, maxChain = 0, b , c, arrSize = 0;
    std::map<int, std::vector<int> > m;
    for(int i = 0; i < noe; i++){
      scanf("%d %d", &b, &c);
      if(m.find(b * c) == m.end()){
        if(b > ch && c > cw){
          std::vector<int> v;
          v.push_back(b);v.push_back(c);v.push_back(0);
          m[b * c] = v;
          e[arrSize][0] = b; e[arrSize][1] = c;
          ++arrSize;
        }
      }
    }
    // std::cout<<"--- E VALUES: "<<e[0][0]<<" "<<e[0][1]<<std::endl;
    // std::cout<<"--- M VALUES 0: "<<m[e[0][0] * e[0][1]][0]<<std::endl;
    // std::cout<<"--- M VALUES 1: "<<m[e[0][0] * e[0][1]][1]<<std::endl;
    // std::cout<<"--- M VALUES 2: "<<m[e[0][0] * e[0][1]][2]<<std::endl;
    index = 0;
    for(std::map<int, std::vector<int> >::iterator it = m.begin(); it != m.end(); ++it){
      it->second[2] = ++index;
    }
    maxChain = index;
    // std::cout <<maxChain<< std::endl;
    printf("%d\n", maxChain);
    if(maxChain > 0){
      for(int i = 0; i < arrSize; i++){
        if((arrSize - 1) == i){
          // std::cout<<m[e[i][0] * e[i][1]][2]<<std::endl;
          printf("%d\n", m[e[i][0] * e[i][1]][2]);
        }else{
          // std::cout<<m[e[i][0] * e[i][1]][2]<<" ";
          printf("%d ", m[e[i][0] * e[i][1]][2]);
        }
      }
    }
  }
  return 0;
}

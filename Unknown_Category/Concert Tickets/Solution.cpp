#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <set>
typedef long long ll;

int main(){
    std::ios::sync_with_stdio(0);
	std::cin.tie(0);
    int n,m,temp;
    std::cin>>n>>m;
    std::multiset<int> Tickets;
 
    
    for(int i = 0 ; i < n; ++i){
        std::cin>>temp;
        Tickets.insert(temp);
    }
    
    for(int i = 0 ; i < m ; ++i){
        std::cin>>temp;
        auto it = Tickets.upper_bound(temp);
        if(it == Tickets.begin() ){
            std::cout<<"-1"<<'\n';
            continue;
        }
        
        std::cout<<*(--it)<<'\n';
        Tickets.erase(it);
        
    }
  
    return 0;
}
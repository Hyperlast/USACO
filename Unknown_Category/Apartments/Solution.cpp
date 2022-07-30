#include <iostream>
#include <map>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>

typedef long long ll;

int main(){
    std::ios_base::sync_with_stdio(false);
	std::cin.tie(nullptr);
    int n,m,k;
    std::cin>>n>>m>>k;
    std::vector<int> Owners;
    std::vector<int> Apartments;
    int temp;
    for(int i = 0 ;i < n; ++i){
        std::cin>>temp;
        Owners.push_back(temp);
    }
    
    for(int i = 0 ;i < m; ++i){
        std::cin>>temp;
        Apartments.push_back(temp);
    }

    sort(Owners.begin(), Owners.end());
    sort(Apartments.begin(), Apartments.end());

    int AP_IDX=0;
    int OW_IDX=0;
    temp=0;
    
    while(AP_IDX<m && OW_IDX<n){
        if(abs(Owners[OW_IDX]-Apartments[AP_IDX])<=k){
            AP_IDX++;
            OW_IDX++;
            temp++;
            continue;
        }
        if(Owners[OW_IDX] - Apartments[AP_IDX] > k){
            AP_IDX++;
            continue;
        }

        OW_IDX++;
    }
    std::cout<<temp;

    return 0;
}
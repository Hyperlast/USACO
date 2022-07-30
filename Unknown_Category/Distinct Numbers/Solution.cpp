#include <iostream>
#include <set>
#include <vector>
#include <string>

typedef long long ll;

int main(){
    std::set<ll> set;
    int Input_N;
    std::cin>>Input_N;
    int temp;
    while(Input_N){
        std::cin>>temp;
        set.insert(temp);
        Input_N--;
    }

    temp = set.size();

    std::cout << temp<<'\n';
    return 0;
}
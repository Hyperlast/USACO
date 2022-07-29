#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>
#include <string>
#include <queue>
#include <algorithm>
#include <set>

void mySwap(int* a, int* b){  
    int  temp = *a;
    *a = *b;
    *b = temp; 
}

void Solution(){
    int X1;
    int X2;
    int Y1;
    int Y2;
    std::cin >> X1 >> X2 >> Y1 >> Y2;

    // X1 AND Y2 < X2 AND Y2 RESPECTIVELY
    
    if(X1>X2) mySwap(&X1,&X2);
    if(Y1>Y2) mySwap(&Y1,&Y2);
    
}

int main(){
    Solution();
    return 0;
}
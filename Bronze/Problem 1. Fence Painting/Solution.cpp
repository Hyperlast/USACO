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
    // 0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24
    // CASE1        Y1 X1 X2 Y2              => Y2-Y1 
    // CASE2        Y1 X1 Y2 X2              => X2-Y1
    // CASE3        Y1 Y2 X1 X2              => (Y2 - Y1) + (X2 - X1)
    // CASE4        X1 Y1 Y2 X2              => X2-X1
    // CASE5        X1 Y1 X2 Y2              => Y2-X1
    // CASE6        X1 X2 Y1 Y2              => (Y2 - Y1) + (X2 - X1) 
    //         
    //         CASES FOR X1,X2,Y1,Y2 (X1<X2 AND Y1<Y2)
    // - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
    // 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 
    //   
    if(X1>X2) mySwap(&X1,&X2);
    if(Y1>Y2) mySwap(&Y1,&Y2);

    if(Y1 <= X1 && X2 <= Y2){ std::cout << (Y2 - Y1) << "\n"; return;}// CASE1
    if(Y1 <= X1 && X1 <= Y2 && Y2 <= X2){ std::cout << (X2 - Y1) << "\n"; return;}// CASE2
    if(Y2 <= X1){ std::cout << ((Y2 - Y1) + (X2 - X1)) << "\n"; return;}// CASE3
    if(X1 <= Y1 && Y2 <= X2){ std::cout << (X2 - X1) << "\n"; return;}// CASE4 
    if(X1 <= Y1 && Y1 <= X2 && X2 <= Y1){ std::cout << (Y2 - X1) << "\n"; return;}//CASE5
    if(X2 <= Y1){ std::cout << ((Y2 - Y1) + (X2 - X1)) << "\n"; return;}//CASE6
    
}

int main(){
    Solution();
    return 0;
}
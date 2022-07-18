/**
 * @file watermelon.cpp
 * @author Priyanshu Sahu (github.com/Priyanshu-Sahu)
 * @brief Problem picked from codeforces; Refer README.md file for references and Logic explaination  
 * @version 0.1
 * @date 2022-07-19
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include<iostream>
using namespace std;

bool check(int n){
    return (n<=2?false:(n%2==0?true:false));
}

int main(){
    int w;
    cin>>w;
    cout<<(check(w-2)?"YES": "NO");
    return 0;
} 
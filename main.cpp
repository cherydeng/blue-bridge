//
//  辗转相除法.cpp
//  blue bridge
//
//  Created by 邓瑞 on 2020/10/14.
//  Copyright © 2020 邓瑞. All rights reserved.
//

/*
*  辗转相除法
*/
#include <iostream>
using namespace std;
int gcd(int a,int b){
   if(b==0)
       return a;
   return gcd(b, a%b);
}
int main(){
   int a,b;
   cin>>a>>b;
   cout<<gcd(a,b)<<endl;
   return 0;
}

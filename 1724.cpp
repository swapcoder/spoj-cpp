//
//  1724.cpp
//  
//
//  Created by Haijun Deng on 12-12-24.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int tN,n,i,j,r;
    cin>>tN;
    vector<int> ls;
    for(i=0;i<tN;i++)
    {
        cin>>n;
        ls.push_back(n);
    }
    for(i=0;i<tN;i++)
    {
        n=ls[i];
        r=n*(n+2)*(2*n+1)/8;
        cout<<r<<endl;
    }
    return 0;
}

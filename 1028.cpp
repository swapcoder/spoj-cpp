//
//  1028.cpp
//  
//
//  Created by Haijun Deng on 13-1-16.
//  Copyright (c) 2013年 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int i,tN;
    scanf("%d", &tN);
    vector<int> ns(tN);
    vector<int> ss(tN);
    for(i=0;i<tN;i++)
    {
        scanf("%d %d", &ns[i], &ss[i]);
    }
    for(i=0;i<tN;i++)
    {
        if(ss[i]==0)
            printf("Airborne wins.\n");
        else
            printf("Pagfloyd wins.\n");
    }
    return 0;
}
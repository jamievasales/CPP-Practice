#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> theArray;
     map<int,int> theMap;
     int num;
    while(cin>>num) {
        if(!num)
        break;

        theArray.push_back(num);
    }
    cin.clear();
    cin.ignore();
    cin>>num;
    for(int x=0;x<theArray.size();x++) {
        int needed = num - theArray[x];
        if(theMap.count(needed)>0)
            cout<<theMap.find(needed)->second<<" "<<x;
        else
        theMap.insert(pair<int,int>(theArray[x],x));
    }

    return 0;
}
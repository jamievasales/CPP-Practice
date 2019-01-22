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
     cout<<"Please enter numbers (hitting enter with each number) and terminating with a non-numeric key"<<endl;
    while(cin>>num) {
        if(!num)
        break;

        theArray.push_back(num);
    }
    cin.clear();
    cin.ignore();
    cout<<"Please enter your target sum (the first indexs will be returned)"<<endl;
    cin>>num;
    for(int x=0;x<theArray.size();x++) {
        int needed = num - theArray[x];
        if(theMap.count(needed)>0) {
            cout<<"the sum of the target is found at index "<<theMap.find(needed)->second<<" and "<<x<<endl;
            break;
        }
        else
        theMap.insert(pair<int,int>(theArray[x],x));
    }

    return 0;
}
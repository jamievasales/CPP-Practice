#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main() {
    vector<int> theArray;
    int num;
    while(cin>>num) {
        if(!num)
        break;

        theArray.push_back(num);
    }
    cin.clear();
    cin.ignore();
    cin>>num;

    map<int,int> originalPositions;

    for(int x=0;x<theArray.size();x++)
    originalPositions.insert(pair<int,int>(theArray[x],x));

    sort(theArray.begin(),theArray.end());

    int start=0;
   for(int x=theArray.size()-1;x>-1;x--) {
       if(theArray[x]+theArray[start]==num) {
           cout<<start<<" "<<x<<" "<<theArray[start]<<" "<<theArray[x];
           return theArray[x];
       }
       else if(theArray[x]+theArray[start]<num) {
           start++;
           x++;
       }
   }
    return 0;
}
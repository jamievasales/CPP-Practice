#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>

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
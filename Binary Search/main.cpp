#include <stdio.h>
#include <string.h>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
#include <random>

using namespace std;
int binarySearch(vector<int>,int);
int main() {
    cout<<"please enter the size of number array"<<endl;
    int arraysize;
    cin>>arraysize;
    mt19937 rng;
    rng.seed(random_device()());
    uniform_int_distribution<mt19937::result_type> distSize(1,arraysize);
    int toFind = distSize(rng);
    vector<int> numbers;
    for (auto i=0; i<arraysize;i++)
    numbers.push_back(distSize(rng));
    sort(numbers.begin(),numbers.end());
    if(arraysize<=1000) //we don't want to flood the terminal!
    for(auto i : numbers)
    cout<<i<<',';
    cout<<endl;
    cout<<toFind<<" "<<binarySearch(numbers,toFind)<<endl;
    return 0;
}

int binarySearch(vector<int> sequence,int toFind) {
    int low=0,high=sequence.size()-1;
    int count=0;
    while(low<=high) {
        count++;
        int mid = (low+high)/2;
        if(sequence[mid]==toFind){
            cout<<endl<<mid<<endl;
        return count;
        }
        else if(toFind>sequence[mid]) {
            low=mid+1;
        }
        else if(toFind<sequence[mid]) {
            high = mid -1;
        }
    }
    return count;
}
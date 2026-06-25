#include <iostream>
#include <vector>

using namespace std;

void printSubset(int arr[] , int index , int size , vector<int>& current){
    //Base case
    if(index == size){
        cout<< "{";
        for(int x : current) cout<< x << endl;
        cout << "}";
        return;
    }

    //choice One - Include the all Element 
    current.push_back(arr[index]);
    printSubset(arr , index+1 , size , current);

    // choice second - bactrack and take the second choice of exclude element 
    current.pop_back();
    printSubset(arr , index+1 , size , current);
}

int main(){
    int arr[] = {1,2,3};
    vector<int>current;
    printSubset(arr , 0, 3,current);
    return 0;
}
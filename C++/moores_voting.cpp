#include<iostream>
using namespace std;
int majorityelement(vector<int> &nums){
    int count =0;
    int res=0;
    for(auto num:nums){
        if(count==0)
        res=nums;
        if(num!=res)
        count--
        else 
        count++;
    }
    return res;
}
int main(){

}

#include<iostream>

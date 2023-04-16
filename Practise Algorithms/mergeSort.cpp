#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>&nums, int low,int mid, int high){

        int j=mid+1;
        // counts the reverse pairs
        for(int i=low;i<=mid;i++){
            while(j<=high and nums[i]>(long)2*(long)nums[j]){
                j++;
            }
            count+=j-(mid+1);          // 1 2 3    1 3
        }

        // sort it into a temp vector
        vector<int>temp;
        int left=low,right=mid+1;

        while(left<=mid and right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left++]);
            }
            else{
                temp.push_back(nums[right++]);
            }
        }

        while(left<=mid){
            temp.push_back(nums[left++]);
        }
        while(right<=high){
            temp.push_back(nums[right++]);  
        }

        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
    }

    void mergesort(vector<int>&nums, int low, int high){
        if(low>=high){
            return;
        }
        int mid = low+(high-low)/2;
        mergesort(nums,low,mid); //left call
        mergesort(nums,mid+1,high); //right call
        merge(nums,low,mid,high); // merge
    }
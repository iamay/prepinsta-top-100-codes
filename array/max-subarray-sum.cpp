// brute force approach using three loops

 

vector<int> duplicates(int arr[], int n) {
       vector<int>V;
       int a[100001]={0};
       for(int i=0;i<n;i++)
       {
           a[arr[i]]=a[arr[i]]+1;
       }
       for(int i=0;i<n;i++)
       {
           if(a[i] != 0 && a[i] != 1)
           V.push_back(i);
       }
       if(V.size()==0)
       V.push_back(-1);

       return V;
   }



// Kadane's algorithm


 

vector<int> duplicates(int arr[], int n) {
       vector<int>V;
       int a[100001]={0};
       for(int i=0;i<n;i++)
       {
           a[arr[i]]=a[arr[i]]+1;
       }
       for(int i=0;i<n;i++)
       {
           if(a[i] != 0 && a[i] != 1)
           V.push_back(i);
       }
       if(V.size()==0)
       V.push_back(-1);

       return V;
   }

// OR


 

class Solution{
    public:
        long long maxsum = INT_MIN;
        long long currsum = 0;        

        for(int i = 0;i < n;++i){
            currsum += arr[i];            

            if(currsum > maxsum)
            {
                maxsum = currsum;

            }            

            if(currsum < 0)
            {
             currsum = 0;
            }
        }    

        return maxsum;        
    }
};

// OR


class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int curMax = 0, maxTillNow = INT_MIN;
        for(auto c : nums)
            curMax = max(c, curMax + c),
            maxTillNow = max(maxTillNow, curMax);
        return maxTillNow;
    }

};

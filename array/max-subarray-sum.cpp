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

#include <iostream>
#include <deque> 
using namespace std;
void printKMax(int arr[], int n, int k){
   //Write your code here.
int temp=k;
deque<int> myd;
    int i,max;
    for(i=0;i<k;i++)
        {
        myd.push_back(arr[i]);
    }
    while(temp<=n)
        {
        max=-99;
	for(i=0;i<k;i++)
        {//	cout<<"elements disP"<<myd[i]<<endl;
            if(myd[i]>max)
                max=myd[i];
          //  cout<<"elements disp "<<myd.at(i)<<endl;
 //      cout<<"loop over"<<endl;
  }
        cout<<max<<" ";
        myd.pop_front();
        myd.push_back(arr[temp++]);
        
        
    }

}
int main(){
  
   int t;
   cin >> t;
   while(t>0) {
      int n,k;
       cin >> n >> k;
       int i;
       int arr[n];
       for(i=0;i<n;i++)
            cin >> arr[i];
       printKMax(arr, n, k);
       t--;
   cout<<endl; 
   }
     return 0;
}

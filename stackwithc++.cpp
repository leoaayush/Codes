#include<iostream>
#include<stack>
//#include<bits/stdc++.h>
using namespace std;
int main()
{
	stack<int> st;


int i,t;
for(i=1;i<=5;i++){
st.push(i);
}
for(i=1;i<=5;i++){
t=st.top(i);
st.pop(i);
cout<<t<<endl;
}
return 0;
}

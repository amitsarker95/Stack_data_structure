#include<bits/stdc++.h>
#include"MYSTACK.h";
using namespace std;
int main(){

Stack st;
st.push(1);
st.push(2);
st.push(3);
st.push(4);
st.push(5);
st.push(6);
st.push(7);
cout<<"Array size : "<<st.Size()<<endl;
cout<<"Top value : "<<st.Top()<<endl;
while(!st.Empty()){
    cout<<st.pop()<<endl;
}
cout<<"length :"<<st.Size()<<endl;

return 0;
}

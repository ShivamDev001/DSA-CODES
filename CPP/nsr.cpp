
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {4,5,2,10,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    
 stack<int> s;
 vector<int> v;
 for(int i = 0 ; i  <  n  ; i++){
     if(s.size()==0){
         v.push_back(-1);
     }else if(s.size()>0 && s.top()<arr[i]){
         v.push_back(s.top());
     }else if(s.size()>0 && s.top() >= arr[i]){
         while(s.size()>0 && s.top()>=arr[i]){
             s.pop();
         }if(s.size()==0){
             v.push_back(-1);
         }else{
             v.push_back(s.top());
         }
     }
 s.push(arr[i]);
 }
for(int i  = 0 ; i < v.size()   ;  i++){
     cout<<v[i]<<" ";
}

}

// #include <bits/stdc++.h>

// using namespace std;

// int main()
// {
    
//   int arr[] = {1,3,0,0,1,2,4};
//  int  n = sizeof(arr)/sizeof(arr[0]);
//     vector<int> v; 
//     stack <int> s; 
//     for (int i=n-1;i>=0;i--){
//       if(s.size() ==0) 
//         v.push_back(-1);
//       else if (s.size()>0 && s.top()>arr[i]) 
//       {
//         v.push_back(s.top()); 
//       }
//       else if (s.size()>0 && s.top()<=arr[i]) 
//       {
//         while(s.size()>0 && s.top()<=arr[i]) 
//         {
//           s.pop(); 
//         }
//         if (s.size()==0) // when stack became empty return -1
//         {
//           v.push_back(-1);
//         }
//         else
//         {
//           v.push_back(s.top()); // else push stack top in the vector 
//         }
//       }
//       s.push(arr[i]); // push array in stack
//     }
//     reverse(v.begin(),v.end()); 
//     for(int i = 0; i < v.size(); i++)
//     std::cout << v[i] << ' ';
//   };
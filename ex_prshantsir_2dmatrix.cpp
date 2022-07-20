#include <bits/stdc++.h>
using namespace std;
const int N = 10005;
vector<int> dp(N,0);

bool isPrime(int n)
{
    if(n==2){ return true;}
    if(n==1){ return false;}

    for (int  i = 2; i <=n/2; i++)
    {
        if(n%i==0) return false;
    }

    return true;  
}


int main()
{
int arr[3][3];
for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
          cin>>arr[i][j];
     }
}
int a = 3+4;
cout<<"\nPrinting Matrix:\n";
for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
          cout<<arr[i][j]<<" ";
     }
     cout<<"\n";
}
int sum=0;
cout<<"\nPrinting Primes:\n";
for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
          if(isPrime(arr[i][j])){
            cout<<arr[i][j]<<" ";
            sum+=arr[i][j];
          }else{
            cout<<0<<" ";
          }
     }
     cout<<"\n";
}
cout<<"\nPrinting Diagonal:\n";
for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){

         if(i==j)cout<<arr[i][j]<<" ";
         else cout<<"0 ";
     }
     cout<<"\n";
}
cout<<"\nPrinting Upper Portion:\n";
for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){

         if(j>i)cout<<arr[i][j]<<" ";
         else cout<<"0 ";
     }
     cout<<"\n";
}
cout<<"\nPrinting Lower Portion:\n";
for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){

         if(j<i)cout<<arr[i][j]<<" ";
         else cout<<"0 ";
     }
     cout<<"\n";
}
cout<<"\nPrinting Matrix Mulitplication:\n";
int mul[3][3]={0};
for(int i=0;i<3;i++){
     for(int j=0;j<3;j++){
            for(int k=0;k<3;k++){
                mul[i][j]+=arr[i][k]*arr[k][j]; 
            }
            cout<<mul[i][j]<<" ";
     }
     cout<<"\n";
}



cout<<"\nSum is: "<<sum<<"\n";



    return 0;
}
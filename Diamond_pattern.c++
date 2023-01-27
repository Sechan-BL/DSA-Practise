#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    int i=1;

    while(i<=n/2+1)
    {
        int k=n/2+1-i;
        while(k>=1)
        {
            cout<<' ';
            k--;
        }
        int j=1;
        while(j <=2*i-1)
        {
            cout<<'*';
            j++;
        }
        cout<<endl;
        i++;
    }
    while(i<=n){
      int k=1;
         while(k<=i-n/2-1)
         {
             cout<<' ';
             k++;
         }
         int j=1;
         while(j<=n-i+1)
         {
            cout<<'*';
            j++;
         }
         j=1;
        while(j<=n-i)
        {
           cout<<'*';
           j++;
        }
          cout<<endl;
          i++;
}
}

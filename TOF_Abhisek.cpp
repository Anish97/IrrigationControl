#include<iostream>

using namespace std;

void hanoi(int n,int source,int dest)
{

    if(n==1)
        {cout<<"1 "<<source<<" "<<dest<<endl;
         return;}

    hanoi(n-1,source,6-source-dest);
    cout<<n<<" "<<source<<" "<<dest<<endl;
    hanoi(n-1,6-source-dest,dest);
}
int main()
{
   int n;
   cin>>n;
   hanoi(n,1,3);

   return 0;
}

#include <iostream>
using namespace std;


// Problem statement- https://www.spoj.com/problems/PRATA/
//function for checking whether thattime is possible or not;
bool isPossible(int pratas,int cooks,int ranks[],int mid)
{  int count=0;
  for(int i=0;i<cooks;i++)
  {   int sum=0; int j=1; 
      while(sum<=mid)
      {  
          sum+=ranks[i]*j;
          j++; 
          count++;
      }
  }
  if(count>=pratas)
  {
         return true;
  }
  else
  return false;
}


// function for e
int sums(int pratas, int ranks[])
{
    int ans;
    for (int i = 0; i < pratas; i++)
    {
        ans += ranks[i];
    }
    return ans;
}

// function for mimimum time
int min_time(int pratas, int cooks, int ranks[])
{
    int s = 0;
    int e = sums(pratas, ranks);
    int result;

    while (s <= e)
    {
          int mid=(s+e)/2;
        if(isPossible(pratas,cooks,ranks,mid)){
           result=mid;
           e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
}

// main
int main()
{
    int test_case;
    int pratas;
    int cooks;
    int ranks[cooks];

    cin >> test_case;

    while (test_case--)
    {
        cin >> pratas;
        cin >> cooks;
        for (int i = 0; i < cooks; i++)
        {
            cin >> ranks[i];
        }
        cout << min_time(pratas, cooks, ranks)<<endl;
    }
}



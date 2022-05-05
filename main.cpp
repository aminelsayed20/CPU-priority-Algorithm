
#include <bits/stdc++.h>

using namespace std;



struct Process{

    int id,bt,pr,wt;

};

bool comp (Process a, Process b)
{
    return a.pr < b.pr;
}


void getWaitingTime ( struct Process arr[], int sz ) // to calculate waiting time to each process
{

  arr[0].wt = 0;
  int t =0;
  for (int i=1 ; i<sz ; ++i)
  {
      t+=arr[i-1].bt;
      arr[i].wt = t;

  }


}
/*
2 1 1
5 2 5
1 3 10
3 4 2
4 5 1 */

void input(Process arr[], int num){


   // arr = new Process [num];
    cout<<"Processes\t Burst time \t Priority\n";
    for (int i = 0; i < num; ++i) {
        cout<<"P"<<i+1;
        arr[i].id=i+1;
        cin>>arr[i].bt>>arr[i].pr;

    }
    cout<<"----------------------------------------------------------------------\n";
}


void output (struct Process arr[], int sz )
{
   for (int i=0 ; i<80 ; ++i) cout << "*";
   cout << endl << "\a";

   cout << "|     Process\t   Burst Time\tPriority Time\tWaiting Time \t\t       |"<<endl;

   for (int i=0 ; i<sz ; ++i)
   {
       cout << "|       P" << arr[i].id << "\t\t"<<arr[i].bt << "\t\t"<< arr[i].pr <<"\t\t" << arr[i].wt  << "\t\t       |"<< endl;
   }

for (int i=0 ; i<80 ; ++i) cout << "*";
   cout << endl;

}


int main()
{
        int nums;
    cout<<"Enter number of Processes: ";
    cin>>nums;

    Process arr[5];

       input(arr , nums);
        sort (arr, arr+nums, comp );
    // priority(arr,nums);
     cout << "fff";
     getWaitingTime(arr, nums);
     output(arr, nums);


return 0;
}


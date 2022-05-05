#include <iostream>

using namespace std;

#define NC "\e[0m"
#define RED "\e[0;31m"
#define GRN "\e[0;32m"
#define CYN "\e[0;36m"
#define REDB "\e[41m"

struct Process{

    int id,bt,pr,wt;

};

void getWaitingTime ( struct Process arr[], int sz ) // to calculate waiting time to each process
{

  arr[0].wt = 0;
  int t =0;
  for (int i=1 ; i<sz ; ++i)
  {
      t+=arr[i-1].pr;
      arr[i].wt = t;

  }


}
/*
2 1 1
5 2 5
1 3 10
3 4 2
4 5 1 */


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
     Process arr[5];
     for (int i=0 ; i<5 ; ++i)
     {
         cin >> arr[i].id >> arr[i].bt >> arr[i].pr;
     }
     getWaitingTime ( arr, 5 );

     output(arr, 5);
    return 0;
}

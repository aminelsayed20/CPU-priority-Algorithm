#include <bits/stdc++.h>
using namespace std;
struct Process{
    int id,bt,pr,wt;
};
// sorting accorduing to priority of each process;
void priority(Process arr[],int size){
    Process temp;
    for (int i=0 ;i<size-1 ;i++)
    {
            for (int j=i+1 ; j<size ; j++)
    {
            if (arr[i].pr >arr[j].pr)
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
    }
    }
}

void input(){
    Process *arr;
    int nums;
    cout<<"Enter number of Processes: ";
    cin>>nums;
    arr=new Process[nums];
    cout<<"Processes\t Burst time \t Priority\n";
    for (int i = 0; i < nums; ++i) {
        cout<<"P"<<i+1;
        arr[i].pr=i+1;
        cin>>arr[i].bt>>arr[i].pr;

    }
    cout<<"----------------------------------------------------------------------\n";
}
int main()
{
    input();
    return 0;
}

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <vector>
using namespace std;
struct Process {
    string name;
    int bt;
    int wt;
    int tat;
};
int main() {
    int numProcesses;
    cout<<"enter number of processes:";
    cin>>numProcesses;
    
    vector<Process>processes(numProcesses);
    
    //input bt for each process
for(int i=0;i<numProcesses;i++){
    cout<<"enter bt for process"<<(i+1)<<":";
    cin>>processes[i].bt;
    processes[i].name="p"+to_string(i+1);
    processes[i].wt=0;
    processes[i].tat=0;
}

  //calculate wt and tat
for(int i=1; i<numProcesses; i++) {
    processes[i].wt=processes[i-1].wt +processes[i-1].bt;
    processes[i].tat=processes[i].wt +processes[i].bt;
}

 //calculate avg wt and avg tat
 double avgwt=0, avgtat=0;
 for(Process& process : processes) {
     avgwt +=process.wt;
     avgtat+=process.tat;
 }
 avgwt/=numProcesses;
 avgtat/=numProcesses;
 cout<<avgwt<<" avgwt"<<endl;
 cout<<avgtat<<" avgtat"<<endl;
}
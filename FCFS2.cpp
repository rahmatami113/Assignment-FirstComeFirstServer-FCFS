#include<iostream>
 
using namespace std;
 
int main()
{
    int n,bt[20],wt[20],tat[20],avwt=0,avtat=0,i,j;
    cout<<"\n~ Selamat datang di penjadwalan prosess First Come First Serve (FCFS) ~\n";
    cout<<"\n-------------------------~^^~----------------------------------------\n";
    cout<<"Masukkan jumlah prosess secara keseluruhan(maximum 20):";
    cin>>n;
 
    cout<<"\nMasukkan prosess Burst Time:\n";
    for(i=0;i<n;i++)
    {
        cout<<"P["<<i+1<<"]:";
        cin>>bt[i];
    }
 
    wt[0]=0;    //waktu tunggu untuk proses pertama(p1) adalah 0
 
    //perhitungan waktu tunggu (waiting time)
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
    }
    cout<<"===================================================================================="; 
    cout<<"\nProsess\t\t||Burst Time\t||Waktu tunggu\t||Turnaround Time(waktu perputaran)";
    cout<<"\n===================================================================================="; 
 
    //perhitungan turnaround time(waktu perputaran)
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];
        avwt+=wt[i];
        avtat+=tat[i];
        cout<<"\nP["<<i+1<<"]"<<"\t\t||"<<bt[i]<<"\t\t||"<<wt[i]<<"\t\t||"<<tat[i];
    cout<<"\n===================================================================================="; 
    }
 
    avwt/=i;
    avtat/=i;
    cout<<"\n\nAverage waktu tunggu:"<<avwt;
    cout<<"\nAverage Turnaround Time(waktu perputaran):"<<avtat;
    
    cout<<"\n-------------------------~^^~----------------------------------------\n";
    cout<<"\n ~ Terima Kasih ~\n";

 
    return 0;
}

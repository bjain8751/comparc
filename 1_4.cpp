#include <iostream>
#include <time.h>
using namespace std;


 
int main() {

    struct timespec st, et;
    long long int n=51,fib[51];
    // n can be any interger
    double totaltime;

    timespec_get(&st, TIME_UTC);
    fib[0]=1;
    fib[1]=1;
    cout<<"0-1"<<endl;
    cout<<"1-1"<<endl;

    for (int i=2; i<n;i++){
        fib[i]=fib[i-1]+fib[i-2];
        cout<<i<<"-"<<fib[i]<<endl;
    }

    timespec_get(&et, TIME_UTC);
  
    totaltime =(et.tv_sec - st.tv_sec);
    totaltime =(totaltime + (et.tv_nsec - st.tv_nsec)* 1e-9);
  
    cout << "Time taken : "<<totaltime<<endl;
    return 0;
}
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
    for (int i=1; i<n;i++){
        fib=a+b;
        cout<<i<<"-"<<fib<<endl;
        b=a;
        a=fib;
    }
    timespec_get(&et, TIME_UTC);
  
    totaltime =(et.tv_sec - st.tv_sec);
    totaltime =(totaltime + (et.tv_nsec - st.tv_nsec)* 1e-9);
  
    cout << "Time taken : "<<totaltime<<endl;
    return 0;
}
#include <iostream>
#include <time.h>
using namespace std;

long long int fib(int n){
    if(n==0 || n==1){
        return 1;
    }else{
        return(fib(n-1)+fib(n-2));

    } 
}

 
int main() {

    struct timespec st, et;
    int n=51;
    // n can be any interger
    double totaltime;
    timespec_get(&st, TIME_UTC);
    for (int i=0; i<n;i++){
        cout<<i<<" - "<<fib(i)<<" "<<endl;
    }
    timespec_get(&et, TIME_UTC);
  
    totaltime =(et.tv_sec - st.tv_sec);
    totaltime =(totaltime + (et.tv_nsec - st.tv_nsec)* 1e-9);
  
    cout << "Time taken : "<<totaltime<<endl;
    return 0;
}

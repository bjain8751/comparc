#include <iostream>
#include <time.h>
using namespace std;

long long int fibb(int n, long long int a[]){
    if(n==0 || n==1){
        return 1;
    }else{
        a[n]=a[n-1]+a[n-2];
        return(a[n]);
    } 
}

 
int main() {

    struct timespec st, et;
    int n=51;
    long long int fib[51];
    fib[0]=1;
    fib[1]=1;
    // n can be any interger
    double totaltime;
    timespec_get(&st, TIME_UTC);
    for (int i=0; i<n;i++){
        cout<<i<<" - "<< fibb(i,fib)<<" "<<endl;
    }
    timespec_get(&et, TIME_UTC);
  
    totaltime =(et.tv_sec - st.tv_sec);
    totaltime =(totaltime + (et.tv_nsec - st.tv_nsec)* 1e-9);
  
    cout << "Time taken : "<<totaltime<<endl;
    return 0;
}

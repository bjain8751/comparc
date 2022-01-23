#include <iostream>
#include <time.h>
using namespace std;


int main(){
    int n=512;
    //n can be changed
    struct timespec st, et;
    double totaltime;
   
    int m1[n][n], m2[n][n], m[n][n];

    for(int i = 0;i<n;i++){
        for(int j=0;j<n;j++){
            m1[i][j] = 2;
            m2[i][j] = 2;
        }
    }

    timespec_get(&st, TIME_UTC);

    for(int i = 0;i<n;i++){
        for( int j=0; j<n;j++){
            for(int k=0; j<n;j++){
                m[i][j]= m1[i][k]+m2[k][j];
            }
        }
    }

    timespec_get(&et, TIME_UTC);

    for(int i = 0;i<n;i++){
        for( int j=0; j<n;j++){
            cout<<m[i][j]<<endl;
    }
    }


    totaltime =(et.tv_sec - st.tv_sec);
    totaltime =(totaltime + (et.tv_nsec - st.tv_nsec)* 1e-9);
    cout<<"Datatype = Int"<<endl;
    cout<<"N = "<<n<<"\nTime for meat portion: "<<totaltime<<endl;


    return 0;
}


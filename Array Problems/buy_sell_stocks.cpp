#include<iostream>
#include<climits>
using namespace std;

int Maxprofit(int*sell,int n){
    int buy[100000]; //here 100000 beacuse maximum isze of the array according to the leetcode could be 100000
    buy[0] = INT_MAX;
    for(int i=1;i<n;i++){
        buy[i] = min(buy[i-1],sell[i-1]);

    }
    int maxprofit=0;
    for(int i=0;i<n;i++){
        int currentprofit = sell[i] - buy[i];
        maxprofit=max(maxprofit,currentprofit);
    }
    return maxprofit;
}
int main(){
    int sell[]={7,1,5,3,6,4};
    int n= sizeof(sell)/sizeof(int);
    cout<<Maxprofit(sell,n);

}
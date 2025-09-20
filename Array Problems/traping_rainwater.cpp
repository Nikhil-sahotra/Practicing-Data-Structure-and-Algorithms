#include<iostream>
using namespace std;
int Traping_Rain_Water(int*height,int n){
    int left_max[20000], right_max[20000];
    left_max[0]= height[0];
    right_max[n-1]=height[n-1];

    
    for (int i=1;i<n;i++){
        left_max[i] = max(height[i-1],left_max[i-1]);
        
    }
    
    for (int i=n-2;i>=0;i--){
        right_max[i] = max(height[i+1],right_max[i+1]);
        
    }
    int water_trapped=0;
    for(int j=0;j<n;j++){
        int curr_water=(min(left_max[j],right_max[j])- height[j]);
        if(curr_water>0){
            water_trapped += curr_water;
        }

    }
    return water_trapped;


}
int main(){
    int height[]={4,2,0,6,3,2,5};
    int size = sizeof(height)/sizeof(int);
    cout<<Traping_Rain_Water(height,size);
}
#include <iostream>
const long long N = 1e5;
using namespace std;
int main(){
    int a,arr[N],arr1[N],c= 0;
    cin >> a;
    for(int i = 0;i < a;i++){
        cin >> arr[i];
    }
    for(int i = 0;i < a;i++){
        cin >> arr1[i];
    }
    for(int i = 1;i < a;i++){
        for(int j = 0; j < a-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i = 1;i < a;i++){
        for(int j = 0; j < a-1; j++){
            if(arr1[j] > arr1[j+1]){
                swap(arr1[j], arr1[j+1]);
            }
        }
    }

    for (int i = 0; i < a; ++i) {
        if (arr[i] != arr1[i])
        {
            c++;
        }
    }
    if (c == 0)
    {
        cout <<"yes";
    }
    else {
        cout <<"no";
    }
}


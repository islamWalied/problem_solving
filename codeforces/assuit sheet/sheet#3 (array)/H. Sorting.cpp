#include <iostream>
const long long N = 1e5;
using namespace std;

int main() {
    int a,arr[N];
    cin >> a;
    for(int i = 0;i < a;i++){
        cin >> arr[i];
    }
    for(int i = 1;i < a;i++){
        for(int j = 0; j < a-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    for(int i = 0;i < a;i++){
        cout <<  arr[i] << " ";
    }
}
void swap(int &a,int &y){
    int temp = a;
    a = y;
    y = temp;
}
#include <iostream>
#include <iomanip>
using namespace std;

// Task 1
int sumTen(int arr[],int size){
    int res=0;
    for(int x=0;x<size;x++){
        if (arr[x] >10) res+=arr[x];
    }
    return res;
}
// Task 2
void bubble_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-1-i;j++){
            if (arr[j] >arr[j+1]){
                int temp=arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
// Task 3
void game(int y_score[],int opp_score[],int size,char arr1[]){
    for(int x=0;x<size;x++){
        if (y_score[x] > opp_score[x]) arr1[x] = 'Y';
        else arr1[x] = 'O';
    }
}
int main(){
    // Task 1
    int arr[7] = {1,2,3,4,11,48,1};
    int len = sizeof(arr)/sizeof(arr[0]);
    sumTen(arr,len);
    cout<<"The outcome is "<<sumTen(arr,7)<<endl;
    // Task 2
    int array[7] = {10,4,32,2,1,5,7};
    int size = sizeof(array)/sizeof(array[0]);
    bubble_sort(array,size);
    cout<<"The sorted array is ";
    for(int x=0;x<size;x++){
        cout<<array[x]<<" ";
    }
    cout<<"\n";
    // Task 3
    int y_score[] = {5,18,15,60,12};
    int opp_score[] = {10,30,40,14,10};
    int length = sizeof(y_score)/sizeof(opp_score[0]);
    char arr1[5];
    game(y_score , opp_score, length,arr1);
    cout<<"Who is currently winnig? "<<arr1<<endl;
    return 0;
}

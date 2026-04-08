
//     }
//     return stu > m ? false : true ;
// }

// int allocateBooks(vector<int> &arr,int n,int m){
//     if (m > n){
//         return -1;
//     }
//     int sum = 0;
//     for (int i= 0;i<n;i++){
//         sum +=arr[i];
//     }

//     int ans = -1;
//     int st = 0,end = sum;

//     while(st <=end){
//         int mid = st + (end-st)/2;
//         if(isValid(arr,n,m,mid)){//left
//             ans = mid;
//             end = mid - 1;    
//         }else{//right
//             st = mid+1;    
//         }
//     }
//     return ans;
// }

#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;

        Node(int val){
            data = val;
            next = NULL;
        }
};

class List{
    Node* head;
    Node* tail;

public: 
    List(){
        head  = tail = NULL;
    }
   
    void push_front(int val){
        Node* newNode = new Node(val);
        if (head == NULL){
            head = tail = newNode;
            return;
        }else{
            newNode->next = head;
            head = newNode;
        }
    }

    void printLL(){
        Node* temp = head;

        while(temp!)
    }

};


int main(){
    List ll;

    ll.push_front(1);
    ll.push_front(2);
    ll.push_front(3);

    return 0;
}
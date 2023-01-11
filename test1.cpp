// // #include<bits/stdc++.h>
// // using namespace std;

// // int func(vector<int>& arr,int k){
// //     int count = 0;
// //     for(int i=0;i<arr.size();i++){
// //         for(int j=i+1;j<arr.size();j++){
// //             if((arr[i]+arr[j])%k==0)
// //                 count++;
// //         }
// //     }
// //     return count;
// // }


// // // (num1+num2)%k = 0
// // // 7,5 k=4


// // // 3 





// // int func2(vector<int>& arr,int k){
// //     int count = 0;
// //     map<int,int> mp;
// //     for(int i=0;i<arr.size();i++){
// //         if(mp.find(k-arr[i]%k)!=mp.end()){
// //             count+=mp[k-arr[i]%k];
// //         }
// //         else{
// //             mp[arr[i]%k]++;
// //         }
// //     }
// //     return count;
// // }


// // int main(){
// //     cout<<func(arr,k);
// //     return 0;
// // }




// class Node{
//     public:
//         int data;
//         Node* left;
//         Node* right;
//         Node* next;
// };



// //      1->NULL
// //  2     3
// // 4 5   6 7


// // node = q.front();

// // q.pop();

// // node->next = q.front();


// Node* func(Node* root){
//     if(!root)
//         return NULL;
//     root->next = NULL;
//     if(root->left)
//         func(root->left);
//     if(root->right)
//         func(root->right);
//     root->left->next = root->right;

// }







// void func(Node* root,Node* prev){
//     if(!root)
//         return;

//     root->next = prev->left;
//     if(root->left)
//         func(root->left,root->next);
//     if(root->right)
//         func(root->right,root->next);
    
// }














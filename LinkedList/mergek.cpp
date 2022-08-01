#include <bits/stdc++.h>
using namespace std;
#define ll long long

class ListNode {
public:
    int val;
    ListNode *next;

    ListNode(){
        val = 0;
        next = NULL;
    }

    ListNode(int x){
        val = x;
        next = NULL;
    }

    ListNode(int x , ListNode *nextNode){
        val = x;
        next = nextNode;
    }

    void addNode ( ListNode *newNode){
        next = newNode;
    }
};

ListNode* append( ListNode *head , int x){
    ListNode *itr = head;
    while(itr->next != NULL) itr = itr->next;
    ListNode *newNode = new ListNode(x);
    itr->addNode(newNode);
    return head;
}

void printList ( ListNode *head){
    ListNode *iterator = head;
    while(iterator != NULL){
        cout<<iterator->val<<" -> ";
        iterator = iterator->next;
    }
    cout<<"X\n";
}

void buildListArray( vector<ListNode*> &ListArray , vector<vector<int>> &Lists){
    for (auto List : Lists){
        int size = List.size();
        ListNode *head = new ListNode(List[0]);
        for( int it = 1 ; it<size ; it++ ) head = append(head,List[it]);
        ListArray.push_back(head);
    }
}

struct compareNodes{
    bool operator() ( const ListNode *a , const ListNode *b ) {
        return a->val > b->val;
    }
};

ListNode* mergeKLists(vector<ListNode*>& lists) {
    // priority_queue<ListNode* , vector<ListNode*> , compareNodes> p_queue;
    auto comprator = [](const ListNode *a, const ListNode *b){return a->val > b->val;};
    priority_queue<ListNode* , vector<ListNode*> , decltype(comprator)> p_queue(comprator);
    for( auto List : lists ) p_queue.push(List);
    ListNode *ans , *ans_iterator;
    ListNode *temp = p_queue.top();
    ans = temp;
    ans_iterator = temp;
    p_queue.pop();
    if(temp->next != NULL) p_queue.push(temp->next);
    while (!p_queue.empty()){
        temp = p_queue.top();
        ans_iterator->next = temp;
        ans_iterator=ans_iterator->next;
        p_queue.pop();
        if(temp->next != NULL) p_queue.push(temp->next);
    }
    return ans;
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    vector <ListNode*> ListArray;
    vector<vector<int>> Lists{
        {1, 4, 5},
        {1, 3, 4},
        {2, 6}
    };
    buildListArray(ListArray , Lists);
    for (auto List : ListArray) printList(List);
    ListNode * ans = mergeKLists(ListArray);
    printList(ans);
    return 0;
}
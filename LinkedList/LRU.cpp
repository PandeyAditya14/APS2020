#include <bits/stdc++.h>
using namespace std;
#define ll long long

class LinkedList{
public:
    int val;
    int key;
    LinkedList *prev;
    LinkedList *next;
    LinkedList(){
        key = 0;
        val = 0;
        prev = nullptr;
        next = nullptr;
    }

    LinkedList( int x , int y){
        key = x;
        val = y;
        prev = nullptr;
        next = nullptr;
    }

    int getVal (){
        return val;
    }
};
LinkedList *cutElementOut(LinkedList *nodeToCut){
    nodeToCut->prev->next = nodeToCut->next;
    nodeToCut->next->prev = nodeToCut->prev;
    nodeToCut->prev = nullptr;
    nodeToCut->next = nullptr;

    return nodeToCut;
}

LinkedList *addElementToEnd ( LinkedList *tail , LinkedList *newNode){
    // We will maintain a dummy tail this way we will eliminate edge cases of 0 elements or 1 element
    newNode->prev = tail->prev;
    tail->prev->next = newNode;

    tail->prev = newNode;
    newNode->next = tail;

    return tail;
};

LinkedList *removeElementFromFront ( LinkedList *head){
    //  We will maintain a dummy head too this will also ease our management when evicting from element
    //  As we are using Dynamic Allocation ( new keyword ) we have to explicitly delete the removed page

    LinkedList *temp = head->next;
    temp = cutElementOut(temp);
    delete temp;
    return head;
}

pair<LinkedList*,LinkedList*> createNewList(){
    //  To Return dummy head and tail pointing to each other so when adding element to the list from end and 
    //  deleting from front has a dummy head and tail to work from.

    LinkedList* head = new LinkedList();
    LinkedList* tail = new LinkedList();

    head->next = tail;
    tail->prev = head;

    return make_pair(head,tail);
}


class LRUCache {
public:
    int currentCap;
    int maxCapacity;
    LinkedList *head;
    LinkedList *tail;
    unordered_map< int , LinkedList* > lookUpMap;

    LRUCache(int capacity) {
        currentCap = 0;
        maxCapacity = capacity;
        auto pointers = createNewList();
        head = pointers.first;
        tail = pointers.second;
    }
    
    LinkedList* search( int key ){
        // Get element from lookUpMap
        auto iterator = lookUpMap.find(key);
        if (iterator == lookUpMap.end()) return nullptr;
        else return iterator->second;
    }

    void removeLRUPage(){
        int key = head->next->key;
        lookUpMap.erase(key);
        head = removeElementFromFront(head);
    }

    int get(int key) {
        LinkedList *operationNode = search(key);
        if( operationNode == nullptr ) return -1;
        else{
            operationNode = cutElementOut(operationNode);
            tail=addElementToEnd(tail,operationNode);
            return operationNode->val;
        }
    }
    
    void put(int key, int value) {
        LinkedList *operationNode = search(key);

        if ( operationNode == nullptr ){
            if(currentCap == maxCapacity){
                removeLRUPage();
                LinkedList *newNode = new LinkedList(key , value);
                tail = addElementToEnd(tail , newNode);
                lookUpMap.insert(make_pair(key , newNode));
            }
            else{
                currentCap++;
                LinkedList *newNode = new LinkedList(key , value);
                tail = addElementToEnd(tail , newNode);
                lookUpMap.insert(make_pair(key , newNode));
            }
        }else{
            operationNode->val = value;
            operationNode = cutElementOut(operationNode);
            tail=addElementToEnd(tail,operationNode);
        }
    }
};


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    LRUCache cache(2);

    cache.put(1,0);
    cache.put(2,2);
    cout<<cache.get(1)<<"\n";
    cache.put(3,3);
    cout<<cache.get(2)<<"\n";
    cache.put(4,4);
    cout<<cache.get(1)<<"\n";
    cout<<cache.get(3)<<"\n";
    cout<<cache.get(4)<<"\n";
    return 0;
}
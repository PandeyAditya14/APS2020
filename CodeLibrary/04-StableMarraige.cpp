/**
 * @ Author: Aditya Kumar Pandey
 * @ Create Time: 2020-03-27 22:37:01
 * @ Description:This is Solution for Stable Marriage Problem which is solved by Gayle Shrpley Algorithm Which is running at effeciency of O(n^2)
 * @ Link:https://www.geeksforgeeks.org/stable-marriage-problem/
 *        For 2D array as argument https://stackoverflow.com/questions/8767166/passing-a-2d-array-to-a-c-function
 */

#include <bits/stdc++.h>
using namespace std;

bool  isBetter(int m , int w , int m1 , int Women [4][4] , int n){ // Here m1 is the man the woman is already engaged to true is m is better than m1
    for (int i =0 ; i < n ; i++){
        if(Women[w][i] == m)
            return true;
        if(Women[w][i] == m1)
            return false;
    } 
}

void StableMarriage(int n , int Men[4][4] ,int Women [4][4] ){
    int *wPartner; // This array will store the current partner of the women at ith index if ith index has -1 then women is free
    wPartner = new int[n];
    bool *mPaired;  // This array will store the status of men if the ith index of this array is false then man is free and if ith index is True then man is engaged
    mPaired = new bool[n];
    memset(wPartner,-1,sizeof(wPartner)*sizeof(int));
    memset(mPaired,false,sizeof(mPaired)*sizeof(bool));
    int freeM =n;
    while (freeM>0){
        int m; // m will be men index
        for (int i = 0 ; i<n ; i++){
            if (mPaired[i] == false)
                {m = i;
                // cout<<"Man = "<<m;
                break;
                }
        }
        // cout<<"HERE";
        for (int i = 0 ; i<n && (mPaired[m] == false) ;i++){
            int w; // w will be current women index
            w = Men[m][i];
            if (wPartner[w] == -1){
                wPartner[w] = m;
                mPaired[m] = true;
                freeM--;
                cout<<"Women"<<w<<"PAired with Man"<<m<<"\n";
            }
            else if(isBetter(m,w,wPartner[w],Women,n)){
                mPaired[wPartner[w]]=false;
                mPaired[m]=true;
                wPartner[w]=m;
                cout<<"Women"<<w<<"PAired with Man"<<m<<"\n";
            }
        }
    }
    cout<<"Women\t---x---Men\n";
    for(int i = 0 ; i<n ; i++){
        cout<<i<<"\t---x---"<<wPartner[i]<<"\n";
    }
}



int main(){
    int Men[4][4]={{3,1,2,0},
                   {1,0,2,3},
                   {0,1,2,3},
                   {0,1,2,3}};
    int Women[4][4]={   {0,1,2,3},
                        {0,1,2,3},
                        {0,1,2,3},
                        {0,1,2,3}};
    StableMarriage(4,Men,Women);
    return 0;
}
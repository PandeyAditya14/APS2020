/**
 * @ Author: Aditya Kumar Pandey
 * @ Create Time: 2020-03-28 21:14:21
 * @ Description:
 * @ Link:
 */

#include<bits/stdc++.h>
using namespace std;
bool subsetSum(int A[]  ,int lenA ,int sum){
    bool subset[lenA+1][sum+1];
    // for (int i = 0 ;i<=lenA ;i++) 
    //     for(int j = 0 ; j<=sum ; j++)
    //         if(j == 0)
    //             subset[i][j] =true;
    //         else
    //             subset[i][j] = false;
            
    for (int i = 0; i <= lenA; i++) 
	subset[i][0] = true; 

	// If sum is not 0 and set is empty, then answer is false 
	for (int i = 1; i <= sum; i++) 
	subset[0][i] = false; 
    

    for(int i = 1;i<=lenA;i++ ){
        for(int j=1 ; j<=sum ; j++){
            if(j<A[i-1])
                subset[i][j] = subset[i-1][j];
            else
                subset[j][i] = subset[i-1][j] || subset[i-1][j-A[i-1]];
        }
    }
    
    return subset[lenA][sum];

}
int main(){
    int set[] = {3, 34, 4, 12, 5, 2}; 
    int sum = 9; 
    int n = sizeof(set)/sizeof(set[0]); 
    if (subsetSum(set, n, sum) == true) 
        printf("Found a subset with given sum"); 
    else
        printf("No subset with given sum");
    return 0;
}
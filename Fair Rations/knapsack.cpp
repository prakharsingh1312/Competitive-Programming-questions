#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> dp (1001, vector<int>(1001));

int knapsack(vector<int> weight, vector<int> value, int w, int n){
    for(int i=0; i<=w; i++)  dp[0][i] = 0;
    for(int i=0; i<=n; i++)  dp[i][0] = 0;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=w; j++){
            if (weight[i-1]<=j)
                dp[i][j] = max(value[i-1] + dp[i-1][weight[i-1]], dp[i-1][j]);
            else
                dp[i][j] = dp[i-1][j];
        }
    }
    return dp[n][w];
}

int main()
{
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int w;
        cin>>w;
        vector<int> weight(n);
        vector<int> value(n);
        for (int i=0; i<n; i++)  cin>>value[i];
        for (int i=0; i<n; i++)  cin>>weight[i];
        cout<<knapsack(weight, value, w, n)<<endl;
    }
}

#include <bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>> &p, vector<char> &v, int i, vector<int> &ex, int val){
    v[i] = 't';    
    for(int n = 0; n < p[i].size(); n++){
        if(v[p[i][n]] == 'f'){            
            ex[p[i][n]] = val;
            dfs(p ,v, p[i][n], ex, val);
        }
    }
}

int max (int x, int y) { return (x > y)? x : y; } 


int lps(vector<int> &str)
{
   int n = str.size();
   int i, j, cl;
   int L[n][n];  
 
  
   for (i = 0; i < n; i++)
      L[i][i] = 1;
 
    
    for (cl=2; cl<=n; cl++)
    {
        for (i=0; i<n-cl+1; i++)
        {
            j = i+cl-1;
            if (str[i] == str[j] && cl == 2)
               L[i][j] = 2;
            else if (str[i] == str[j])
               L[i][j] = L[i+1][j-1] + 2;
            else
               L[i][j] = max(L[i][j-1], L[i+1][j]);
        }
    }
 
    return L[0][n-1];
}

int main() {
    int n;
    int k;
    int m;
    cin >> n >> k >> m;
    vector<vector<int> > pairs(n+1);
    for(int a0 = 0; a0 < k; a0++){
        int x;
        int y;
        cin >> x >> y;
        pairs[x].push_back(y);
        pairs[y].push_back(x);
    }
    vector<int> a(m);
    for(int a_i = 0; a_i < m; a_i++){
       cin >> a[a_i];
    }
    vector<char> visit(n+1,'f');
    vector<int> ex(n+1,0);           
    for(int j = 0; j < m/2; j++){
        if(visit[a[j]] == 'f'){ 
            ex[a[j]] = a[j];            
            visit[a[j]] = 't';           
            dfs(pairs, visit, a[j], ex, a[j]);            
        }  
        if(ex[a[j]] != 0){
            a[j] = ex[a[j]];
        }
    }
    for(int i = m/2; i < m; i++){              
        if(ex[a[i]] != 0){
            a[i] = ex[a[i]];
        }
    }
    /*for(int a_i = 0; a_i < m; a_i++){
       cout << a[a_i] << " ";
    }*/
    int size = lps(a);
    cout << size<< endl;
    return 0;
}

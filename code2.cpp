#include<bits/stdc++.h>
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL)
#define vi vector<int>
#define vc vector<char>
#define umpii unordered_map<int,int>
#define vstr vector<string>
#define umpsi unordered_map<string,i>
#define pii pair<int,int>
#define umpci unordered_map<char, int>
#define pci pair<char, int>
#define ll long long
#define abc true
#define endl "\n"
#define IO freopen("input.txt","r",stdin); freopen("output.txt","w",stdout)
using namespace std;

 
const int MAX_CHAR = 256;
const int mod = 1e9+7;
vector<int> dirx ={-1,-1,0,1,1,1,0,-1};
vector<int> diry ={0,1,1,1,0,-1,-1,-1};


vector<int> dir4x = {-1,0,1,0};
vector<int> dir4y = {0,1,0,-1};


pair<int,int> starting(vector<int> temp,int start, int end){

  
    int e =-1,o =-1;

    int curr =start;
    while(curr<= end){
        if(e==-1 && temp[curr]%2==0){
            e =curr;
        }
        if(o==-1 && temp[curr]%2){
            o= curr;
        }
        curr++;
    }

    return {e,o};
}

pair<int,int> ending(vector<int> temp,int start, int end){

    int e =-1,o =-1;

    int curr =end;
    while(curr>=start)
    {
        if(e==-1 && temp[curr]%2==0){
            e =curr;
        }
        if(o==-1 && temp[curr]%2){
            o= curr;
        }
        curr--;
    }

    return {e,o};
}


pair<int,int> starting_n(vector<int> temp,int start, int end){

    int e =-1,o =-1;

    int curr =start;
    while(curr<= end){
        if(e==-1 && temp[curr]<0){
            e =curr;
        }
        if(o==-1 && temp[curr]>=0){
            o= curr;
        }
        curr++;
    }

    return {e,o};
}



pair<int,int> ending_n(vector<int> temp,int start, int end){
    int e=-1,o=-1;

    int curr =end;
    while(curr>=start)
    {
        if(e==-1 && temp[curr]<0){
            e =curr;
        }
        if(o==-1 && temp[curr]>=0){
            o= curr;
        }
        curr--;
    }

    return {e,o};
}

void sol(){  

    int n;
    cin>>n; 
    vector<int> arr(n,0);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    if(n==1){
        cout<<arr[0]<<"\n";
        return;
    }
    vector<int> temp (n,0);
    temp[0]= arr[0];
    
    temp[n-1] =arr[1];

    queue<pair<int,int>>q;
    q.push({0,n-1});

    vector<bool> visited(n,false);

    visited[0] = true;
    visited[n-1]= true;

    int index= 2;

    while(index<n && !q.empty()){

        auto t = q.front();
        q.pop();

        if(t.first>t.second){
            continue;
        }

        if(t.first==t.second && visited[t.first]){
            continue;
        }

        

        int mid = (t.first + t.second)/2;

        if(visited[mid]==false){
            temp[mid]= arr[index];
            index++;
            visited[mid]= true;
        }

        q.push({t.first,mid});
        q.push({mid,t.second}); 
    }


    arr= temp;

    int start= 0 ,end =n-1;

    while(abc){

        auto t = starting(arr,start,end);

        if(t.first==-1 || t.second==-1){
            break;
        }
        else{
            arr[max(t.first,t.second)]= arr[t.first]+ arr[t.second];
            start++;
        }
        t = ending(arr,start,end);

        if(t.first==-1 || t.second==-1){
            break;
        }
        else{
            arr[min(t.first,t.second)]= arr[t.first]+ arr[t.second];
            end--;
        }
        
    }


    while(abc){

        auto t = starting_n(arr,start,end);

        if(t.first==-1 || t.second==-1){
            break;
        }
        else{
            arr[max(t.first,t.second)]= arr[t.first]+ arr[t.second];
            start++;
        }
        t = ending_n(arr,start,end);

        if(t.first==-1 || t.second==-1){
            break;
        }
        else{
            arr[min(t.first,t.second)]= arr[t.first]+ arr[t.second];
            end--;
        }
        
    }

    while(abc){

        auto t = starting(arr,start,end);

        if(t.first==-1 || t.second==-1){
            break;
        }
        else{
            arr[max(t.first,t.second)]= arr[t.first]+ arr[t.second];
            start++;
        }

        t = ending(arr,start,end);

        if(t.first==-1 || t.second==-1){
            break;
        }
        else{
            arr[min(t.first,t.second)]= arr[t.first]+ arr[t.second];
            end--;
        }
        
    }


    
    temp.clear();
    unordered_map<int,int> mp;
    for(int i=start;i<=end;i++){
        mp[arr[i]]++;
    }
    for(int i=start;i<=end;i++){

        if(mp[arr[i]]==1){
            temp.push_back(arr[i]);
            mp[arr[i]]=1;
        }
        else if(mp[arr[i]]>1){
            mp[arr[i]]--;
        }
    }



    for(auto i:temp){
        cout<<i<<" ";
    }
    cout<<"\n";
}

int32_t main(){
 
   fastIO;

   #ifndef ONLINE_JUDGE
      IO;
   #endif

   
   int cases=1;
   while(cases--){
      sol(); 

   }
 
    return 0;
}
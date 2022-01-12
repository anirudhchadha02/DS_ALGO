#include <bits/stdc++.h>
using namespace std;
int a[100][100][100];
int visit[100][100][100];

int x1[4]={1,0,-1,0};

int y1[4]={0,1,0,-1};

int z1[4]={0,0,0,0};



int x2[4]={1,0,-1,0};

int y2[4]={0,0,0,0};

int z2[4]={0,1,0,-1};


bool isSafe2(int a,int b,int c,int p,int q,int r ){
        if(a>=0 && a<p && b>=0 && b<q && c>=0 && c<r ){
                return true;
        }
        return false;
}
bool isSafe(int a,int b,int c,int p,int q,int r ){
        if(a>=0 && a<p && b>=0 && b<q && c>=0 && c<r && visit[a][b][c]==0){
                return true;
        }
        return false;
}
void func11(int &a,int &b,int &c,int p,int q,int r,string dirx,int idx,int t, int c2);
void newfunc1(int &a,int &b,int &c,int p,int q,int r,string dirx,int idx,int t, int c2){
        
        int a1 = a + x1[idx];
        int b1 = b + y1[idx];
        int c1 = c + z1[idx];
        bool flag=false;
        while(isSafe2(a1,b1,c1,p,q,r)==false){
                int idx1 = (idx+1)%4;
                a1 = a + x1[idx1];
                b1 = b + y1[idx1];
                c1 = c + z1[idx1];
        }
        a=a1;
        b=b1;
        c=c1;
        func11(a,b,c,p,q,r,dirx,0,t,c2);
}
void func11(int &a,int &b,int &c,int p,int q,int r,string dirx,int idx,int t, int c2){
       
        if(visit[a][b][c]==0){
        cout<<a[a][b][c]<<" ";
        visit[a][b][c]=1;
        c2++;        
        }
        int a1;
        int b1;
        int c1;
        bool flag=false;
        
                a1 = a + x1[idx];
                b1 = b + y1[idx];
                c1 = c + z1[idx];
                int count = 0;
                while(isSafe(a1,b1,c1,p,q,r)==false){

                        int idx1 = (idx+1)%4;
                        a1 = a + x1[idx1];
                        b1 = b + y1[idx1];
                        c1 = c + z1[idx1];
                        count ++;
              
                        idx = idx1;
                }
                if(count<5){
                	flag=true;
                        
                } 
       	 a=a1;
       	 b=b1;
       	 c=c1;  
        
}
void func1(int a,int b,int c,int p,int q,int r,string dirx,int idx,int t, int c2){
     
        if(isSafe(a,b,c,p,q,r)==false)
        return;
        if(visit[a][b][c]==0){
        cout<<a[a][b][c]<<" ";
        visit[a][b][c]=1;
        c2++;        
        }
        int a1;
        int b1;
        int c1;
        bool flag=false;
        
                a1 = a + x1[idx];
                b1 = b + y1[idx];
                c1 = c + z1[idx];
                int count = 0;
                while(isSafe(a1,b1,c1,p,q,r)==false){
                        int idx1 = (idx+1)%4;
                        a1 = a + x1[idx1];
                        b1 = b + y1[idx1];
                        c1 = c + z1[idx1];
                        count ++;
                        if(count==5){
                             if(c2<t)
                             {
                                newfunc1(a,b,c,p,q,r,dirx,idx,t,c2);
                                cout<<a[a][b][c]<<" ";
                             }
                             break;  
                        }
                        idx = idx1;
                }
                if(count<5){
                	flag=true;
                        
                } 

        if(flag){
       	func1(a1,b1,c1,p,q,r,dirx,idx,t,c2);
        }
       	 else{
        if(dirx=="left") {
                func1(a,b,c-1,p,q,r,dirx,0,t,c2);
        }
        else {
                func1(a,b,c+1,p,q,r,dirx,0,t,c2);
        }}
        
        
}

void func2(int a,int b,int c,int p,int q,int r,string dirx, int idx,int t,int c2){
        if(isSafe(a,b,c,p,q,r)==false)
        return;
        if(visit[a][b][c]==0){
        cout<<a[a][b][c]<<" ";
        visit[a][b][c]=1;
        c2++;       
        }
        int a1;
        int b1;
        int c1;
        bool flag=false;
        
                a1 = a + x2[idx];
                b1 = b + y2[idx];
                c1 = c + z2[idx];
                int count = 0;
                while(isSafe(a1,b1,c1,p,q,r)==false){
                        idx = (idx+1)%4;
                        a1 = a + x2[idx];
                        b1 = b + y2[idx];
                        c1 = c + z2[idx];
                        count ++;
                        if(count==5)
                                break;
                }
                if(count<5){
                	flag=true;
                        
                }  

        if(flag==true)
       	 func2(a1,b1,c1,p,q,r,dirx,idx, t,  c2);
       	 else{
        if(dirx=="up") {
                func2(a,b-1,c,p,q,r,dirx,0,t,c2);
        }
        else {
                func2(a,b+1,c,p,q,r,dirx,0,t,c2);
        }
       	 }
        
}







int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	
	int q,p,r;
	cin>>p>>q>>r;
	for(int i=0;i<p;i++){
	for(int j=0;j<q;j++){
	for(int k=0;k<r;k++){
		int val;
		cin>>val;
	    a[i][j][k]=val;
	    visit[i][j][k]=0;	    }
	 }
	}
	int a,b,c;
	cin>>a>>b>>c;   
	if(c==0){
	   func1(a,b,c,p,q,r,"right",0,p*q,0);
	}
	else if(c==q-1){
	   func1( a,b,c,p,q,r,"left",0,p*q,0);
	}
	else if(b==0){
	   func2( a,b,c,p,q,r,"down",0,p*r,0);
	}
	else{
	   func2( a,b,c,p,q,r,"up",0,p*r,0);    
	}

	
    return(0);	
}
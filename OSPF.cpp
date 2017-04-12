#include<bits/stdc++.h>
using namespace std;
/*

--------------------------------------------------------------------------------
				This code brought to you by Kunal Gupta
						cout<<"Hello World!";
--------------------------------------------------------------------------------

*/
#define MOD 1000000007
#define u unsigned
#define l long long int
#define s string
#define sgn(x) (((x)>0) - ((x)<0))
#define MAX(x,y) (((x)>(y))?(x):(y))
#define MIN(x,y) (((x)<(y))?(x):(y))
#define LOG(base,x) (log((x))/log((base)))
#define MODIN(x) (pm((x), (MOD-2)))
#define tin int t; cin>>t; while(t--)
int pm(u l x, u l y){
	u l powr=1, cur=x;
	for(int i=0; (1<<i) <= y; i++){
		if( (y & (1<<i)) == (1<<i))
			powr*=cur;
		cur*=cur;
		powr%=MOD;
		cur%=MOD;
	}
	return powr;
}
void 
int main(){
	ios::sync_with_stdio(0);
	int numberOfConnections;
	int numberOfNodes;
	int node,neighbour,wt;
	cin>>numberOfNodes;
	vector <vector <pair<int,int> > > weightedGraph(numberOfNodes);
	/*
	1 2 w1
	1 3 w2
	2 4 w3
	2 5 w4
	1 -<2,w1>, <3,w2>
	2 -<4,w3>, <5,w4>
	*/
	cin>>numberOfConnections;
	for (unsigned int i = 0; i < numberOfConnections; i += 1)
	{
		cin>>node>>neighbour>>wt;
		if(node>=numberOfNodes)
			exit(1);
		weightedGraph[node].push_back(make_pair(neighbour,wt));
		weightedGraph[neighbour].push_back(make_pair(node,wt));
	}
	for (unsigned int i = 0; i < numberOfNodes; i += 1)
	{
		cout<<i<<":\n ";
		for (unsigned int j = 0; j < weightedGraph[i].size(); j += 1)
		{
			cout<<weightedGraph[i][j].first<<' '<<weightedGraph[i][j].second<<'\n';
		}
	}
	
	return 0;
}


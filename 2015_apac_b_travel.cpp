#include <iostream>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <cmath>
#include <cstdlib>
#include <cstdio>
using namespace std;
typedef long long int lli;
typedef unsigned long long int ull;
typedef long double ld;

lli ***DP;
struct node{
	int value;
	vector<node *> nbd;
	vector<int *> cost_array;
};

void all_pair_shortest(){

}


int main(){
	ifstream in;
	ofstream out;
	in.open("input.txt");
	out.open("output.txt");
	int test;
	in>>test;
	int n,m,k;
	for(int i0=0;i0<test;i0++){



		cout<<"Case #"<<i0+1<<": "<< /*****VALUE HERE***/<<endl;		
	}	

	in.close();
	out.close();
	return 0;
}

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

bool isPossible(vector<long long> &Height, long long k, long long first){
    if(Height.size()==1) return k<Height[0];
    long long h = first;
    for(int i=0;i<Height.size();i++){
        if(Height[i]<h) return false;
        h+=k;
    }
    return true;
}

int main() {
	int T, N;
	cin>>T;
	
	for(int t=0;t<T;t++){
	    cin>>N;
	    vector<long long int> Height(N);
	    for(int i=0;i<N;i++){
	        cin>>Height[i];
	    }
	    
	    if(N==1){
	        cout<<Height[0]-1<<" "<<Height[0]<<endl;
	        continue;
	    }
	    
	    long long start=0, end=Height[N-1]-1;
	    while(start<end){
	        long long mid = (1+start+end)/2;
	        if(isPossible(Height, mid, 1)) start=mid;
	        else end=mid-1;
	    }
	    
	    long long f_start = 1, f_end = Height[N-1] - start*(N-1);
	    while(f_start<f_end){
	        long long first = (1+f_start+f_end)/2;
	        if(isPossible(Height, start, first)) f_start=first;
	        else f_end=first-1;
	    }
	    std::cout << start <<" "<< f_start << std::endl;
	}
	return 0;
}
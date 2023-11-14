#include <iostream>
#include <vector>
#include <ostream>
#include <algorithm>

using namespace std;


vector<int> Mochila(vector<int> b, vector<int> p, int M) {
  int n = p.size();
  //Inicializar ceros en matriz

  int S[n + 1][M + 1];
	int i, j;

	for(j = 0; j <= M ; j++){     
		S[0][j] = 0;
	}
	for(i = 1; i <= n ; i++){   
		S[i][0] = 0;
	}


	
	for(i = 1; i<= n; i++){
	  
	  for(j = 1; j<= M; j++){
	    
	    if(p[i-1]<= j){
	      
	      S[i][j]= max(S[i-1][j], b[i-1]+S[i-1][j-p[i-1]]);
	    }
	    
	    else{
	      
	      S[i][j]=S[i-1][j];
	    }
	    
	  }
	  
	}


	vector<int> Solu(n,0);
	i = n;
	j = M;

	while(i > 0 && j > 0){
	  if(S[i][j]>S[i-1][j]){
	    Solu[i-1]=1;
	    j=j-p[i-1];
	  }
	  i--;
	}


	return Solu;
    
}

ostream& operator<<(ostream& out, const vector<int>& vec) {
    out << "[ ";
    for (int i : vec) {
        out << i << " ";
    }
    out << "]";
    return out;
}

int main() {
  
  vector<int> b = {10,20,15,20};
  vector<int> p = {1,3,2,4};
  
    int M = 5;
    
    vector<int> f = Mochila(b,p,M);
    
    cout<< f<<endl;
   
    return 0;
}
 

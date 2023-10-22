#include <iostream>
#include <vector>

int binaria(std::vector<int> a, int x, int i, int tam){


	if(i>tam){
		return -1;
		
	}
	
	int med = (i+tam)/2;
	
	
	if(a[med]==x){
		return med;
	}
	else if(a[med]>x){
	  
	 return  binaria(a,x,i, med-1);
	}
	else{
	 return  binaria(a,x, med+1, tam);
	}
	 
	 }


int BusquedaBinaria_INV(std::vector<int> a, int x, int i, int tam){


	if(i>tam){
		return -1;
		
	}
	
	int med = (i+tam)/2;
	
	
	if(a[med]==x){
		return med;
	}
	else if(a[med]<x){
	  
	 return BusquedaBinaria_INV(a,x,i, med-1);
	}
	else{
	 return BusquedaBinaria_INV(a,x, med+1, tam);
	}
	 
	 }

int Partition(std::vector<int>& V, int ini, int fin){
  
  int x = V[fin];
  int i = ini;
  int j,aux;
  
  for( j = ini ; j < fin; j++){
    if( V[j] <= x){
      
      aux = V[i];
      V[i]=V[j];
      V[j]=aux;
      i++;
    }
    
 }

  aux = V[i];
  V[i]=V[fin];
  V[fin]=aux;
  
  return i;
}


void QuickSort(std::vector<int>& V, int ini, int fin){
  int pivot;
  if(ini<fin){ 
    pivot = Partition(V, ini, fin);
    QuickSort(V, ini, pivot - 1);
    QuickSort(V, pivot + 1, fin);
    
      }
}

 

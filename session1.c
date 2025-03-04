<<<<<<< HEAD
#include <stdio.h>    
#include <stdlib.h>      
#include <math.h>         
#include <stdbool.h>   
   
#define ll int

void remplirD1(int* t,int n){
    for(int i=0;i<n;i++){
        printf("donner un entier \n");
        scanf("%d",&t[i]);
    }
}

void affD1(int* t,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",t[i]);
    }
    printf("\n");
}

void lireparametre(int* n,int* m){
    do
    {
        printf("Donner la size de tableau\n");
        scanf("%d%d",n,m);
    } while (*n<=0 || *m<=0);
}
void sol() {  /// there is no reference in c
    int n=0,m=0;
    lireparametre(&n,&m);
    int** tab=(int**)malloc(n*sizeof(int));  /// 2D table
    for(int i=0;i<n;i++) tab[i]=(int*)malloc(m*sizeof(int));
    for(int i=0;i<n;i++) remplirD1(tab[i],m);
    for(int i=0;i<n;i++) affD1(tab[i],m);
    for(int i=0;i<n;i++) free(tab[i]);
    free(tab);
}

int main() {
    int tt = 1;
    // scanf("%d", &tt);
    while (tt--) {
        sol();
    }
    return 0;
}
=======
#include <stdio.h>    
#include <stdlib.h>      
#include <math.h>         
#include <stdbool.h>   
   
#define ll int

void remplirD1(int* t,int n){
    for(int i=0;i<n;i++){
        printf("donner un entier \n");
        scanf("%d",&t[i]);
    }
}

void affD1(int* t,int n){
    for(int i=0;i<n;i++){
        printf("%d\t",t[i]);
    }
    printf("\n");
}

void lireparametre(int* n,int* m){
    do
    {
        printf("Donner la size de tableau\n");
        scanf("%d%d",n,m);
    } while (*n<=0 || *m<=0);
}
void sol() {  /// there is no reference in c
    int n=0,m=0;
    lireparametre(&n,&m);
    int** tab=(int**)malloc(n*sizeof(int));  /// 2D table
    for(int i=0;i<n;i++) tab[i]=(int*)malloc(m*sizeof(int));
    for(int i=0;i<n;i++) remplirD1(tab[i],m);
    for(int i=0;i<n;i++) affD1(tab[i],m);
    for(int i=0;i<n;i++) free(tab[i]);
    free(tab);
}

int main() {
    int tt = 1;
    // scanf("%d", &tt);
    while (tt--) {
        sol();
    }
    return 0;
}
>>>>>>> 19dfa31 (commit c1)

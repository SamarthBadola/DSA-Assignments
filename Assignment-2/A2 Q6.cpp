#include<iostream>
#define MAX 100
using namespace std;
struct Triplet{
    int r,c,v;
};
void readMatrix(Triplet t[], int &nz){
    cout<<"Enter number of non-zero elements: ";
    cin>>nz;
    cout<<"Enter row col value for "<<nz<<" elements:\n";
    for(int i=0;i<nz;i++){
        cin>>t[i].r>>t[i].c>>t[i].v;
    }
}
void printMatrix(Triplet t[], int nz){
    cout<<"Row Col Val\n";
    for(int i=0;i<nz;i++)
        cout<<t[i].r<<"  "<<t[i].c<<"  "<<t[i].v<<"\n";
}
void transpose(Triplet t[], Triplet tr[], int nz){
    for(int i=0;i<nz;i++){
        tr[i].r=t[i].c;
        tr[i].c=t[i].r;
        tr[i].v=t[i].v;
    }
}
int add(Triplet a[], int na, Triplet b[], int nb, Triplet sum[]){
    int i=0,j=0,k=0;
    while(i<na && j<nb){
        if(a[i].r<b[j].r || (a[i].r==b[j].r && a[i].c<b[j].c))
            sum[k++]=a[i++];
        else if(b[j].r<a[i].r || (b[j].r==a[i].r && b[j].c<a[i].c))
            sum[k++]=b[j++];
        else{
            sum[k]=a[i];
            sum[k++].v=a[i++].v+b[j++].v;
        }
    }
    while(i<na) sum[k++]=a[i++];
    while(j<nb) sum[k++]=b[j++];
    return k;
}
int multiply(Triplet a[], int na, Triplet b[], int nb, Triplet prod[]){
    Triplet bt[MAX];
    transpose(b,bt,nb);
    int k=0;
    for(int i=0;i<na;i++){
        for(int j=0;j<nb;j++){
            if(a[i].c==bt[j].c){
                int r=a[i].r;
                int c=bt[j].r;
                int v=a[i].v*bt[j].v;
                int found=0;
                for(int x=0;x<k;x++){
                    if(prod[x].r==r && prod[x].c==c){
                        prod[x].v+=v;
                        found=1;
                        break;
                    }
                }
                if(!found){
                    prod[k].r=r;
                    prod[k].c=c;
                    prod[k++].v=v;
                }
            }
        }
    }
    return k;
}
int main(){
    Triplet a[MAX],b[MAX],res[MAX];
    int na,nb,nr;
    cout<<"First matrix:\n"; readMatrix(a,na);
    cout<<"Second matrix:\n"; readMatrix(b,nb);
    cout<<"\n(a) Transpose of first matrix:\n";
    transpose(a,res,na); printMatrix(res,na);
    cout<<"\n(b) Addition of matrices:\n";
    nr=add(a,na,b,nb,res); printMatrix(res,nr);
    cout<<"\n(c) Multiplication of matrices:\n";
    nr=multiply(a,na,b,nb,res); printMatrix(res,nr);
    return 0;
}

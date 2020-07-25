#include<stdio.h>
int main()
{
    int n,i,j,c,a[100],b[100],d[100],t;
    scanf("%d%d",&n,&t);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]>t) b[i]=a[i]/t;
        else b[i]=0;}
    for(i=0;i<n;i++){
        if(a[i]>t)
        {c=0;
            for(j=0;j<n;j++)
            {
                if(j!=i){
                if(b[j]==0) c=c+a[j];
                else if(i<j&&b[j]>0){
                 if(b[j]<b[i]) c=c+a[j];
                    else if(b[j]==b[i]) {
					if(a[i]%t==0) c=c+(b[i]-1)*t;
					else  c=c+b[i]*t;}
                    else { if(a[i]%t==0) c=c+(b[i]-1)*t;
					else c=c+(b[i])*t;}
					}
                else if(i>j&&b[j]>0){
                    if(b[j]<b[i]) c=c+a[j];
                    else if(b[j]==b[i])  c=c+a[j];
					else { if(a[i]%t==0) c=c+b[i]*t;
                    else c=c+(b[i]+1)*t;}}
            }}
            d[i]=c;
        }
        else{
            if(i==0) d[i]=0;
            else {c=0;
                for(j=0;j<i;j++){
                    if(a[j]>t) c=c+t;
                    else c=c+a[j];}
            }d[i]=c;}}
    printf("bt        wt       tat\n");
    for(i=0;i<n;i++)
    printf("%d        %d        %d\n",a[i],d[i],a[i]+d[i]);
}

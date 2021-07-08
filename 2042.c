// refer to https://blog.naver.com/ndb796/221282210534

#include <stdio.h>

long long int init(int start, int end, int index,long long int arry[], long long int data[]){
        int mid = (start+end)/2;
        if(start==end) return data[index]=arry[start];
        return data[index]=init(start,mid,index*2, arry, data)+init(mid+1,end,index*2+1, arry, data);
}

long long int sum(int start, int end, int index, int left, int right, long long int data[]) {
        int mid=(start+end)/2;
        if(left>end||right<start) return 0;
        if(left <=start&&right>=end) return data[index];
        return sum(start,mid,index*2,left,right, data) + sum(mid+1,end,index*2+1,left,right,data);
}

void change(int start, int end, int b, int index, long long int newnum, long long int data[]){
        if(start<=b && b<=end) data[index]+=newnum;
		else return;
		if(start==end) return;
        int mid=(start+end)/2;
        change(start, mid, b, index*2, newnum, data);
        change(mid+1, end, b, index*2+1, newnum, data);
}


int main () {
        int n,m,k,a,b;
		long long int c;
        scanf("%d %d %d", &n, &m, &k);
        long long int arry[n+1];
        long long int data[4*n];
        for (int i=1;i<=n;i++){
                scanf("%lld", &arry[i]);
        }
        init(1,n,1, arry, data);

        for (int i=0;i<m+k;i++) {
                scanf("%d %d %lld", &a, &b, &c);
                if(a==1){
                        change(1,n,b,1,c-arry[b],data);
						arry[b]=c;
                }
                else{
                        printf ("%lld\n", sum(1,n,1,b,c,data));
                }
        }



        return 0;
}

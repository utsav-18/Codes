#include <stdio.h>

int maze(int cr ,int cc ,int er ,int ec) {

// cr=current row ; cc=current column ; er=ending row ; ec=ending column ;

if(cr==er && cc==ec) return 1;

int rightways=0;

if(cr==er){      //only rightways call;
    rightways +=  maze(cr,cc+1,er,ec);
}

int downways=0;

if(cc==ec){     //only downways call;

    downways += maze(cr+1,cc,er,ec);

}

if (cr<er && cc<ec) {

     rightways +=  maze(cr,cc+1,er,ec);
     downways += maze(cr+1,cc,er,ec);
}

int totalways = rightways + downways;

return totalways;

}


int main () {

int n,m;

printf("Enter the no of rows:");
scanf("%d",&n);

printf("Enter the no of columns:");
scanf("%d",&m);

int noOfways = maze(1,1,n,m);

printf("Number of way are:%d",noOfways);


    return 0;

}
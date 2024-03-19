#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void check_min_num(void);
void count_range_num(void);
void most_number(void);
void max_and_average(void);
void pop_exchange(void);
void squared_up(void);
int main()
{
    //紇15-4 琩高程钡计
    //check_min_num();
    //紇15-5 礶计参璸兵瓜(翴)
    //count_range_num();
    //紇15-6 ―絛瞅ず渤计
    //most_number();
    //紇15-7 计参璸
    //max_and_average();
    //紇17-3 獁猨逼猭
    //pop_exchange();
    //紇18-2 蝴皚
    //int v[2][3]={{1,2,3},{4,5,6}};
    //紇18-5 繦诀ネΘ甤 (翴)
    squared_up();
    return 0;
}
void squared_up()
{
    int s[9]={0},i,a[9]={1,2,3,4,5,6,7,8,9};
    srand(time(0));
    //teacher's code
    for(i=0; i<9; i++)
    {
        int m=rand()%(9-i) + i; //i竚计繦诀籔逞⊿砆传竚计()暗ユ传
        int t=a[i];
        a[i]=a[m];
        a[m]=t;
    }
    for (i=0; i<9; i++)
    {
        printf("%d",a[i]);
        if(i%3 == 2)
        {
            printf("\n");
        }
    }
    /*
    for (i=0; i<9; i++)
    {
        s[i] = rand()%9+1;
        int j = 0,same = 0;
        while(same == 0)
        {
            if(s[i] == a[j])
            {
                a[j] = 0;
                same = 1;
            }
            j=j+1;
            if(j==9 && same == 0)
            {
                s[i] = rand()%9+1;
                j=0;
            }
        }
    }
    for (i=0; i<9; i++)
    {
        printf("%d ",s[i]);
        if(i%3 == 2)
        {
            printf("\n");
        }
    }
    */
}
void pop_exchange()
{
    int v[5]={0},i,c=4,temp;
    for(i=0; i<5; i++)
    {
        scanf("%d",&v[i]);
    }
    i=0;
    while(1)
    {
        if (v[i]>v[i+1])
        {
            temp=v[i];
            v[i]=v[i+1];
            v[i+1]=temp;
        }
        i=i+1;
        if(i==c)
        {
            i=0;
            c=c-1;
        }
        if(c==0)
        {
            break;
        }
    }
    for (i=0; i<5; i++)
    {
        printf("%d, ",v[i]);
    }

}
void max_and_average()
{
    int i, max_i=0, n[10]={0}, sum=0;
    for(i=0; i<10; i++)
    {
        scanf("%d",&n[i]);
    }
    for (i=0; i<10; i++)
    {
        if(n[i] > n[max_i])
        {
            max_i = i;
        }
        sum = sum + n[i];
    }
    printf("Max: %d\n",n[max_i]);
    printf("Avg: %f\n",(float)sum/i);
}
void most_number()
{
    int i, max_i=0, n, c[10] = {0};
    for(i=0; i<10; i++)
    {
        scanf("%d",&n);
        c[n]++;
    }
    for(i=0; i<10; i++)
    {
        if(c[i] >= c[max_i])
        {
            max_i = i;
        }
    }
    printf("Ans: %d",max_i);

}
void count_range_num()
{
    //teacher's code
    int i, j, n, b[10] = {0};
    for(i=0; i<10; i++)
    {
        scanf("%d",&n);
        b[(n-1)/10]++;
    }
    for (i=1; i<=10; i++)
    {
        printf("%3d: ", i*10);
        for (j=0; j<b[i-1]; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    /*
    int n[10]={0},i,c[10]={0},j;
    for(i=0; i<10; i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0; i<10; i++)
    {
        int ten_digits = n[i]/10, digits = n[i]%10;
        if(digits != 0)
        {
            c[ten_digits]++;
        }
        else
        {
            c[ten_digits-1]++;
        }
    }
    i=1;
    while(1)
    {
       if(i > 10)
       {
            break;
       }
       printf("%3d: ",i*10);
       for(j=0; j<c[i-1]; j++)
       {
            printf("*");
       }
       i=i+1;
       printf("\n");
    }
    */
}
void check_min_num()
{
    int n[10]={0},i,q;
    for(i=0; i<10; i++)
    {
        scanf("%d",&n[i]);
    }
    while(1)
    {
        printf("Q: ");
        scanf("%d",&q);
        if(q==0)
        {
            break;
        }
        int nearest_n = n[0], nearest_d = abs(q-n[0]);
        for(i=0; i<10; i++)
        {
            int d = abs(q-n[i]);
            if( nearest_d > d || (nearest_d == d && n[i] < nearest_n) )
            {
                nearest_d = d;
                nearest_n = n[i];
            }
        }
        printf("%d\n",nearest_n);
    }
}

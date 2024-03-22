#include <stdio.h>
#include <string.h>
//1.输入一个五位的正整数，输出其逆数。例如输入12345，输出应为54321。
//int main() {
//    int num, reverse = 0;
//    printf("请输入一个五位的正整数：");
//    scanf("%d", &num);
//    while (num != 0) {
//        reverse = reverse * 10 + num % 10;
//        num /= 10;
//    }
//    printf("逆数为：%d\n", reverse);
//    return 0;
//}

//2.计算1+2+3…+n的值，n是从键盘输入的自然数。
//int main(){
//    int n;
//    int num;
//    printf("请输入一个自然数；");
//    scanf("%d",&n);
//    for (int i = 1; i <= n; ++i) {
//        num=num+i;
//    };
//    printf("%d",num);
//}

//3.从终端（键盘）读入20个数据到数组中，统计其中正数的个数，并计算这些正数之和。
//int main() {
//    int nums[20];
//    int num = 0;
//    int sum = 0;
//    printf("请输入20个整数：\n");
//    for (int i = 0; i < 20; i++) {
//        scanf("%d", &nums[i]);
//    }
//    for (int i = 0; i < 20; i++) {
//        if (nums[i] > 0) {
//            num++;
//            sum += nums[i];
//        }
//    }
//    printf("正数个数：%d\n", num);
//    printf("正数之和：%d\n", sum);
//    return 0;
//}

//4.从终端（键盘）将5个整数输入到数组a中，然后将a逆序复制到数组b中，并输出b中各元素的值。
//int main(){
//    int a[5];
//    int b[5];
//    printf("请输入五个整数；");
//    for (int i = 0; i < 5; ++i)
//    {
//        scanf("%d", &a[i]);
//    }
//    for (int j = 0; j < 5; ++j)
//    {
//      b[j]=a[4-j];
//        printf("%d",b[j]) ;
//    }
//}

//5.要将5张100元的大钞票，换成等值的50元，20元，10元，5元一张的小钞票，每种面值至少1张，编程求需要多少张纸币。
//int main(){
//    if(100%50==0){
//        break;
//    }
//    if
//
//
//
//}

//6.求n以内（不包括n）同时能被3和7整除的所有自然数之和的平方根s，n从键盘输入。例如若n为1000时，函数值应为：s=153.909064。
//int main(){
//    int n;
//    int num=0;
//    double s = 0;
//    int i;
//    printf("请输入一个正整数；");
//    scanf("%d",&n);
//    for (i = 0; i < n; ++i)
//    {
//        if(i%3==0&&i%7==0){
//            num=num+i;
//        }
//    }
//    s=sqrt(num);
//    printf("%f", s);
//}

//7.一辆卡车违反交通规则，撞人后逃跑。现场有三人目击事件，但都没有记住车号，只记下车号的一些特征。甲说：牌照的前两位数字是相同的；乙说：牌照的后两位数字是相同的，但与前两位不同；丙是数学家，他说：四位的车号刚好是一个整数的平方。请根据以上线索找出车号。



//8.输入1~10之间的一个数字，输出它对应的英文单词。
//int main(){
//    int a;
//    printf("请输入1~10之间的一个数字：");
//    scanf("%d",&a);
//    switch (a) {
//        case 1:printf("one");  break;
//        case 2:printf("two");  break;
//        case 3:printf("three");  break;
//        case 4:printf("four");  break;
//        case 5:printf("five");  break;
//        case 6:printf("six");  break;
//        case 7:printf("seven");  break;
//        case 8:printf("eight");  break;
//        case 9:printf("nine");  break;
//        case 10:printf("ten");  break;
//    }
//};

//9.个位数为6且能被3整除的三位自然数共有多少个，分别是哪些？
//int main(){
//    int num;
//    for (int i = 100; i < 1000; ++i) {
//        if(i%10==6&&i%3==0){
//            num++;
//            printf("%d\n",i);
//        };
//    }
//        printf("共有%d个，num");
//}

//10．输入某年某月某日，判断这一天是这一年的第几天？



//11．两个乒乓球队进行比赛，各出三人。甲队为a,b,c三人，乙队为x,y,z三人。已抽签决定比赛名单。有人向队员打听比赛的名单。a说他不和x比，c说他不和x,z比，请编程序找出三队赛手的名单。


//12．有5个人坐在一起，问第五个人多少岁？他说比第4个人大2岁。问第4个人岁数，他说比第3个人大2岁。问第三个人，又说比第2人大两岁。问第2个人，说比第一个人大两岁。最后 问第一个人，他说是10岁。请问第五个人多大？
//int main(){
//    int one=10,two,three,four,five;
//    two=one+2;
//    three=two+2;
//    four=three+2;
//    five=four+2;
//    printf("第五个人%d岁",five);
//    }

//13.输入某三角形的三个边的长度，判断出这是个什么三角形（等腰、等边、任意，或不能构成）。
//int main(){
//    int a,b,c;
//    printf("请输入三边的长度：");
//    scanf("%d%d%d",&a,&b,&c);
//    if(a+b<c||a+c<b||b+c<a){
//        printf("不能构成三角形");
//        return 0;
//    }
//    if(a==b||a==c||b==c){
//        if(a==b&&a==c)
//            printf("等边三角形");
//        else
//            printf("等腰三角形");
//    }
//    else printf("任意三角形");
//}

//14.输入10个数，分别统计其中正数、负数、零的个数。
//int main(){
//    double a[10];
//    int i;
//    int zheng=0,fu=0,zero=0;
//    printf("请输入10个数:");
//    for (i = 0; i < 10; ++i) {
//        scanf("%lf",&a[i]);
//    }
//    for (i= 0; i < 10; ++i) {
//        if(a[i]>0)
//            zheng++;
//        else if(a[i]<0)
//            fu++;
//        else
//            zero++;
//    }
//    printf("正数有%d个\n",zheng);
//    printf("负数有%d个\n",fu);
//    printf("0有%d个",zero);
//}

//15.先随机产生N个三位自然数输出，然后再输出其中同时是3、5、7倍数的数。（设N为500）

//16.用for编程找出100~200中的完全平方数。
//int main(){
//    for (int i = 100; i < 200; ++i) {
//        for (int j = 10; j < sqrt(200); ++j) {
//            if(i==j*j)
//                printf("%d\n",i);
//        }
//    }
//}

//17.从终端输入三个正整数，判断这三个数能否构成直角三角形。



//25.从键盘输入两个字串，输出其中较短的那个字串，并输出它的长度。
//int main() {
//    char a[1000];
//    char b[1000];
//    printf("请输入两个字符串：");
//    scanf("%s", a);
//    scanf("%s", b);
//    int la = strlen(a);
//    int lb = strlen(b);
//    if (la < lb) {
//        printf("%s\n", a);
//        printf("%d\n", la);
//    } else {
//        printf("%s\n", b);
//        printf("%d\n", lb);
//    }
//    return 0;
//}

//26.从键盘输入长度不等的两个字串，将短串连接于长串之后输出。
//int main() {
//    char a[1000];
//    char b[1000];
//    printf("请输入两个长度不等的字符串：");
//    scanf("%s", a);
//    scanf("%s", b);
//    int la = strlen(a);
//    int lb = strlen(b);
//    if(la>lb)
//        printf("%s",strcat(a,b));
//    else
//        printf("%s",strcat(b,a));
//}

//27.从键盘输入长度不等的两个字串，将长串连接于短串之后输出。
/*
int main() {
    char a[1000];
    char b[1000];
    printf("请输入两个长度不等的字符串：");
    scanf("%s", a);
    scanf("%s", b);
    int la = strlen(a);
    int lb = strlen(b);
    if(lb>la)
        printf("%s",strcat(a,b));
    else
        printf("%s",strcat(b,a));
}*/

//30.从键盘输入10个战士的身高，输出平均身高，并找出哪些身高低于平均身高
//int main(){
//double height[10];
//double total;
//double average;
//    printf("请输入十个战士的身高：");
//    for (int i = 0; i < 10; ++i) {
//        scanf("%lf",&height[i]);
//    }
//    for (int i = 0; i < 10; ++i) {
//        total+=height[i];
//    }
//    printf("平均身高是：%lf\n",total/10);
//    for (int i = 0; i < 10; ++i) {
//        if(height[i]<total/10)
//            printf("%lf",height[i]);
//    }
//}

//31.从键盘输入10个战士的身高，输出平均身高，并找出哪些身高高于平均身高。
//int main(){
//double height[10];
//double total;
//double average;
//    printf("请输入十个战士的身高：");
//    for (int i = 0; i < 10; ++i) {
//        scanf("%lf",&height[i]);
//    }
//    for (int i = 0; i < 10; ++i) {
//        total+=height[i];
//    }
//    printf("平均身高是：%lf\n",total/10);
//    for (int i = 0; i < 10; ++i) {
//        if(height[i]>+total/10)
//            printf("%lf",height[i]);
//    }
//}

//32.从键盘输入10个战士的身高，输出最高、最低的身高。
//int main() {
//    double height[10];
//    double max = -1e9;
//    double min = 1e9;
//    printf("请输入十个战士的身高：");
//    for (int i = 0; i < 10; ++i) {
//        scanf("%lf", &height[i]);
//    }
//    for (int i = 0; i < 10; ++i) {
//        if (height[i] > max)
//            max = height[i];
//        if (height[i] < min)
//            min = height[i];
//    }
//    printf("最高的是%.2lf\n", max);
//    printf("最低的是%.2lf\n", min);
//    return 0;
//}

//33.“百钱百鸡”问题。百钱买百鸡，鸡翁一值钱三，鸡母一值钱二，鸡雏三值钱一，问鸡翁、鸡母、鸡雏各几何？
//int main() {
//    for (int a = 0; a <= 100; ++a) {
//        for (int b = 0; b <= 100; ++b) {
//            int c = 100 - a - b;
//            if ((a + b + c == 100) && (3 * a + 2 * b + c / 3 == 100))
//                printf("鸡翁：%d只，鸡母：%d只，鸡雏：%d只\n", a, b, c);
//        }
//    }
//}

//42.设N是一个四位数，它的9倍恰好是其反序数，求N。反序数就是将整数的数字倒过来形成的整数。例如：1234的反序数是4321。
//int main(){
//    int n,shi,bai,qian;
//    for (int r = 9001; r < 10000; r=r+10) {
//            shi=r/10%10;
//            bai=r/100%10;
//            qian=r/1000;
//            n=1000+shi*100+bai*10+1;
//            if(r=9*n)
//                printf("%d\n",n);
//        }
//}

//选择排序
//int main() {
//    int a[5] = {4, 1, 6, 9, 3};
//    int n = 5, i, j,temp;
//    for (i = 0; i < n; ++i) {
//        int min = i;
//        for (j = i + 1; j < n; ++j) {
//            if (a[j] < a[min])
//            min=j;
//        }
//        if (min != i) {
//            temp = a[i];
//            a[i] = a[min];
//            a[min] = temp;
//        }
//    }
//    for (int k = 0; k < n; ++k) {
//        printf("%d",a[k]);
//    }
//}

//冒泡排序
//void bubblesort(int a[],int n){
//    int i,j,temp;
//    for (i = 0; i < n-1; ++i)
//    {   bool flag= false;
//        for (j = n-1; j > i; j--)
//        {
//            if(a[j]<a[j-1])
//            {
//                temp=a[j];
//                a[j]=a[j-1];
//                a[j-1]=temp;
//                flag = true;
//            }
//        }
//        if (flag==false)
//            break;
//    }
//    for (int k = 0; k < n; ++k) {
//        printf("%d",a[k]);
//    }
//}
//int main(){
//    int a[5]={4, 1, 6, 9, 3};
//    bubblesort(a,5);
//}

//直接插入排序
//void throughsort(int a[], int n) {
//    int temp;
//    int i, j;
//    for (i = 1; i < n; ++i) {
//        if (a[i] < a[i - 1]) {
//            temp = a[i];
//            for (j = i - 1; j >= 0 && a[j] > temp; --j) {
//                a[j + 1] = a[j];
//            }
//            a[j + 1] = temp;
//        }
//    }
//    for (int k = 0; k < n; ++k) {
//        printf("%d ", a[k]);
//    }
//}
//int main() {
//    int a[5] = {4, 1, 6, 9, 3};
//    throughsort(a, 5);
//    return 0;
//}

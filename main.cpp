#include <stdio.h>
#include <string.h>
//1.����һ����λ�����������������������������12345�����ӦΪ54321��
//int main() {
//    int num, reverse = 0;
//    printf("������һ����λ����������");
//    scanf("%d", &num);
//    while (num != 0) {
//        reverse = reverse * 10 + num % 10;
//        num /= 10;
//    }
//    printf("����Ϊ��%d\n", reverse);
//    return 0;
//}

//2.����1+2+3��+n��ֵ��n�ǴӼ����������Ȼ����
//int main(){
//    int n;
//    int num;
//    printf("������һ����Ȼ����");
//    scanf("%d",&n);
//    for (int i = 1; i <= n; ++i) {
//        num=num+i;
//    };
//    printf("%d",num);
//}

//3.���նˣ����̣�����20�����ݵ������У�ͳ�����������ĸ�������������Щ����֮�͡�
//int main() {
//    int nums[20];
//    int num = 0;
//    int sum = 0;
//    printf("������20��������\n");
//    for (int i = 0; i < 20; i++) {
//        scanf("%d", &nums[i]);
//    }
//    for (int i = 0; i < 20; i++) {
//        if (nums[i] > 0) {
//            num++;
//            sum += nums[i];
//        }
//    }
//    printf("����������%d\n", num);
//    printf("����֮�ͣ�%d\n", sum);
//    return 0;
//}

//4.���նˣ����̣���5���������뵽����a�У�Ȼ��a�����Ƶ�����b�У������b�и�Ԫ�ص�ֵ��
//int main(){
//    int a[5];
//    int b[5];
//    printf("���������������");
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

//5.Ҫ��5��100Ԫ�Ĵ�Ʊ�����ɵ�ֵ��50Ԫ��20Ԫ��10Ԫ��5Ԫһ�ŵ�С��Ʊ��ÿ����ֵ����1�ţ��������Ҫ������ֽ�ҡ�
//int main(){
//    if(100%50==0){
//        break;
//    }
//    if
//
//
//
//}

//6.��n���ڣ�������n��ͬʱ�ܱ�3��7������������Ȼ��֮�͵�ƽ����s��n�Ӽ������롣������nΪ1000ʱ������ֵӦΪ��s=153.909064��
//int main(){
//    int n;
//    int num=0;
//    double s = 0;
//    int i;
//    printf("������һ����������");
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

//7.һ������Υ����ͨ����ײ�˺����ܡ��ֳ�������Ŀ���¼�������û�м�ס���ţ�ֻ���³��ŵ�һЩ��������˵�����յ�ǰ��λ��������ͬ�ģ���˵�����յĺ���λ��������ͬ�ģ�����ǰ��λ��ͬ��������ѧ�ң���˵����λ�ĳ��Ÿպ���һ��������ƽ������������������ҳ����š�



//8.����1~10֮���һ�����֣��������Ӧ��Ӣ�ĵ��ʡ�
//int main(){
//    int a;
//    printf("������1~10֮���һ�����֣�");
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

//9.��λ��Ϊ6���ܱ�3��������λ��Ȼ�����ж��ٸ����ֱ�����Щ��
//int main(){
//    int num;
//    for (int i = 100; i < 1000; ++i) {
//        if(i%10==6&&i%3==0){
//            num++;
//            printf("%d\n",i);
//        };
//    }
//        printf("����%d����num");
//}

//10������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿



//11������ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ��ѳ�ǩ���������������������Ա����������������a˵������x�ȣ�c˵������x,z�ȣ��������ҳ��������ֵ�������


//12����5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ��� �ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
//int main(){
//    int one=10,two,three,four,five;
//    two=one+2;
//    three=two+2;
//    four=three+2;
//    five=four+2;
//    printf("�������%d��",five);
//    }

//13.����ĳ�����ε������ߵĳ��ȣ��жϳ����Ǹ�ʲô�����Σ��������ȱߡ����⣬���ܹ��ɣ���
//int main(){
//    int a,b,c;
//    printf("���������ߵĳ��ȣ�");
//    scanf("%d%d%d",&a,&b,&c);
//    if(a+b<c||a+c<b||b+c<a){
//        printf("���ܹ���������");
//        return 0;
//    }
//    if(a==b||a==c||b==c){
//        if(a==b&&a==c)
//            printf("�ȱ�������");
//        else
//            printf("����������");
//    }
//    else printf("����������");
//}

//14.����10�������ֱ�ͳ��������������������ĸ�����
//int main(){
//    double a[10];
//    int i;
//    int zheng=0,fu=0,zero=0;
//    printf("������10����:");
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
//    printf("������%d��\n",zheng);
//    printf("������%d��\n",fu);
//    printf("0��%d��",zero);
//}

//15.���������N����λ��Ȼ�������Ȼ�����������ͬʱ��3��5��7��������������NΪ500��

//16.��for����ҳ�100~200�е���ȫƽ������
//int main(){
//    for (int i = 100; i < 200; ++i) {
//        for (int j = 10; j < sqrt(200); ++j) {
//            if(i==j*j)
//                printf("%d\n",i);
//        }
//    }
//}

//17.���ն������������������ж����������ܷ񹹳�ֱ�������Ρ�



//25.�Ӽ������������ִ���������н϶̵��Ǹ��ִ�����������ĳ��ȡ�
//int main() {
//    char a[1000];
//    char b[1000];
//    printf("�����������ַ�����");
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

//26.�Ӽ������볤�Ȳ��ȵ������ִ������̴������ڳ���֮�������
//int main() {
//    char a[1000];
//    char b[1000];
//    printf("�������������Ȳ��ȵ��ַ�����");
//    scanf("%s", a);
//    scanf("%s", b);
//    int la = strlen(a);
//    int lb = strlen(b);
//    if(la>lb)
//        printf("%s",strcat(a,b));
//    else
//        printf("%s",strcat(b,a));
//}

//27.�Ӽ������볤�Ȳ��ȵ������ִ��������������ڶ̴�֮�������
/*
int main() {
    char a[1000];
    char b[1000];
    printf("�������������Ȳ��ȵ��ַ�����");
    scanf("%s", a);
    scanf("%s", b);
    int la = strlen(a);
    int lb = strlen(b);
    if(lb>la)
        printf("%s",strcat(a,b));
    else
        printf("%s",strcat(b,a));
}*/

//30.�Ӽ�������10��սʿ����ߣ����ƽ����ߣ����ҳ���Щ��ߵ���ƽ�����
//int main(){
//double height[10];
//double total;
//double average;
//    printf("������ʮ��սʿ����ߣ�");
//    for (int i = 0; i < 10; ++i) {
//        scanf("%lf",&height[i]);
//    }
//    for (int i = 0; i < 10; ++i) {
//        total+=height[i];
//    }
//    printf("ƽ������ǣ�%lf\n",total/10);
//    for (int i = 0; i < 10; ++i) {
//        if(height[i]<total/10)
//            printf("%lf",height[i]);
//    }
//}

//31.�Ӽ�������10��սʿ����ߣ����ƽ����ߣ����ҳ���Щ��߸���ƽ����ߡ�
//int main(){
//double height[10];
//double total;
//double average;
//    printf("������ʮ��սʿ����ߣ�");
//    for (int i = 0; i < 10; ++i) {
//        scanf("%lf",&height[i]);
//    }
//    for (int i = 0; i < 10; ++i) {
//        total+=height[i];
//    }
//    printf("ƽ������ǣ�%lf\n",total/10);
//    for (int i = 0; i < 10; ++i) {
//        if(height[i]>+total/10)
//            printf("%lf",height[i]);
//    }
//}

//32.�Ӽ�������10��սʿ����ߣ������ߡ���͵���ߡ�
//int main() {
//    double height[10];
//    double max = -1e9;
//    double min = 1e9;
//    printf("������ʮ��սʿ����ߣ�");
//    for (int i = 0; i < 10; ++i) {
//        scanf("%lf", &height[i]);
//    }
//    for (int i = 0; i < 10; ++i) {
//        if (height[i] > max)
//            max = height[i];
//        if (height[i] < min)
//            min = height[i];
//    }
//    printf("��ߵ���%.2lf\n", max);
//    printf("��͵���%.2lf\n", min);
//    return 0;
//}

//33.����Ǯ�ټ������⡣��Ǯ��ټ�������һֵǮ������ĸһֵǮ����������ֵǮһ���ʼ��̡���ĸ�����������Σ�
//int main() {
//    for (int a = 0; a <= 100; ++a) {
//        for (int b = 0; b <= 100; ++b) {
//            int c = 100 - a - b;
//            if ((a + b + c == 100) && (3 * a + 2 * b + c / 3 == 100))
//                printf("���̣�%dֻ����ĸ��%dֻ��������%dֻ\n", a, b, c);
//        }
//    }
//}

//42.��N��һ����λ��������9��ǡ�����䷴��������N�����������ǽ����������ֵ������γɵ����������磺1234�ķ�������4321��
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

//ѡ������
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

//ð������
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

//ֱ�Ӳ�������
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

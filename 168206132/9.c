/*
a说：“不是我作案的。”
b说：“d是小偷。”
c说：“b是盗窃钻石的罪犯。“
d说：“b故意诬陷我。”
假定只有一个人说了真话，判断谁偷走了钻石？
*/
# include <stdio.h>
int main(void){
    for(int x =1;x<=4;x++)
    {
        int y = (x!=1)+(x==2)+(x==4)+(x!=4);
        if(y == 1)
{
            printf("%c 偷走了钻石。\n",96+x);//a是小偷。
            break;
        }
    }
    return 0;
}

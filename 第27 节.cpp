#include <stdio.h>
int main()
{
 
return 0;
}






/*int main()
{
  char a = -128;
  //10000000000000000000000010000000——原码
  //11111111111111111111111101111111——反码
  //11111111111111111111111110000000——补码
  //存入a的形式为：10000000

  //整型提升之后的结果：11111111111111111111111110000000
  //%u打印按十进制无符号的数字所以原码、反码、补码一致直接打印

  printf("%u\n",a);  
  //%d 打印十进制有符号的数字
  //%u 打印十进制无符号的数字
  return 0;
 }
*/








/*
int main()
{
 char a= -1;
 //-1的补码为？
 //10000000000000000000000000000001——原码
 //11111111111111111111111111111110——反码
 //11111111111111111111111111111111——补码
 //char类型a中只能存放1个字节：11111111
 signed char b=-1;
 //char类型b中只能存放1个字节：11111111
 unsigned char c=-1;
 //char类型b中只能存放1个字节：11111111
 printf("a=%d,b=%d,c=%d\n",a,b,c);
 //整型提升
 //a提升后的结果：11111111111111111111111111111111  再算出原码
 //b提升后的结果：11111111111111111111111111111111  再算出原码
 //有符号数整型提升补高位  无符号数整型提升高位补0
 //c提升后的结果：00000000000000000000000011111111   再算出原码，正数的原、反、补相同 结果为255
 return 0;
}
//结果为-1  -1 255
*/






/*
{
    int a = 0x11223344;
	int* p = &a;
    char* p = &a;
	*p = 0;  //四个字节全部变为0，

	return 0;
}
*/








/*
//指针类型的意义：
//1.指针类型决定了指针解引用操作符能访问几个字节：char* p；*p访问了一个字节；int* p；*p访问4个字节
//2.指针类型决定了指针+1 -1加的或者减的是几个字节，char* p；p+1 跳过一个字节；int* p；p+1  跳过4个字节
int leigeliang()
{
    int a = 1;
	//char* p =(char*)&a;
    //return *p;
  
	
	return* (char*)&a;

}
int main()
{

	int tamade = leigeliang();

	if(tamade = 1)
	{

		printf("小端\n");
	}
    else
	{
        printf("大端\n");
	}

return 0;
}

*/







/*
int leigeliang(void)
{
    int a = 1;
	char* p =(char*)&a;
    if(*p == 1) 
	{	
		return 1;
	}
	else
    {
	   return 0;
	}
}
int main()
{

	int tamade = leigeliang();

	if(tamade = 1)
	{

		printf("小端\n");
	}
    else
	{
        printf("大端\n");
	}

return 0;
}
*/







/*
int main()
{
    //写代码告诉我们当前的机器的字节序是什么
	//找字节序我只需要其中前两位是什么，所以为两个字节，使用char类型正好；
	int a = 1;
	char* p =(char*)&a;//将a的地址转换为char*类型
    if(*p == 1)  //char为两个字节01=1为小端，00=0为大端
    {
	 printf("小端\n");
	}
	else
	{
	printf("大端\n");
	}
	return 0;
}

*/
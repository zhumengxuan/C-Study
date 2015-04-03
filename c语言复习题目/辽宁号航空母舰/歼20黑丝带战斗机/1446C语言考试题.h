//
//  1446C语言考试题.h
//  
//
//  Created by 潘松彪 on 15/1/15.
//
//

//注，本题中凡是说明通过返回值返回的数据，
//必须返回，如果函数内打印，该题不得分
//未经讲师同意，修改函数声明，该题不得分
//函数内出现scanf，或getchar等读取方法，该题不得分

/*
 1.编写函数，将一个正整数逆序后返回。(15分)
 输入:123
 返回:321
 */
int reverse_number(int num);

/*
 2.编写函数，返回字符串中最长单词的字母个数。已知字符串中单词以空格、逗号和句号分割。(10分)
 输入:"Yes, I am kiding you."
 返回:6("kiding"的长度)
 */
int longest_word_in_string(const char * str);

/*
 3.将C++的标识符转成OC的标识符。(15分)
 C++的标识符和OC一样由数字字母下划线组成，打头的不是数字。当标识符超过一个单词，C++采用全字母小写，单词间用下划线连接的书写规范，如:qian_feng
 OC采用除第一个单词外，其余单词首字母大写的书写规范，如:qianFeng
 传入C++标识符，打印OC标识符
 */
void objc_identifier_from_cpp_identifier(const char * s);

/*
 4.编写函数，无需打印，将字符数组中的字符，按单词逆序。(15分)
 已知单词只以空格分隔。
 如:"Hello world"
 变成:"olleH dlrow"
 */
void reverse_word_in_string(const char * str);

/*
 5.编写函数，返回整型数组中元素的平均数是否是整数。(15分)
    a是数组首元素地址
    n是数组的元素个数
    平均数是整数返回1，不是返回0
 
    sum / n == aver(浮点型)
    (int)aver == 整型
 */
int is_avg_integer(int * a, int n);

/*
 6.已知千锋邮箱的用户名只能由数字字母下滑线组成，域名为@1000phone.com，判断一个字符串是否是千锋邮箱，是，返回1，不是返回0。(15分)
 mail@1000phone.com    是
 $mail@1000phone.com   不是
 mali@1000phone.comp   不是
 */
int is1000phone_mail_string(const char * str);

/*
 7.传入字符串，打印对应图形。(15分)
 如传入字符串"ABCDEFG"
 
 len
 行数：len + 1
 列数：2*len-1
 打印
      A           A：0  6     0  6
     BAB          B：1  5     1  7
    CB BC         C: 2  4     2  8
   DC   CD
  ED     DE       A: 1  6     1   6
 FE       EF      B: 2  5     2   7
GF         FG     C: 3  4     3   8
G           G
 图形类似两个^叠摞
 */

for(i = 0；i < len;i ++)

void print_string(const char * s);

==================over=====================


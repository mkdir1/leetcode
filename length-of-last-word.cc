/*
 * =====================================================================================
 *
 *       Filename:  length-of-last-word.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年12月10日 23时58分59秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Wenxian Ni (Hello World~), niwenxianq@qq.com
 *   Organization:  AMS/ICT
 *
 * =====================================================================================
 */
class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int length1  = 0;
        int length2  = 0;
        int i,j;
        char c;
        while(*s!='\0')
        {
            if(*s++!=' ') 
                length1++;
            else if(length1!=0)
            {
                length2 = length1; 
                length1 = 0;
            }
        }
        if(length1!=0)
            return length1;
        if(length1==0)
            return length2;
    }
};

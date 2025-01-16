class Solution(object):
    def minimizeXor(self, num1, num2):
        """
        :type num1: int
        :type num2: int
        :rtype: int
        """
        n1 = "{0:b}".format(int(num1))
        n2 = "{0:b}".format(int(num2))
        str_num1 = str(n1)
        str_num2 = str(n2)
        setbits_1 = str_num1.count('1') 
        setbits_2 = str_num2.count('1') 
        ans = "" 
        if setbits_1 == setbits_2:
            return num1
        elif setbits_1 > setbits_2:
            i = setbits_2
            for bit in str_num1 :
                if i == 0:
                    break
                if bit == '1':
                    i -= 1
                ans += bit
                
            left = len(str_num1) - len(ans)
            ans += left*'0'
        else:
            diff = setbits_2 - setbits_1
            tmp = str_num1[::-1] + '0'*100
            ans = tmp.replace('0', '1', diff)
            ans = ans[::-1]
        # print(ans)
        # return int(str_num1, 2) ^ int(ans, 2)
        return int(ans, 2)

if __name__ == "__main__":
    sol = Solution()
    n1 = 1 
    n2 = 12 
    res = sol.minimizeXor(n1, n2)
    print(res)
                

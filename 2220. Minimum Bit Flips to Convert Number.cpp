// This is solution to leetcode 2220 problem which is an easy problem on leetcode.
// quetion states that tell the no of bits to be flipped to change an given number to different number.
// we can here use the property of xor which gives 0 for same bits like 1 xor 1 or 0 xor 0 is 0.
//But 1 xor 0 is always 1.
//So xor start ad target value  and then counting how many bits in the resultant are 1 will give us the answer to the quetion.

int minBitFlips(int start, int goal) {
        
        int ans = start ^ goal;
        int count = 0;
        for(int i =0;i<31;i++){
            if (ans & (1 << i)) { 
            count++;
            }
        }
        return count;
    }

//(ans & (1 << i))  this is used to check if the i th bit of the anwer is set to 1 it ia a bitwise operator.

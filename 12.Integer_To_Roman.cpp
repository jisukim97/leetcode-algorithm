string* roman = new string[13]{ "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
int* integer = new int[13]{ 1,4,5,9,10,40,50,90,100,400,500,900,1000 };

class Solution {
public:

    string intToRoman(int num) {
        int index = 12;
        string answer = "";
        
        for(;index>=0;){
            int int_tmp = integer[index];
            if(int_tmp<=num){
                answer = answer + roman[index];
                num -= int_tmp;
            }
            else index--;
        }
        
        return answer;
    }
};
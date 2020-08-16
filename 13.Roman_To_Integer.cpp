string* roman = new string[13]{ "I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M" };
int* integer = new int[13]{ 1,4,5,9,10,40,50,90,100,400,500,900,1000 };

class Solution {
public:
    int romanToInt(string s) {
       
        int sum = 0;
        int slen = s.size();
        int index = 12; // roman_integer mapping정보를 가리키는 인덱스(큰수->작은수)

        for (int i = 0; i < slen; i++) {
            char one = s[i];
            char second = (i < (slen - 1)) ? s[i + 1] : -1;

            for (; index >= 0;) {
                string roman_tmp = roman[index];
                if (roman_tmp.size() == 1 && one == roman_tmp[0]) break;
                else if (roman_tmp.size() == 2 && one == roman_tmp[0] && second == roman_tmp[1]){
                    i++;
                    break;
                }
                else index--;
            
            }
            sum += integer[index];
        }

        return sum;
    }
};
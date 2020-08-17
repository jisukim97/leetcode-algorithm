class Solution
{
public:
    stack<char> brackets;

    bool isValid(string s)
    {
        int slen = s.size();

        for (int i = 0; i < slen; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
                brackets.push(s[i]);
            else
            {
                if (brackets.empty())
                    return false; //뒷부분이 들어왔는데 아무것도 스택에 없으면 false
                char tmp = brackets.top();
                brackets.pop();

                if ((s[i] == ')' && tmp != '(') || (s[i] == '}' && tmp != '{') || (s[i] == ']' && tmp != '['))
                    return false; //하나라도 짝이 안맞으면 false
            }
        }
        if (!brackets.empty())
            return false; //string 끝낫는데 앞부분이 스택에 남아있으면 false
        return true;
    }
};
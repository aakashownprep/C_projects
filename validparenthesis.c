class Solution{
    public:
    bool isValid(string str)
    {         stack<char> st;
            for(int i=0;i<str.size();i++)
            {
                if(str[i]=='(' ||  str[i]=='{' || str[i]=='[')
                {
                   st.push(str[i]);//add the parenthesis
                }
                else{
                    if(st.size()==0)
                    {
                        return false;//0
                    }
                    if((st.top()=='(' && str[i]==')') ||
                    (st.top()=='{' && str[i]=='}') ||
                    (st.top()=='[' && str[i]==']')) 
                    {
                        st.pop();
                    }
                    else{
                        return false;//0
                    }
                }
            }
            return st.size()==0;
        }
    };
    
    
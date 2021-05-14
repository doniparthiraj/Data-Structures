class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) 
    {
        vector<int> v;
        int d=(b*b)-(4*a*c);
        if(d<0)
        {
            v.push_back(-1);
            return v;
        }
        int x=floor((-b+(sqrt(d)))/(2*a)),y=floor((-b-sqrt(d))/(2*a));
        v.push_back(max(x,y));
        v.push_back(min(x,y));
        return v;
    }
};

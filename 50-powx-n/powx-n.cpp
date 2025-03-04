class Solution {
private:
        double power(double x,long n){
            if(n==0)return 1;//base condition
            if(n==1)return x;//base condition

            if(n%2==0){
                return power(x*x,n/2);//dividing the problem to small subproblem like if n is even if  square the x and half 
            }//the n
            return x * power(x,n-1);//else if n is odd get one x out then minus 1 to the power to make it even 
        }
public:
    double myPow(double x, int n) {
        long num=n;
        if(num<0){//if num or n is negative 
            return (1/power(x,-1*num));//recursive call of positive power and multiply -1 to make it +ve and reciprocal it
        }
        return power(x,num);//else return normal recursive postive power
        
    }
};
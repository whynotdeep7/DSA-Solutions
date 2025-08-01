// DONE USING SIEVE OF ERATOSTHENES

class Solution {
private:
    //brute force TC: O(n root n). SC: O(1) -> TLE(failed)


    vector<bool>sieve(int n){
       vector<bool> isPrime(n+1,true);
       isPrime[0]=false;
       isPrime[1]=false;

       for(int i=2;i*i<=n;i++){
            if(isPrime[i]){
                for(int j=i*i;j<n;j+=i){
                    isPrime[j]=false;
                }
            }
       }
       return isPrime;
    }
public:
    int countPrimes(int n) {
        vector<bool> primes=sieve(n);
        int cn2=0;
        for(int i=2;i<n;i++){
            if(primes[i]){
                cn2++;
            }
        }
        return cn2;
    }
};
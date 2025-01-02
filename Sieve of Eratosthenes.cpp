//Sieve of Eratosthenes is a kind of blackbox that uses bits to mark .Its easier way to check if a number id prime or not in complex problem to reduce the time complexity of the problem.
// it works in such a way that we take an array prime with all entries as 1 and do a calculatiion in suc a way that all the non prime numbers are marked as zero.

vector<int> function(int n){
        vector<int> prime(n+1,1);
        
        
        int m = sqrt(n);

        for(int i=2;i<=m;i++){
            if(prime[i] == 1){
                for(int j = i*i;j<=n;j=j+i){
                    prime[j] = 0;
                }
            }
        }
        return prime;

    }

//this function creates a vector for Seive of  Eratosthenes .
//we see how the vector prime conatins all the enteries as one.
// the first loop is iterating through sqrt of n because for n=30 all the factors will be coveres in sqrt 30 ie 5 ..5*5=25;
//if satement check if its is marked once ince it has no factor before it it is a prime number.and next loop marks all the factors of it.
// this function can be used in places to reduce the time complexity of the bigger program.


/*Counting the number of digit - O(log10(n) + 1) -> go on dividing the number by 10 until it is 0
O(1) -> (int)(log10(n)+1) are the total digits of a number*/
/*Reverse the number or Palindrome - O(log10(n) + 1) - Extract the digits and then 
example - 7789, do 0*10+9 = 9, 9*10+8 = 98, 98*10+7 = 987 and so on */
//When we are dividing something again and again then it is of TC = nlog(10)n
/* GCD of 2 numbers - Brute force(O(min(n1,n2))), just iterate 0 to above and check if percent operator is 0 or not 
GCD of 2 numbers - min(n1,n2)(O()), we can also go from min to 0 
GCD of 2 numbers - Euclidean algorithm - gcd(a,b)=gcd(a-5,b)=gcd(a,b-5) or we can just percent operator(a%b) to that whoever is bigger and then stop whenever a or b is 0 then the other one is our gcd */
//Armstrong number - An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits
/*Divisors - Brute force print all n%i==0 O(n)
Divisors - Optimal approach O(sqrtN) go upto sqrtn and take both i and n/i accordingly*/
//Prime check test - A prime number is a number that is only divisible by 1 and itself and the total number of divisors is 2.


//Goldbach's conjecture : Every even integer greater than 2 can be expressed as the sum of two primes. 
//Write a function which takes a number as input, verify if is an even number greater than 2
// and also print atleast one pair of prime numbers.
public class PrimeorNot{
	public static void PrimeorNot(int number){
		if(number%2!=0){
			System.out.println("Please enter any valid number");
		}
		for(int i=0;i<number/2;i++){
			if(isPrime(i) && isPrime(number-i)){
				System.out.println("Number found");
			}
		}
	}
	public static boolean isPrime(int number){
		for(int i=2;i<number;i++){
			if(number%i==0){
				return false;
			}
		}
		return true;
	}
}
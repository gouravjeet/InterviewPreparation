
public class SingletonDemo {
	public static void main(String[] args){
		// if we write code to make an instance , then it will give compile time error
		//we will get the object from getInstance 
		Singleton obj=Singleton.getInstance();
		obj.showMessage();
	}
}

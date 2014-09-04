
public class Singleton {
	public static Singleton instance=new Singleton();
	private Singleton(){}
	//make the constructor private
	public static Singleton getInstance(){
		return instance;
	}
	public void showMessage(){
		System.out.println("hello World");
	}
	
}


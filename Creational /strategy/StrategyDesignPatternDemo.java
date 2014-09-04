package dara.strategy;
// Class behaviour or its algorithm can be changed at run time.
// we represent various strategies and a context object whose behaviour changes as per strategy object
// 
public class StrategyDesignPatternDemo {
	public static void main(String[] args){
		Context context=new Context(new OperationAdd());
		System.out.println("10+5="+context.executeStrategy(10,5));
		
		context=new Context(new OperationSubstract());
		System.out.println("10+5="+context.executeStrategy(10,5));
		
	}
}

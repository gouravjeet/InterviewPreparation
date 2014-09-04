package dara.factory;

public class FactoryPattern {
	// we create objects without exposing the logic to the client
	// we refer to the newly created object using a common interface
	// we use factory to get object of concrete class by passing information such as type
	public static void main(String args[]){
		
//		ShapeFactory shapefactory=new ShapeFactory();
//		Shape shape1=shapefactory.getShape("CIRCLE");
//		shape1.draw();
//		Shape shape2=shapefactory.getShape("RECTANGLE");
//		shape2.draw();
//		Shape shape3=shapefactory.getShape("SQUARE");
//		shape3.draw();
//		We're going to create a Shape and Color interfaces and concrete classes 
//		implementing these interfaces. We creates an abstract factory class AbstractFactory 
//		as next step. Factory classes ShapeFactory and ColorFactory 
//		are defined where each factory extends AbstractFactory. A factory creator/generator 
//		class FactoryProducer is created.
//
//		AbstractFactoryPatternDemo, our demo class uses FactoryProducer to get a AbstractFactory object.
//		It will pass information (CIRCLE / RECTANGLE / SQUARE for Shape) to AbstractFactory to get the type of
//		object it needs. It also passes information (RED / GREEN / BLUE for Color) to AbstractFactory to get the 
//		type of object it needs.
//		
		AbstractFactory shapefactory=FactoryProducer.getFactory("SHAPE");
		Shape shape1=shapefactory.getShape("CIRCLE");
		shape1.draw();
		AbstractFactory colorfactory=FactoryProducer.getFactory("COLOR");
		Color color1=colorfactory.getColor("RED");
		color1.fill();
		
	}
}

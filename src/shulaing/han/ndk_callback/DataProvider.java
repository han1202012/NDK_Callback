package shulaing.han.ndk_callback;


public class DataProvider {

	public native void callCcode();
	public native void callCcode1();
	public native void callCcode2();
	
	//C调用java中空方法 shulaing.han.ndk_callback.DataProvider

	public void helloFromJava(){
		System.out.println("hello from java");
	}
	
	//C调用java中的带两个int参数的方法
	public int Add(int x,int y){
		System.out.println("the add result is : " + (x + y));
		return x + y;
	}
	
	//C调用java中参数为string的方法
	public void printString(String s){
		System.out.println("in java code :" + s);
	}
	
}

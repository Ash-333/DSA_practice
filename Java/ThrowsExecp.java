class ThrowsExecp {

	static void fun() throws IllegalAccessException
	{
		System.out.println("Inside fun(). ");
		throw new IllegalAccessException("demo");
	}

	// This is a caller function
	public static void main(String args[])
	{
		try {
			fun();
		}
		catch (IllegalAccessException e) {
			System.out.println("caught in main.");
		}
	}
}

import java.io.FileWriter;
import java.io.IOException;

class ReadWrite {

	public static void main(String[] args)
	{
		try {

			FileReader fr = new FileReader("app.txt");

			FileWriter fw = new FileWriter("new.txt");

			fw.write("Hello world!");

			fw.close();

			System.out.println("\nFile write done");
		}

		catch (IOException e) {

			System.out.println(
				"There are some IOException");
		}
	}
}

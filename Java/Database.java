import java.io.*;
import java.sql.*;

public class Database {

	static final String url= "jdbc:mysql://localhost:3306/db";

	public static void main(String[] args)
		throws ClassNotFoundException
	{
		try {

			Class.forName("com.mysql.jdbc.Driver");
			Connection conn = DriverManager.getConnection(url, "root", "1234");

			Statement stmt = conn.createStatement();

			int result = stmt.executeUpdate(
				"insert into student(Id,name,number) values('1','rachel','45')");

			if (result > 0)
				System.out.println("successfully inserted");

			else
				System.out.println(
					"unsucessful insertion ");

			conn.close();
		}

		catch (SQLException e) {
			System.out.println(e);
		}
	}
}

//1. Import the required packages

import java.io.*;  

//2. Create a class 

class Depersist{  

//3. Main method

public static void main(String args[]){  

//4. try block to handle the Exception

try{  

//5. Create instance of the FileInputStream Class

FileInputStream fin =new FileInputStream("f.txt");  

//6. Create instance of the ObjectInputStream Class

ObjectInputStream ois =new ObjectInputStream(fin);  

//7. Invoke the readObject() method 
Student s=(Student)ois.readObject();

//8.//printing the data of the serialized object  

System.out.println(s.id+" "+s.name);  

//9. closing the stream  

ois.close();  

System.out.println("success");  

//10. End of try block and followed by catch block

}catch(Exception e){

//11. To print

System.out.println(e);

}   }  }
//1. Import the required packages

import java.io.Serializable;  

import java.io.*;  

//2. Create a class (data member and Constructor)

class Student implements Serializable{  

int id;  

String name;  

public Student(int id, String name) {  

this.id = id;  
this.name = name;  

}  

}  

//3. Create a class 

class Persist{  

//4. Main method

public static void main(String args[]){  

//5. try block to handle the Exception

try{  

//6.  //Creating the object  

Student s1 =new Student(211,"ravi");  

//7. Create instance of the FileOutputStream Class

FileOutputStream fout=new FileOutputStream("f.txt");  

//8. Create instance of the ObjectOutputStream Class

ObjectOutputStream out=new ObjectOutputStream(fout);  

//9. Invoke the writeObject() method 

out.writeObject(s1);  

//10. closing the stream  

out.close();  

System.out.println("success");  

//11. End of try block and followed by catch block

}catch(Exception e){

//12. To print

System.out.println(e);

}}}

 
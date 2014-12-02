import java.util.Vector;
import java.io.*;

public class Carga{
	
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		try{
			FileInputStream fis = new FileInputStream("t.tmp");
			ObjectInputStream ois = new ObjectInputStream(fis);
			Vector<Integer> v;
			int a=ois.readInt();
			String s=(String)ois.readObject();
			v=(Vector<Integer>)ois.readObject();
			ois.close();
			System.out.println(a);
			System.out.println(s);
			System.out.println("size="+v.size());
			Integer i=(Integer)v.get(0);
			System.out.println("elemento="+i);
		}catch(FileNotFoundException e){
			e.printStackTrace();
		}catch(IOException e){
			e.printStackTrace();
		}catch(ClassNotFoundException e){
			e.printStackTrace();
		}
	}
}

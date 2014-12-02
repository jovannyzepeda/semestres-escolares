import java.util.Vector;
import java.io.*;

public class Persistencia{
	public static void main(String args[]){
		try{
			FileOutputStream fos = new FileOutputStream("t.tmp");
			ObjectOutputStream oos = new ObjectOutputStream(fos);
			Vector<Integer> v=new Vector<Integer>();
			v.add(new Integer(67));
			oos.writeInt(65);
			oos.writeObject("Today");
			oos.writeObject(v);
			oos.close();
		}catch(FileNotFoundException e){
			e.printStackTrace();
		}catch(IOException e){
			e.printStackTrace();
		}
	}
}

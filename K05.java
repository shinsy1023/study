import java.util.Scanner;

class UserInfo{
	Scanner s=new Scanner(System.in);
	String ID;
	int pass;
	void input(){
		ID=s.next();
		pass=s.nextInt();
	}
	void print(){
		System.out.println(ID+"      "+pass);
	}
}

public class K05 {
	
	public static void main(String[] args) {
		int count;
		Scanner s=new Scanner(System.in);
		System.out.print("등록할 학생의 수는? ");
		count=s.nextInt();
		UserInfo std[]=new UserInfo[count];
		for (int i=0; i<count; i++){
			std[i]=new UserInfo();
		}
		for (int i=0; i<count; i++){
			System.out.print((i+1)+"번 학생의 아이디, 비밀번호를 입력하세요. -> ");
			std[i].input();
		}
		for (int i=0; i<count; i++){
			System.out.print((i+1)+"  ");
			std[i].print();
		}
	}

}

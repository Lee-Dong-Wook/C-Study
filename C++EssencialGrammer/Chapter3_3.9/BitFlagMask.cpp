#include <iostream>
#include <bitset>
using namespace std; 

int main()
{
	 //bool item1_flag = false;
	 //bool item2_flag = false;
	 //bool item3_flag = false;
	 //bool item4_flag = false;

	 ////event!
	 //item1_flag = true; 

	 ////die! item2 loss 
	 //item2_flag = false; 

	 //if (item3_flag == true) {
		// //event
	 //}

	 //if (item3_flag == true && item4_flag == false) {
		// item3_flag = false;
		// item4_flag = true; 
	 //}
	 ////...... 

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;
	const unsigned char opt4 = 1 << 4;
	const unsigned char opt5 = 1 << 5;
	const unsigned char opt6 = 1 << 6;
	const unsigned char opt7 = 1 << 7;

	cout << "2���� : " <<bitset<8>(opt0) << " 10���� : " << (int)opt0 << endl; //00000001
	cout << "2���� : " << bitset<8>(opt1) << " 10���� : " << (int)opt1 << endl; //00000010
	cout << "2���� : " << bitset<8>(opt2) << " 10���� : " << (int)opt2 << endl; //00000100
	cout << "2���� : " << bitset<8>(opt3) << " 10���� : " << (int)opt3 << endl; //00001000
	cout << "2���� : " << bitset<8>(opt4) << " 10���� : " << (int)opt4 << endl; //00010000
	cout << "2���� : " << bitset<8>(opt5) << " 10���� : " << (int)opt5 << endl; //00100000
	cout << "2���� : " << bitset<8>(opt6) << " 10���� : " << (int)opt6 << endl; //01000000
	cout << "2���� : " << bitset<8>(opt7) << " 10���� : " << (int)opt7 << endl << endl; //10000000

	unsigned char item_flag = 0;

	cout <<"No item --- " << bitset<8>(item_flag) << endl; //00000000

	//item0�� �ֿ���. 
	item_flag |= opt0;

	cout << "item obtained --- " << bitset<8>(item_flag) << endl; //00000001

	//itme3�� �ֿ���. 
	item_flag |= opt3;

	cout << "item obtained --- " << bitset<8>(item_flag) << endl; //00001001

	//item0�� �Ҿ���. 
	item_flag &= ~opt0;
	cout << "item lost --- " << bitset<8>(item_flag) << endl<<endl;//00001000

	//has item1? 
	if (item_flag & opt1) {

		cout << "Item1�� ������ �ִ�." << endl;
	}

	else
		cout << "Item1�� ����. " << endl; 

	//has item3? 
	if (item_flag & opt3) {

		cout << "Item3�� ������ �ִ�." << endl<<endl;
	}

	else
		cout << "Item3�� ����. " << endl << endl;

	//���ÿ� ������ ���� ���� �ִ�. obtain item1,2 
	cout << "Ite1,2�� ������." << endl;
	cout << bitset<8>(opt1 | opt2) << endl << endl;

	item_flag |= (opt1 | opt2);
	cout << "Item1,2�� �����." << bitset<8>(item_flag) << endl<<endl;

	//item2�� ������ �ְ� item4�� ������ ���� ���� ��
	if ((item_flag & opt2) && !(item_flag & opt4)) {
		
		//item2�� �Ҿ������ item4�� ��� �Ѵ�. 
		//���º�ȯ�� ^������ �̿��Ѵ�. 
		
		//�̸� ���ٷ� ���� �� �ִ�. 
		/*item_flag ^= opt2;
		item_flag ^= opt4; */

		item_flag ^= (opt2 | opt4);
		cout << " Item2�� �Ҿ���. Item4�� �����." << bitset<8>(item_flag) << endl << endl;
	}

	cout << "�׷��Ƚ� ���� ��Ʈ����ũ�� �̿��� ���� �����ϱ�" << endl; 

	//������ ������ �����ϱ� ���� ���� (����x ����ũ)
	const unsigned int red_mask = 0xFF0000; 
	cout <<"     Red : "<< std::bitset<32>(red_mask) << endl<<endl;

	const unsigned int green_mask = 0x00FF00;
	cout <<"     Green : "<< std::bitset<32>(green_mask) << endl << endl;

	const unsigned int blue_mask = 0x0000FF;
	cout <<"     Blue : " << std::bitset<32>(blue_mask) << endl << endl;

	unsigned int pixel_color = 0xDAA520;

	cout << " pixel_color : " << std::bitset<32>(pixel_color) << endl << endl;

	 unsigned char blue = pixel_color & blue_mask;
	cout << "  Blue_color : " << std::bitset<8>(blue) <<" "<< (int)blue <<endl<<endl; //00100000 32
	
	//000000�� ����� �Ǿ����. char Ÿ���� 1byte �ۿ� �ȵǱ� ������ green, red ������ 
	//������ ���� ���Ե� int�� Ȯ���ϸ� ����� ������ ���� Ȯ�ΰ��� 

	//unsigned int green = (pixel_color & green_mask) >> 8;
	//cout << "  Green_color : " << std::bitset<16>(green) <<" "<<int(green) << endl << endl;
	////0000000010100101 165

	//unsigned int red = (pixel_color & red_mask) >> 16;
	//cout << "  Red_color : " << std::bitset<16>(red) <<" "<< int(red) << endl << endl;
	////0000000011011010 218

	//int�� Ȯ�������� �ٽ� char������ �ٲ㼭 ��Ʈ�����ڸ� ����. 
	unsigned char green = (pixel_color & green_mask) >> 8;
	cout << "  Green_color : " << std::bitset<8>(green) << " " << int(green) << endl << endl;
	

	unsigned char red = (pixel_color & red_mask) >> 16;
	cout << "  Red_color : " << std::bitset<8>(red) << " " << int(red) << endl << endl;
	
	return 0; 
}


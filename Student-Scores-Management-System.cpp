#include <iostream>
using namespace std;


#pragma region ȫ�ֱ�������
///
///ȫ�ֱ�������
///

int stu_num = 0;//ѧ������
const int course_num = 1;//�γ̵��������ܽṹ�嶨�����ƣ���ʹ��ָ���޸Ĵ˲�����

//����ṹ�����͡�ѧ���ɼ���
struct student_scores {
	int stu_id;
	string stu_name;
	int stu_score[course_num];
};

#pragma endregion


#pragma region ȫ�ֺ�������
///
///ȫ�ֺ�������
///



#pragma endregion


#pragma region ��������
///
///��������
///



#pragma endregion


#pragma region ������
///
///������
///



#pragma endregion


#pragma region ��ѯ����
///
///��ѯ����
///



#pragma endregion


#pragma region ͳ�ƹ���
///
///ͳ�ƹ���
///



#pragma endregion

#pragma region ������
///
///������
///

int main()
{
	
	//����ѧ������
	cout << "Input student number(n<30):" << endl;
	cin >> stu_num;

	//�����������ʾ
	while (1)
	{
		cout << "Management for Students' scores" << endl //ѧ���ɼ����� - ���˵�
			<< "1.Input record" << endl //��1��¼��ÿ��ѧ����ѧ�š������͸��ƿ��Գɼ�
			<< "2.Caculate total and average score of every course" << endl //��2������ÿ�ſγ̵��ֺܷ�ƽ����
			<< "3.Caculate total and average score of every student" << endl //��3������ÿ��ѧ�����ֺܷ�ƽ����
			<< "4.Sort in descending order by score" << endl //��4����ÿ��ѧ�����ܷ��ɸߵ����ų����α�
			<< "5.Sort in ascending order by score" << endl //��5����ÿ��ѧ�����ܷ��ɵ͵����ų����α�
			<< "6.Sort in ascending order by number" << endl //��6����ѧ����С�����ų��ɼ���
			<< "7.Sort in dictionary order by name" << endl //��7�����������ֵ�˳���ų��ɼ���
			<< "8.Search by number" << endl //��8����ѧ�Ų�ѯѧ���������俼�Գɼ�
			<< "9.Search by name" << endl //��9����������ѯѧ���������俼�Գɼ�
			<< "10.Statistic analysis" << endl //��10�������㣨90~100�������ã�80~89�����еȣ�70~79��������60~69����������0~59��5����𣬶�ÿ�ſγ̷ֱ�ͳ��ÿ�����������Լ���ռ�İٷֱ�
			<< "11.List record" << endl //��11�����ÿ��ѧ����ѧ�š����������ƿ��Գɼ����Լ�ÿ�ſγ̵��ֺܷ�ƽ����
			<< "0.Exit" << endl; //�˳�����
		int menu = 0; //�˵�ѡ��
		cin >> menu;
		switch (menu)
		{
		case 1:

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
		case 6:

			break;
		case 7:

			break;
		case 8:

			break;
		case 9:

			break;
		case 10:

			break;
		case 11:

			break;
		case 0:
			return 0;
		default:
			cout << "ѡ���������������ѡ��" << endl;
		}
	}
	
	return 0;
}

#pragma endregion
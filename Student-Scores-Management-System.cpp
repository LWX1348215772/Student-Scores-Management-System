#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;


#pragma region ȫ�ֱ�������
///
///ȫ�ֱ�������
///

int stu_num = 0;//ѧ��ʵ������
int course_num = 0;//�γ�ʵ������

//����ṹ�����͡�ѧ���ɼ���
struct student_scores {
	int stu_id = 0;//ѧ��ѧ��
	string stu_name;//ѧ������
	int stu_score[6] = {0};//���ſγ̵ĳɼ����γ���󲻳���6�ţ�
	int stu_sum = 0;//ѧ�����ܷ�
	float stu_average = 0;//ѧ����ƽ����
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

//�˵�1 - ¼��ÿ��ѧ����ѧ�š������͸��ƿ��Գɼ�
void student_scores_input(student_scores stu[], int n)
{
	cout << "Input course number(m<=6):" << endl;
	cin >> course_num;
	for (int i = 0; i < n; i++)
	{
		cin >> stu[i].stu_id >> stu[i].stu_name;
		for (int j = 0; j < course_num; j++)
		{
			cin >>  stu[i].stu_score[j];
		}
	}
}

//�˵�2 - ����ÿ�ſγ̵��ֺܷ�ƽ����
void course_scores_sum_and_average(student_scores stu[], int n)
{

}

//�˵�3 - ����ÿ��ѧ�����ֺܷ�ƽ����
void student_scores_sum_and_average(student_scores stu[], int n)
{
	//���㲿��
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < course_num; j++)
		{
			stu[i].stu_sum = stu[i].stu_sum + stu[i].stu_score[j];
		}
		stu[i].stu_average = stu[i].stu_sum / course_num;
	}
	//�������
	for (int i = 0; i < n; i++)
	{
		cout << stu[i].stu_name << ":  sum=" << stu[i].stu_sum << ",  aver=" << stu[i].stu_average << endl;
	}
}

//�˵�11 - ���ÿ��ѧ����ѧ�š����������ƿ��Գɼ����Լ�ÿ�ſγ̵��ֺܷ�ƽ����
void score_output(student_scores stu[], int n)
{

}

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
	student_scores stu[30];//ѧ������������30��

	#if 1
	//if 0 ʱ�ô���Ƭ�δ���ע��״̬��if 1 ʱ�ô���Ƭ�λ�ִ��
	//���ڳ����ʼ��ʱ�Զ�ע���������ݣ�����ִ�С��˵�ѡ��1�����Ӷ�����ֱ�ӵ��������˵�ѡ���ģ��
	//��������ģ��ʱ����Ѷ�Ӧģ�麯�����õ�stu���ⲿ!����Ϊstu2
	stu_num = 6;
	course_num = 3;
	student_scores stu2[6] =
	{
		{11003001,"lisi",87,82,89},
		{11003005,"heli",98,92,90},
		{11003003,"ludi",75,78,80},
		{11003002,"dumo",48,50,67},
		{11003004,"zuma",65,69,72},
		{11003006,"suyu",100,95,94}
	};
	#endif

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
			<< "0.Exit" << endl //�˳�����
			<< "Please Input your choice:" << endl;
		int menu = 0; //�˵�ѡ��
		cin >> menu;
		switch (menu)
		{
		case 1:
			student_scores_input(stu, stu_num);
			break;
		case 2:
			course_scores_sum_and_average(stu, stu_num);
			break;
		case 3:
			student_scores_sum_and_average(stu, stu_num);
			break;
		case 4:
			
			break;
		case 5:
			
			break;
		case 6:
			
			break;
		case 7:
			//�̴ϴ�
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
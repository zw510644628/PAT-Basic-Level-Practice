#include <stdio.h> 
#include <algorithm>
/*��Ҫʹ��algorithm���е�sort������algorithmΪC++ר�еĿ⣬��C����û�У���
������Ȼû��ʹ��C++���Ե����ԣ�������Ȼд��c++���롣*/
using namespace std;
//C++������Ҫ���������ռ�
struct info{
	int stu_id;
	//ѧ��
	int d_score;
	//�·�
	int c_score;
	//�ŷ�
	int level;
	//���������
	int total_score;
	/*�ܷ֣�֮���Խ������ܷ�ֱ�ӷŵ��ṹ������Ϊ�˼����ظ����㡣
	���һ��Ԫ��������Ĺ�����Ҫ����Ԫ�رȽϣ���ô���������ܷ־ͻᱻ�����Ρ�*/
	
}students[100000 + 1];
//����һ���ṹ�����͵����� student, ���鳤�� Ϊ10^5 �� 1����Ϊ��Ŀ������������� 10^5 ����������Ϣ�� ��һ��Ϊ�˷�ֹ����Խ����ʡ�
int N, L, H;
//�� NLH ����Ϊȫ�ֱ���
bool compare(info student_a, info student_b){
	//����Ϊ����info �ṹ���͵ı���������ֵ�ǲ������ͣ�����Trueʱ����������
	//ͬ��ע�⴫��Ĳ����������е�˳��ͷ���ֵ ֮��Ķ�Ӧ��ϵ��
    if (student_a.level == student_b.level){
    	if (student_a.total_score != student_b.total_score){
    		return student_a.total_score > student_b.total_score;
    	} else{
    		if (student_a.d_score != student_b.d_score){
    			return student_a.d_score > student_b.d_score;
    		}else{
                return student_a.stu_id < student_b.stu_id; 
    		}
    	}
    }else{
    	return student_a.level < student_b.level;
    }
      	
}

int get_level(int d_score, int c_score){
    //������һ�������ĵ·ֺͲŷ֣����ݹ��򷵻����������
	 if (d_score >= L && c_score >= L){
	 	if (d_score >= H && c_score >= H){
	 		return 1;
	 	}else{
        	if (d_score >= H && c_score < H){
        		return 2;
        	}else{
        		if (d_score < H && c_score < H && d_score >= c_score){
        			return 3;
        		}else{	
                    return 4;
				}
            }
        }
	 }else{
	 	return 5;
	 }
}

int main(){
    scanf("%d %d %d", &N, &L, &H);
    //���� NLH 
	int id, d_score, c_score;
	//��ʱ�洢������Ϣ
	int count = 0;
	//�ۼ���Χ��������
	for (int i=0; i<N; ++i){
		scanf("%d %d %d", &id, &d_score, &c_score);
		//���뿼����Ϣ
		if (d_score >= L && c_score >= L){
			students[count].stu_id = id;
			students[count].d_score = d_score;
			students[count].c_score = c_score; 
			students[count].total_score = d_score + c_score;
		    students[count].level = get_level(d_score, c_score);
		    //ֻ����һ�ο����������ܷ�
		    count ++;
		}
	}
	sort(students, students+count, compare);
	//���򣬴�������������ֱ��Ǵ�������������ʼ��ַ����ֹ��ַ�������ж������е�����Ԫ���Ƿ���Ҫ�����ĺ�����
	printf("%d\n", count);
	//���뿼������
	for(int i=0;i<count; ++i){
		printf("%d %d %d\n", students[i].stu_id, students[i].d_score, students[i].c_score);
	}
	//���������
	return 0;
}

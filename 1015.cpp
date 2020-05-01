#include <stdio.h> 
#include <algorithm>
/*需要使用algorithm库中的sort函数，algorithm为C++专有的库，（C语言没有）。
所以虽然没有使用C++语言的特性，我们仍然写成c++代码。*/
using namespace std;
//C++程序需要声明命名空间
struct info{
	int stu_id;
	//学号
	int d_score;
	//德分
	int c_score;
	//才分
	int level;
	//考生的类别
	int total_score;
	/*总分，之所以将类别和总分直接放到结构体中是为了减少重复计算。
	如果一个元素在排序的过程中要与多个元素比较，那么它的类别和总分就会被计算多次。*/
	
}students[100000 + 1];
//定义一个结构体类型的数组 student, 数组长度 为10^5 ＋ 1，因为题目中输入的上限是 10^5 个考生的信息， 加一是为了防止数组越界访问。
int N, L, H;
//将 NLH 定义为全局变量
bool compare(info student_a, info student_b){
	//参数为两个info 结构体型的变量，返回值是布尔类型，返回True时，不交换。
	//同样注意传入的参数在数组中的顺序和返回值 之间的对应关系。
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
    //参数是一个考生的德分和才分，根据规则返回类别（整数）
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
    //输入 NLH 
	int id, d_score, c_score;
	//临时存储考生信息
	int count = 0;
	//累计入围考生数量
	for (int i=0; i<N; ++i){
		scanf("%d %d %d", &id, &d_score, &c_score);
		//输入考生信息
		if (d_score >= L && c_score >= L){
			students[count].stu_id = id;
			students[count].d_score = d_score;
			students[count].c_score = c_score; 
			students[count].total_score = d_score + c_score;
		    students[count].level = get_level(d_score, c_score);
		    //只计算一次考生的类别和总分
		    count ++;
		}
	}
	sort(students, students+count, compare);
	//排序，传入的三个参数分别是待排序的数组的起始地址和终止地址，用于判断数组中的两个元素是否需要交换的函数。
	printf("%d\n", count);
	//输入考生总数
	for(int i=0;i<count; ++i){
		printf("%d %d %d\n", students[i].stu_id, students[i].d_score, students[i].c_score);
	}
	//输出排序结果
	return 0;
}

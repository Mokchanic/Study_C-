#include <iostream> /* input, output stream 이라는 의미
						#의 의미는 전처리기 (preprocessor directive)
					*/
int main(void)
/*
() 내부는 입력을 의미함. 입력값 안 넣어도 상관은 없지만, 넣어주는 것이 좋음.
void의 의미는 입력을 넣지 않겠다.

int의 의미는 출력부분을 의미하며 출력값이 intiger 정수라고 의미함.
*/
	
{
	(1 + 2) * (3 + 4); // 이와 같은식을 Expressions 라고 함.

	int x = 2; // 정수형 변수 선언
	x = 5;
	int y = x + 3; // 리터럴, literal

	/*
	해당 변수가 컴퓨터 안에서 어떤 원리로 적용이 되는가?
	-> int라는 정수형 메모리를 할당 받아서 그 공간을 사용할 수 있다는 의미.
	이를 이제 CPU에서 연산을 함.
	*/

	std::cout << y << std::endl; // iostream에서 가져온 기능으로 출력을 함.
	// std: namespace이며, cout을 저장하는 내부공간.
	// 비슷한 기능을 하는 함수들을 묶어놓거나 저장히기 위해서 사용함
	// '<<' output operator 연산자.
	// std는 standard library의 일부, 우리도 library를 만들 수 있음.

	return 0; // 돌려준다는 의미. 현재는 프로그램이 끝나고 0의 정수를 돌려준다는 의미.
				// 현재 기능을 수행하고 있으므로, return Statements라고 부름.
				// ';'는 프로그램의 끝을 의미.

}
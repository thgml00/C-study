## Chapter01 - Intro
소스코드 형식 
* .c - 정의
* .h - 선언
		 
		 #include <stdio.h>	// (컴파일)전처리기

		 int main(void)		// 함수 + 선언 정의
		 			  	   int - 반환형식
		 				   void - 매개변수
						 -> main = 매개변수는 없지만 integer를 반환하는 함수, 프로그램 시작
		 {				// Block Scope (변위)
						   여러 구문을 한 덩어리로 묶을 때 사용

문자(배)열 - ex. "Hello, world\n"		// \n : 개행

**<에러. 에러 발생하면 F4 누르기 - 에러 발생한 곳으로 이동함>**
<br/><br/>

## Chapter02 - 자료형
> C언어 자료형은 **일정 크기의 메모리에 저장된 정보를 해석하는 방법**
* 자료 -> 숫자
* 주소 -> 위치정보

### 변수와 상수
**1. 상수**<br/>
확정된 숫자 (앞으로 변할 가능성이 없는 수) <br/><br/>
**2. 변수** <br/>
아직 확정되지 않은 숫자 (앞으로 변경될 가능성이 있는 수)<br/>
> 메모리 (변수는 메모리로 구현) , 메모리는 주소

### C언어 자료형
|  정수형 |                                                       |
| :----: | :----------------------------------------------------- |
| `char` <br/> `short` <br/> `int` <br/> `long` <br/> `long long int` <br/> | 1비트 부호비트와 데이터 비트 / 부호 O                                          |
| `unsigned` | 모두 데이터 비트 / 부호 X 			|

|  실수형 |                                                  |
| :----: | :----------------------------------------------------- |
|  `float`  | 단정도 (유효 자릿수 소수점 이하 6자리) <br/> ex) 123.0F; <br/> **정확도가 매우 떨어져서 사용하지 않길 권함**              |
| `double` | 배정도 (유효 자릿수 소수점 이하 15자리) <br/> ex) 123.0;     |
| `long double` | 특수정도 : 79bits (구현될 때는 80bits로 구현)      |

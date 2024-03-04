## Chapter04 - 연산자(기본)
> 항(item)이 모여 구문을 이룸

> 연산자에 적용되는 중요한 개념은 **연산의 임시결과**

### 01. 산술 연산자
**1. 이형자료 간의 연산** <br/>
```c
char ch = 'A';

printf("%c\n", ch + 1);	// B
printf("%c\n", ch + 2);	// C

printf("%d\n", ch + 1);	// 66
printf("%d\n", ch + 2);	// 67

printf("%d\n", 5.0 + 1);	// 0
printf("%f\n", 5.0 + 1);	// 7.000000
```
> 임시결과의 자료형은 연산에 참여한 피연사자 중 정보 표현범위가 더 넓은 자료형

- char + int -> int
- int + float -> float
- int +double -> double
- float +double -> double

> 형승격(type promotion) : 연산의 결과가 피연산자의 자료형보다 표현범위가 넓은 형식으로 변경되는 현상
<br/>

**2. 곱셈, 나눗셈** <br/>
1. 정수를 정수로 나눔 -> 정수
2. 절대 0으로 나눌 수 없음

```c
printf("%d\n", 10 * 10);	// 100
printf("%d\n", 10 * 10.0);	// 0

printf("%d\n", 10 / 10);	// 1
printf("%f\n", 5 / 2);		// 0.000000

printf("%f\n", 5.0 / 2);	// 2.500000
```
- int * double -> %d 불가능
- int / int -> %f 불가능
- double / int -> double

<br/>
### 02. 대입 연산자
**1. 누적** <br/>
> 누적의 대상이 되는 변수는 누적 연산에 앞서 반드시 **0으로 초기화**

<br/>
### 03. 형변환 연산자
```c
printf("%d\n", 5 / 2);				// 2
printf("%f\n", 5.0 / 2);			// 2.500000
printf("%d\n", (double)5 / 2);	// 2.500000
printf("%f\n", (double)(5 / 2));	// 2.000000
```
-  (double)(5 / 2) : int형 자료 간의 나눗셈 연산을 진행 후 값을 double로 변경

<br/>
### 04. 단항 증감 연산자
- ++a
- a++

<br/>
### 05. 비트 연산자
- & : and
- | : or
- ^ : xor
	- 두 값이 같을 때 0, 두 비트가 모두 1일때는 0
- ~ : not
	- 0과 1을 뒤집는 연산
- << : shift left
- >> : shift right


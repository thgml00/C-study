Chapter03 - IO

3장. 표준 입출력 도구
Process = 고유한 영역 -> 영역은 Memory로 이뤄짐
Debugger : 소프트웨어의 결함/문제를 해결하는 도구
	      Privileged level software
	      각 프로세스의 메모리를 하나하나 볼 수 있음

kernel -> I/O입출력
	: 입출력은 kernel이 함

Buffer : Memory

getchar()
	: 문자 한 글자를 가져옴
gets()
	: 한 줄 (\r, \n, \0)
scanf()
	: 형식(ex. %d)에 맞게

fgets, sizeof

3-1표 중요, 기억

이스케이프 시퀀스

실수와 지수 출력
실수 출력 %f, %lf 사용
scanf일때는 확실히 지정

scanf

## Chapter03 - 표준 입출력

### 문자 입출력
**1. getchar()**<br/>
문자 하나를 입력받기 위한 표준 입력 함수 (한 글자만 가져옴) <br/>
반환 값은 int(O), char(X) <br/><br/>
**2. putchar()** <br/>
호출 전에 int형 자료 하나(출력할 문자)를 기술<br/>
함수 호출 결과로 int형 자료 얻을 수 있음 <br/>
> 변수로 매개변수를 정의할 경우 변수 자체가 아니라 변수 안에 담긴 정보가 매개변수로 전달

```c
ex) getchar/putchar
ch = getchar();
putchar(ch);	// 변수로 정의
putchar('z');	// 상수로 정의

//result
// input : g
// output : gz
```

**3. Non-buffered I/O**<br/>
> 아무 키나 눌려서 사용자 입력이 발생했음을 알림
* _getch()
* _getche()

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


puts(메모리의 주소);

추후 내용 추가 및 수정


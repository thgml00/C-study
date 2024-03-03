## Chapter03 - 표준 입출력

### 01. 문자 입출력
**1. getchar()** <br/>
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

**3. Non-buffered I/O** <br/>
> 아무 키나 눌려서 사용자 입력이 발생했음을 알림
* _getch() -> conio.h 필요, 한 글자라도 입력되면 즉시 반환
* _getche() -> 어떤 키가 눌렀는지 화면에 출력하고 함수 반환

### 02. 문자열 입출력
> 문자열 : 문자의 배열

**1.gets() / puts()** <br/><br/>
`char *gets(char *buffer);`
* buffer : 입력받은 문자열을 저장할 메모리의 주소
* return : 전달받은 메모리의 주소
* 한 줄 가져옴(\r, \n, \0)

`int puts(const char *string);`
* string : 출력할 문자열이 저장된 메모리의 주소
* return : 음수가 아닌 값 반환
* printf()와 달리 자동으로 개행(\n)

**2.gets_s()** <br/>
> gets 대신 gets_s 사용 권함

gets는 보안 결함이 존재할 수 있음 (보안 결함 : 버퍼 오버플로우에 의한 버퍼 오버런 공격에 대한 취약성) <br/>
-> 보안 결함이 알려진 함수를 사용하기 보다는 대체 함수를 사용하는 것이 현명한 대응 <br/><br/>
`char *gets_s(char *buffer, size_t sizeInCharacters);`
* gets_s(szName, sizeof(szName));
* sizeof : 메모리의 크기를 측정하는 연산자

#### 3. C언어 형식 문자
|  형식 문자 |  자료형 |                                                   |
| :----: | :----: | :----------------------------------------------------- |
| %d | int | 부호가 있는 10진수 |
| %e, %E | float, double | 지수형 소수로 출력 |
| %f | double(float) | 10진형 소수 |
| %g | double | 지수형 소수 or 10진형 소수로 출력 |
| %p | Pointer | 16진수 주소로 출력 |
| %s | String | 메모리의 내용을 문자열로 출력 |

#### 4. 이스케이프 시퀀스(escape sequence)
* `\n` : new line
* `\t` : tap
* `\\` : Backslash
* `\"` : 큰 따옴표

### 03. 실수와 지수 출력
실수 출력 %f, %lf 사용
scanf일때는 확실히 지정

### 04. scanf
* 문자 입력 : `scanf("%c",&ch);`
* scanf_s 사용 : `scanf_s("%c",&ch,sizeof(ch));`
* 문자열 입력 : %s 형식만으로는 공백문자를 포함한 문자열을 입력 받을 수 없음
* 입력 버퍼 비움 : `fflush(stdin);
                  `scanf("%d%*c",&age);

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

puts(메모리의 주소);

추후 내용 추가 및 수정


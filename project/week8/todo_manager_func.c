#include <stdio.h>
#define MAX_TASKS 10
#define CHAR_NUM 100
#include <string.h>

char tasks[MAX_TASKS][CHAR_NUM] = { "" }; // 할 일 목록을 저장하기 위한 2차원 배열
int taskCount = 0; // 할 일의 수를 저장하기 위한 변수(전역변수)

void addTask(char task[]) {
	printf("할 일을 입력하세요 (공백 없이 입력하세요): ");
	scanf_s("%s",task,(int)sizeof(task));//할 일을 입력받고
	strcpy_s(tasks[taskCount], sizeof(tasks[taskCount]), task);//문자열 복사로 tasks배열에 입력
	printf("할 일""%s""가 저장되었습니다\n\n",task);
}

void delTask(int delIndex, int taskCount) {

	printf("%d. %s : 할 일을 삭제합니다.\n", delIndex, tasks[delIndex - 1]);

	//특정 인덱스의 할 일 삭제 후 뒤에 있는 할 일 앞으로 옮기기
	for (int i = delIndex; i < taskCount + 1; i++) {
		strcpy_s(tasks[i - 1], sizeof(tasks[i]), tasks[i]);
	}
}

void printTask(int taskCount) {
	for (int i = 0; i < taskCount; i++) {//i를 taskCount보다 작을 때까지 1씩 늘리며 반복
		printf("%d. %s \n", i + 1, tasks[i]);//tasks배열의 i번째 출력
	}
	printf("\n");
}

int main() {
	printf("TODO 리스트 시작! \n");

	while (1) {
		int choice = -1; // 오류발생시 파악위해 초기값-1설정

		// 사용자에게 메뉴를 출력하고, 메뉴를 입력받기
		printf("------------------\n");
		printf("메뉴를 입력해주세요.\n");;
		printf("1. 할 일 추가\n2. 할 일 삭제\n3. 목록 보기\n4. 종료\n5. 할 일 수정\n");
		printf("현재 할 일 수 = %d\n", taskCount);
		printf("------------------\n");
		scanf_s("%d", &choice);

		int terminate = 0; // 종료를 위한 flag
		int delIndex = -1;  // 할 일 삭제를 위한 index 저장 변수
		int changeIndex = -1; // 할 일 수정을 위한 index 저장 변수
		char ch; // 할 일 수정시 버퍼를 받기 위한 문자 변수

		// 입력에 따른 기능 수행
		switch (choice) {
		case 1:
			addTask(tasks[taskCount]);
			taskCount++;
			break;
		case 2:
			// 할 일 삭제하는 코드 블록 
			printf("삭제할 할 일의 번호를 입력해주세요. (1부터 시작):");
			scanf_s("%d", &delIndex);
			if (delIndex > taskCount || delIndex <= 0) {
				printf("삭제 범위가 벗어났습니다.\n");
			}
			else {
				delTask(delIndex, taskCount);
				taskCount -= 1;
			}
			break;
		case 3:
			printf("할 일 목록\n");
			printTask(taskCount);
			break;
		case 4:
			terminate = 1;
			break;
		case 5:
			printf("수정할 일의 번호를 입력하세요.(1부터 시작): ");
			scanf_s("%d", &changeIndex);//수정할 일의 번호 입력받음
			printf("수정후의 일을 입력하세요.: ");
			ch = getchar();
			scanf_s("%s", tasks[changeIndex - 1], (int)sizeof(tasks[changeIndex - 1]));//수정할 일을 해당배열에 입력
			printf("%d 번째의 할 일이 수정되었습니다.", changeIndex);
			break;
		default:
			printf("잘못된 선택입니다. 다시 선택하세요.\n");
		}

		if (terminate == 1) {//case4에서 설정한 terminate=1로 적용되어 프로그램break
			printf("종료를 선택하셨습니다. 프로그램을 종료합니다.\n");
			break;
		}
		// TODO: 할 일이 다 찼는지 체크하는 코드 작성
		if (taskCount >= 10) {
			printf("할 일이 다 찼습니다. 프로그램을 종료합니다.\n");
			break;
		}
	}
	return 0;
}
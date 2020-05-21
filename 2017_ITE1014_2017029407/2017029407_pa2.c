<<<<<<< HEAD
// 2017029407 Sang Eun Kim 
=======
// 비디오 대여점의 고객 관리 프로그램 
// 2017029407 김상은 
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1

#include <stdio.h>
#include <string.h>

<<<<<<< HEAD
typedef struct User { // Struct included user information 
	int id; // Personal ID 
 	char name[30]; // User name
	char phoneNum[30]; // User phonenumber 
}User;
 
User customers[100]; // Struct array of 100 customers information 

int count = 0; // user number
int nextID = 0; // Personal ID that  next user
char temp[30]; // temporary storage space
=======
typedef struct User { // 사용자 정보를 담은 구조체 
	int id; // 고유 아이디 
 	char name[30]; // 사용자 이름 
	char phoneNum[30]; // 사용자 전화번호 
}User;
 
User customers[100]; // 고객 정보 구조체 배열, 100명으로 일단 설정 

int count = 0; // 사용자 수 
int nextID = 0; // 다음 사용자에게 부여할 ID 
char temp[30]; // 기능 선택과 사용자 비교를 위해 사용할 임시 저장 공간 
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1

// 함수 선언 
int menu(); // 메뉴 화면 
void add(); // 사용자 추가 
void removeUser(); // 사용자 제거 
void search(); // 사용자 검색 

// main 함수 
int main() {
	for(;;) {
		int choice = menu(); // 메뉴 화면에서 기능 선택 
		
		if(choice == 1) add(); // 1. 사용자 추가 
		else if(choice == 2) removeUser(); // 2. 사용자 제거 
		else if(choice == 3) search(); // 3. 사용자 검색 
	}
	return 0;
}

int menu() { // 메뉴 출력과 선택 
<<<<<<< HEAD
	printf("1. User Addition\n");
	printf("2. User Removal\n");
	printf("3. User Search\n");
	printf("Select function(1-3) : ");
=======
	printf("1. 사용자 추가\n");
	printf("2. 사용자 제거\n");
	printf("3. 사용자 검색\n");
	printf("선택할 기능(1-3) : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
	scanf("%s", temp);

	if(temp[0] == '1') return 1;
	else if(temp[0] == '2') return 2;
	else if(temp[0] == '3') return 3;
	else {
<<<<<<< HEAD
		printf("Enter a number between 1 and 3.\n");
=======
		printf("1에서 3 사이의 수를 입력하시오.\n");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
		return 0;
	}
}

void add() { // 사용자 추가 함수 
	User *nextUser; // 추가할 사용자 구조체 포인터 

	if(count == 100) { // 사용자 정보가 가득 찬 경우 
<<<<<<< HEAD
		printf("Can't add the user anymore.\n");
=======
		printf("더이상 사용자를 추가할 수 없습니다.\n");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
		return;
	}

	nextUser = &customers[count];  
	count++;

<<<<<<< HEAD
	printf("Name : "); // 이름 입력 
	scanf("%s", nextUser->name);
	printf("Phone Number : "); // 전화번호 입력 
=======
	printf("이름 : "); // 이름 입력 
	scanf("%s", nextUser->name);
	printf("전화번호 : "); // 전화번호 입력 
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
	scanf("%s", nextUser->phoneNum);
	nextUser->id = nextID; // 고유 ID 부여 
	nextID++;

<<<<<<< HEAD
	printf("Name : %s\n", nextUser->name);
	printf("Phone Number : %s\n", nextUser->phoneNum);
	printf("Personal ID : %d\n", nextUser->id);
=======
	printf("이름: %s\n", nextUser->name);
	printf("전화번호: %s\n", nextUser->phoneNum);
	printf("고유 아이디: %d\n", nextUser->id);
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
}

void removeUser() { // 사용자 제거 함수 
	int removeNum; // customers 구조체 배열에서 제거할 사용자의 위치를 가리킴 
	int removeID; // 제거할 사용자의 고유 ID를 저장할 변수 
	removeNum=count; 
	
	while(1) {
<<<<<<< HEAD
		printf("1. Remove by name\n");
		printf("2. Remove by phone number\n");
		printf("3. Remove by personal ID\n");
		printf("Select function(1-3) : ");
		scanf("%s", temp);

		if(temp[0] == '1') { // 1. 이름으로 제거 
			printf("Enter the name of user you want to remove : ");
=======
		printf("1. 이름으로 제거\n");
		printf("2. 전화번호로 제거\n");
		printf("3. 고유 아이디로 제거\n");
		printf("선택할 기능(1-3) : ");
		scanf("%s", temp);

		if(temp[0] == '1') { // 1. 이름으로 제거 
			printf("제거할 사용자의 이름을 입력하시오 : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
			scanf("%s", temp);

			for(removeNum=0;removeNum<count;removeNum++)
				if(strcmp(customers[removeNum].name,temp) == 0) break;
			break;
		}
		else if(temp[0] == '2') { // 2. 전화번호로 제거
<<<<<<< HEAD
			printf("Enter the phone number of user you want to remove : ");
=======
			printf("제거할 사용자의 전화번호를 입력하시오 : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
			scanf("%s", temp);

			for(removeNum=0;removeNum<count;removeNum++)
				if(strcmp(customers[removeNum].phoneNum,temp) == 0) break;
			break;
		}
		else if (temp[0] == '3') { // 3. 고유 ID로 제거 
<<<<<<< HEAD
			printf("Enter the personal ID of user you want to remove : ");
=======
			printf("제거할 사용자의 고유 아이디를 입력하시오 : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
			scanf("%d",&removeID);

			for(removeNum=0;removeNum<count;removeNum++)
				if(customers[removeNum].id == removeID) break;
			break;
		}
		else {
<<<<<<< HEAD
			printf("Enter a number between 1 and 3.\n");
=======
			printf("1에서 3 사이의 수를 입력하시오.\n");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
		}
	}

	if(removeNum != count) { // 사용자 정보가 있는 경우  
<<<<<<< HEAD
		int shiftNum; // 제거할 사용자 정보를 뒤의 사용자 정보로 덮어서 삭제 
		
		for(shiftNum=removeNum+1;shiftNum<count;shiftNum++)
			customers[shiftNum-1]=customers[shiftNum];
=======
		int shiftID; // 제거할 사용자 정보를 뒤의 사용자 정보로 덮어서 삭제 
		
		for(shiftID=removeID+1;shiftID<count;shiftID++)
			customers[shiftID-1]=customers[shiftID];
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1

		count--; // 사용자 수 줄임 
	}
	else {
<<<<<<< HEAD
		printf("There's no matching user.\n");
=======
		printf("일치하는 사용자가 없습니다.\n");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
	}
}

void search() { // 사용자 검색 
	int searchNum; // 검색한 사용자의 위치를 나타내기 위한 변수 
	int searchID; // 검색한 사용자의 고유 ID를 나타내는 변수
	 
	while(1) {
<<<<<<< HEAD
		printf("1. Global Search\n");
		printf("2. Item Search\n");
		printf("Select function(1-2) : ");
=======
		printf("1. 전체 검색\n");
		printf("2. 항목 검색\n");
		printf("선택할 기능(1-2) : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
		scanf("%s", temp);

		if(temp[0] == '1') { // 1. 전체 검색 
			for(searchNum=0;searchNum<count;searchNum++)
<<<<<<< HEAD
				printf("Name : %s  Phone number : %s  Personal ID : %d\n", customers[searchNum].name, customers[searchNum].phoneNum, customers[searchNum].id);
=======
				printf("이름: %s  전화번호: %s  고유 아이디: %d\n", customers[searchNum].name, customers[searchNum].phoneNum, customers[searchNum].id);
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
			break; 
		}
		else if(temp[0] == '2') { // 2. 항목 검색 
			while(1) {
<<<<<<< HEAD
				printf("1. Search by name\n");
				printf("2. Search by phone number\n");
				printf("3. Search by personal ID\n");
				printf("Select function(1-3) : ");
				scanf("%s", temp);

				if(temp[0] == '1') { // 1. 이름으로 찾기 
					printf("Enter the name of user you want to find : ");
=======
				printf("1. 이름으로 찾기\n");
				printf("2. 전화번호로 찾기\n");
				printf("3. 고유 아이디로 찾기\n");
				printf("선택할 항목(1-3) : ");
				scanf("%s", temp);

				if(temp[0] == '1') { // 1. 이름으로 찾기 
					printf("사용자 이름 : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
					scanf("%s", temp);

					for(searchNum=0;searchNum<count;searchNum++)
						if(strcmp(customers[searchNum].name,temp) == 0) break;
					break;
				}
				else if(temp[0] == '2' ) { // 2. 전화번호로 찾기 
<<<<<<< HEAD
					printf("Enter the phone number of user you want to find : ");
=======
					printf("사용자 전화번호 : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
					scanf("%s", temp);

					for(searchNum=0;searchNum<count;searchNum++)
						if(strcmp(customers[searchNum].phoneNum,temp) == 0) break;
					break;
				}
				else if(temp[0] == '3') { // 3. 고유 ID로 찾기 
<<<<<<< HEAD
					printf("Enter the personal ID of user you want to find : ");
=======
					printf("사용자 고유 아이디 : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
					scanf("%d", &searchID);

					for(searchNum=0;searchNum<count;searchNum++)
						if(customers[searchNum].id == searchID) break;
					break;
				}
<<<<<<< HEAD
				else printf("Enter a number between 1 and 3.\n");
			}
			
			if(searchNum != count) { // 검색이 유효한 경우 
				printf("Name : %s\n", customers[searchNum].name);
				printf("Phone Number : %s\n", customers[searchNum].phoneNum);
				printf("Personal ID : %d\n", customers[searchNum].id);
			}
			else printf("There's no matching user.\n");
			break;
		}
		
		else printf("Enter a number between 1 and 2.\n"); 
=======
				else printf("1에서 3 사이의 수를 입력하시오.\n");
			}
			
			if(searchNum != count) { // 검색이 유효한 경우 
				printf("이름: %s\n", customers[searchNum].name);
				printf("전화번호: %s\n", customers[searchNum].phoneNum);
				printf("고유 아이디: %d\n", customers[searchNum].id);
			}
			else printf("일치하는 사용자가 없습니다.\n");
			break;
		}
		
		else printf("1에서 2 사이의 수를 입력하시오.\n"); 
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
	}
}

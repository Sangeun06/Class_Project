<<<<<<< HEAD
// 2017029407 Sang Eun Kim 
=======
// ���� �뿩���� �� ���� ���α׷� 
// 2017029407 ����� 
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
typedef struct User { // ����� ������ ���� ����ü 
	int id; // ���� ���̵� 
 	char name[30]; // ����� �̸� 
	char phoneNum[30]; // ����� ��ȭ��ȣ 
}User;
 
User customers[100]; // �� ���� ����ü �迭, 100������ �ϴ� ���� 

int count = 0; // ����� �� 
int nextID = 0; // ���� ����ڿ��� �ο��� ID 
char temp[30]; // ��� ���ð� ����� �񱳸� ���� ����� �ӽ� ���� ���� 
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1

// �Լ� ���� 
int menu(); // �޴� ȭ�� 
void add(); // ����� �߰� 
void removeUser(); // ����� ���� 
void search(); // ����� �˻� 

// main �Լ� 
int main() {
	for(;;) {
		int choice = menu(); // �޴� ȭ�鿡�� ��� ���� 
		
		if(choice == 1) add(); // 1. ����� �߰� 
		else if(choice == 2) removeUser(); // 2. ����� ���� 
		else if(choice == 3) search(); // 3. ����� �˻� 
	}
	return 0;
}

int menu() { // �޴� ��°� ���� 
<<<<<<< HEAD
	printf("1. User Addition\n");
	printf("2. User Removal\n");
	printf("3. User Search\n");
	printf("Select function(1-3) : ");
=======
	printf("1. ����� �߰�\n");
	printf("2. ����� ����\n");
	printf("3. ����� �˻�\n");
	printf("������ ���(1-3) : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
	scanf("%s", temp);

	if(temp[0] == '1') return 1;
	else if(temp[0] == '2') return 2;
	else if(temp[0] == '3') return 3;
	else {
<<<<<<< HEAD
		printf("Enter a number between 1 and 3.\n");
=======
		printf("1���� 3 ������ ���� �Է��Ͻÿ�.\n");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
		return 0;
	}
}

void add() { // ����� �߰� �Լ� 
	User *nextUser; // �߰��� ����� ����ü ������ 

	if(count == 100) { // ����� ������ ���� �� ��� 
<<<<<<< HEAD
		printf("Can't add the user anymore.\n");
=======
		printf("���̻� ����ڸ� �߰��� �� �����ϴ�.\n");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
		return;
	}

	nextUser = &customers[count];  
	count++;

<<<<<<< HEAD
	printf("Name : "); // �̸� �Է� 
	scanf("%s", nextUser->name);
	printf("Phone Number : "); // ��ȭ��ȣ �Է� 
=======
	printf("�̸� : "); // �̸� �Է� 
	scanf("%s", nextUser->name);
	printf("��ȭ��ȣ : "); // ��ȭ��ȣ �Է� 
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
	scanf("%s", nextUser->phoneNum);
	nextUser->id = nextID; // ���� ID �ο� 
	nextID++;

<<<<<<< HEAD
	printf("Name : %s\n", nextUser->name);
	printf("Phone Number : %s\n", nextUser->phoneNum);
	printf("Personal ID : %d\n", nextUser->id);
=======
	printf("�̸�: %s\n", nextUser->name);
	printf("��ȭ��ȣ: %s\n", nextUser->phoneNum);
	printf("���� ���̵�: %d\n", nextUser->id);
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
}

void removeUser() { // ����� ���� �Լ� 
	int removeNum; // customers ����ü �迭���� ������ ������� ��ġ�� ����Ŵ 
	int removeID; // ������ ������� ���� ID�� ������ ���� 
	removeNum=count; 
	
	while(1) {
<<<<<<< HEAD
		printf("1. Remove by name\n");
		printf("2. Remove by phone number\n");
		printf("3. Remove by personal ID\n");
		printf("Select function(1-3) : ");
		scanf("%s", temp);

		if(temp[0] == '1') { // 1. �̸����� ���� 
			printf("Enter the name of user you want to remove : ");
=======
		printf("1. �̸����� ����\n");
		printf("2. ��ȭ��ȣ�� ����\n");
		printf("3. ���� ���̵�� ����\n");
		printf("������ ���(1-3) : ");
		scanf("%s", temp);

		if(temp[0] == '1') { // 1. �̸����� ���� 
			printf("������ ������� �̸��� �Է��Ͻÿ� : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
			scanf("%s", temp);

			for(removeNum=0;removeNum<count;removeNum++)
				if(strcmp(customers[removeNum].name,temp) == 0) break;
			break;
		}
		else if(temp[0] == '2') { // 2. ��ȭ��ȣ�� ����
<<<<<<< HEAD
			printf("Enter the phone number of user you want to remove : ");
=======
			printf("������ ������� ��ȭ��ȣ�� �Է��Ͻÿ� : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
			scanf("%s", temp);

			for(removeNum=0;removeNum<count;removeNum++)
				if(strcmp(customers[removeNum].phoneNum,temp) == 0) break;
			break;
		}
		else if (temp[0] == '3') { // 3. ���� ID�� ���� 
<<<<<<< HEAD
			printf("Enter the personal ID of user you want to remove : ");
=======
			printf("������ ������� ���� ���̵� �Է��Ͻÿ� : ");
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
			printf("1���� 3 ������ ���� �Է��Ͻÿ�.\n");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
		}
	}

	if(removeNum != count) { // ����� ������ �ִ� ���  
<<<<<<< HEAD
		int shiftNum; // ������ ����� ������ ���� ����� ������ ��� ���� 
		
		for(shiftNum=removeNum+1;shiftNum<count;shiftNum++)
			customers[shiftNum-1]=customers[shiftNum];
=======
		int shiftID; // ������ ����� ������ ���� ����� ������ ��� ���� 
		
		for(shiftID=removeID+1;shiftID<count;shiftID++)
			customers[shiftID-1]=customers[shiftID];
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1

		count--; // ����� �� ���� 
	}
	else {
<<<<<<< HEAD
		printf("There's no matching user.\n");
=======
		printf("��ġ�ϴ� ����ڰ� �����ϴ�.\n");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
	}
}

void search() { // ����� �˻� 
	int searchNum; // �˻��� ������� ��ġ�� ��Ÿ���� ���� ���� 
	int searchID; // �˻��� ������� ���� ID�� ��Ÿ���� ����
	 
	while(1) {
<<<<<<< HEAD
		printf("1. Global Search\n");
		printf("2. Item Search\n");
		printf("Select function(1-2) : ");
=======
		printf("1. ��ü �˻�\n");
		printf("2. �׸� �˻�\n");
		printf("������ ���(1-2) : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
		scanf("%s", temp);

		if(temp[0] == '1') { // 1. ��ü �˻� 
			for(searchNum=0;searchNum<count;searchNum++)
<<<<<<< HEAD
				printf("Name : %s  Phone number : %s  Personal ID : %d\n", customers[searchNum].name, customers[searchNum].phoneNum, customers[searchNum].id);
=======
				printf("�̸�: %s  ��ȭ��ȣ: %s  ���� ���̵�: %d\n", customers[searchNum].name, customers[searchNum].phoneNum, customers[searchNum].id);
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
			break; 
		}
		else if(temp[0] == '2') { // 2. �׸� �˻� 
			while(1) {
<<<<<<< HEAD
				printf("1. Search by name\n");
				printf("2. Search by phone number\n");
				printf("3. Search by personal ID\n");
				printf("Select function(1-3) : ");
				scanf("%s", temp);

				if(temp[0] == '1') { // 1. �̸����� ã�� 
					printf("Enter the name of user you want to find : ");
=======
				printf("1. �̸����� ã��\n");
				printf("2. ��ȭ��ȣ�� ã��\n");
				printf("3. ���� ���̵�� ã��\n");
				printf("������ �׸�(1-3) : ");
				scanf("%s", temp);

				if(temp[0] == '1') { // 1. �̸����� ã�� 
					printf("����� �̸� : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
					scanf("%s", temp);

					for(searchNum=0;searchNum<count;searchNum++)
						if(strcmp(customers[searchNum].name,temp) == 0) break;
					break;
				}
				else if(temp[0] == '2' ) { // 2. ��ȭ��ȣ�� ã�� 
<<<<<<< HEAD
					printf("Enter the phone number of user you want to find : ");
=======
					printf("����� ��ȭ��ȣ : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
					scanf("%s", temp);

					for(searchNum=0;searchNum<count;searchNum++)
						if(strcmp(customers[searchNum].phoneNum,temp) == 0) break;
					break;
				}
				else if(temp[0] == '3') { // 3. ���� ID�� ã�� 
<<<<<<< HEAD
					printf("Enter the personal ID of user you want to find : ");
=======
					printf("����� ���� ���̵� : ");
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
					scanf("%d", &searchID);

					for(searchNum=0;searchNum<count;searchNum++)
						if(customers[searchNum].id == searchID) break;
					break;
				}
<<<<<<< HEAD
				else printf("Enter a number between 1 and 3.\n");
			}
			
			if(searchNum != count) { // �˻��� ��ȿ�� ��� 
				printf("Name : %s\n", customers[searchNum].name);
				printf("Phone Number : %s\n", customers[searchNum].phoneNum);
				printf("Personal ID : %d\n", customers[searchNum].id);
			}
			else printf("There's no matching user.\n");
			break;
		}
		
		else printf("Enter a number between 1 and 2.\n"); 
=======
				else printf("1���� 3 ������ ���� �Է��Ͻÿ�.\n");
			}
			
			if(searchNum != count) { // �˻��� ��ȿ�� ��� 
				printf("�̸�: %s\n", customers[searchNum].name);
				printf("��ȭ��ȣ: %s\n", customers[searchNum].phoneNum);
				printf("���� ���̵�: %d\n", customers[searchNum].id);
			}
			else printf("��ġ�ϴ� ����ڰ� �����ϴ�.\n");
			break;
		}
		
		else printf("1���� 2 ������ ���� �Է��Ͻÿ�.\n"); 
>>>>>>> 11eb04af0f555b47747b5498b689f9f3df0c11c1
	}
}

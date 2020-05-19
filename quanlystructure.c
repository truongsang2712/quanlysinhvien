#include<stdio.h>
#include<string.h>

struct Student {
    char name[50];
    int id;
    float averag;
};



int main()
{
    int total = 0;
    int choose = 0;
    int mssv = 0;
    float dtb = 0;

    printf("Nhập vào số lượng sinh viên của lớp:");
    scanf("%d",&total);
    struct Student student[total];

    //thong tin sv 1
    strcpy(student[0].name, "nam nhan");
    student[0].id = 13;
    student[0].averag = 6.7;
    //thong tin sv 2
    strcpy(student[1].name, "nam hai");
    student[1].id = 17;
    student[1].averag = 8.9;
    //thong tin sv 3
    strcpy(student[2].name, "nam thanh");
    student[2].id = 19;
    student[2].averag = 5.7;
    //thong tin sv 4
    strcpy(student[3].name, "nam nho");
    student[3].id = 123;
    student[3].averag = 9.6;

    while(1) {
        while((choose==0)||(choose>6)) {
            printf("1: hiển thị danh sách sinh viên. \n");
            printf("2: thêm sinh viên mới. \n");
            printf("3: xoá sinh viên theo tên. \n");
            printf("4: xoá sinh viên theo id. \n");
            printf("5: tìm sinh viên theo tên. \n");
            printf("6: tìm sinh viên theo id. \n");
            printf("nhập vào thao tác muốn thực hiện: ");
            scanf("%d", &choose);
        }
        switch (choose) {
        case 1: {
            for(int i = 0; i < total; i++) {
            if(student[i].id =! 0){
                printf("sinh viên %d tên là: %s \n", i+1, student[i].name );
            }
            }
            break;
        }
        case 2: {
        int pos = 0;
        char f_name[50];
 l1:    printf("nhập vị trí cần thêm: ");
        scanf("%d",&pos);
        if(pos > total){
        printf("số lượng sinh vien tối đa là %d. vui lòng nhập lại!", total);
        goto l1;
        }
        for(int j = (total + 1); j >= pos; j--){
        strcpy(student[j].name,student[j-1].name);
        student[j].id = student[j-1].id;
        student[j].averag = student[j-1].averag;
        }
        printf("nhập vào họ tên sinh viên: ");
       // getchar();
       fgets(f_name, 50, stdin);
        
        strcpy(student[pos].name,f_name);
        printf("nhập vào mã số sinh viên: ");
        scanf("%d",&student[pos].id);
        printf("nhập vào điểm trung bình: ");
        scanf("%f",&student[pos].averag);
        


            break;
        }
        case 3: {


            break;
        }
        case 4: {


            break;
        }
        case 5: {


            break;
        }
        case 6: {



            break;
        }
        }
        choose = 0;

    }
}
/*
void action(int choosen, int Total){
switch (choosen){
case 1:{
for(int i = 0; i < Total;i++){
printf("sinh viên %d tên là: %s \n", i, student[i].name );
}


break;
}
case 2:{


break;
}
case 3:{


break;
}
case 4:{


break;
}
case 5:{


break;
}
case 6:{



break;
}
}
}
*/
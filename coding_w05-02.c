#include <stdio.h>

int main() {
// ข้อมูลส่วนบุคคล
char name[30] = "Phasika"; // กำหนดตัวแปร ชื่อตัวแรกภาษาอังกฤษ
int age = 18;        // อายุเลขจำนวนเต็ม
float height = 158.0; // ส่วนสูงเลขทศนิยม

// ข้อมูลผลการเรียน
char subject = 'B'; // B แทนวิชา Biology
float grade = 3.00; // เกรดเลขทศนิยม
char symbol = 'B'; // สัญลักษณ์เกรด

// แสดงผลลัพธ์
printf("%s is %d years old and %.1f centimeters tall.\n", name, age, height); // แสดงชื่อ อายุ และส่วนสูง
printf("In subject %c, %s got %.2f which is symbolized as '%c'.\n", subject, name, grade, symbol); // แสดงวิชา เกรด และสัญลักษณ์เกรด

return 0;
}

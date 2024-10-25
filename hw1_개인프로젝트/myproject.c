#include <stdio.h>

int main() {
    // ���� ����
    int avg_transport_fee;
    int avg_service_fee;
    int avg_additional_fee;
    int previous_month_performance;
    double sh_transport_discount, sh_service_discount, kb_transport_discount, kb_service_discount;
    double sh_total_discount, kb_total_discount;
    double sh_discount_rate, kb_discount_rate;

    // ����� �Է�
    printf("����� ���߱��� ����� �Է��ϼ���: ");
    scanf_s("%d", &avg_transport_fee);
    while (avg_transport_fee < 0) {
        printf("�߸��� �Է��Դϴ�. 0 �̻��� ���� �Է��ϼ���: ");
        scanf_s("%d", &avg_transport_fee);
    }

    printf("����� ��Ȱ���� �������� �Է��ϼ���: ");
    scanf_s("%d", &avg_service_fee);
    while (avg_service_fee < 0) {
        printf("�߸��� �Է��Դϴ�. 0 �̻��� ���� �Է��ϼ���: ");
        scanf_s("%d", &avg_service_fee);
    }

    printf("����� ��Ÿ �������� �Է��ϼ���: ");
    scanf_s("%d", &avg_additional_fee);
    while (avg_additional_fee < 0) {
        printf("�߸��� �Է��Դϴ�. 0 �̻��� ���� �Է��ϼ���: ");
        scanf_s("%d", &avg_additional_fee);
    }

    // ���� ���� ���
    previous_month_performance = avg_transport_fee + avg_service_fee + avg_additional_fee;

    // ����ī�� ���� ��� (���߱���)
    sh_transport_discount = avg_transport_fee * 0.1; // ���߱��� ����� 10%
    if (previous_month_performance >= 500000) {
        if (sh_transport_discount >= 5000) {
            sh_transport_discount = 5000; // �ִ� ���ξ��� 5000������ ����
        }
    }
    else if (previous_month_performance >= 200000) {
        if (sh_transport_discount > 2000) {
            sh_transport_discount = 2000; // �ִ� ���ξ��� 2000������ ����
        }
    }

    else if (previous_month_performance < 200000)
        sh_transport_discount = 0;

    // ��Ȱ���� ���ξ� (����ī��)
    sh_service_discount = avg_service_fee * 0.02; // ��Ȱ���� ����� 2%
    if (previous_month_performance >= 500000) {
        if (sh_service_discount >= 5000) {
            sh_service_discount = 5000; // �ִ� ���ξ��� 5000������ ����
        }
    }
    else if (previous_month_performance >= 200000) {
        if (sh_service_discount >= 2000) {
            sh_service_discount = 2000; // �ִ� ���ξ��� 2000������ ����
        }
    }
    else if (previous_month_performance < 200000)
        sh_service_discount = 0;

    // ���ξ� �ջ� �� �ִ� ���ξ� ����
    sh_total_discount = sh_transport_discount + sh_service_discount;
    sh_discount_rate = (sh_total_discount / (double)previous_month_performance) * 100; // ������ ���

    // ����ī�� ���� ��� (���߱���)
    kb_transport_discount = avg_transport_fee * 0.1; // ���߱��� ����� 10%
    if (previous_month_performance >= 200000) {
        if (kb_transport_discount >= 2000) {
            kb_transport_discount = 2000; // �ִ� ���ξ��� 2000������ ����
        }
    }
    else if (previous_month_performance < 200000)
        kb_transport_discount = 0;

    // ��Ȱ���� ���ξ� (����ī��)
    kb_service_discount = avg_service_fee * 0.02;
    if (previous_month_performance >= 200000) {
        if (kb_service_discount >= 8000)
            kb_service_discount = 8000; // �ִ� ���ξ��� 8000������ ����
    }
    else if (previous_month_performance < 200000)
        kb_service_discount = 0;

    // ���ξ� �ջ� �� �ִ� ���ξ� ����
    kb_total_discount = kb_transport_discount + kb_service_discount;
    kb_discount_rate = (kb_total_discount / (double)previous_month_performance) * 100; // ������ ���

    // ��� ���
    printf("\n���� ���� �ݾ� �� ������:\n");
    printf("���� K-�н� üũī���� ���� ���� �ݾ� %.0f���̸�, ������ %.2f%%�Դϴ�.\n", sh_total_discount, sh_discount_rate);
    printf("���� K-�н� üũī���� ���� ���� �ݾ� %.0f���̸�, ������ %.2f%%�Դϴ�. \n", kb_total_discount, kb_discount_rate);

    // ���� �� �� ���
    if (sh_total_discount == kb_total_discount) {
        printf("���� ��� ���� �����ϼŵ� ������ �����մϴ�.\n");
    }
    else if (sh_total_discount > kb_total_discount) {
        printf("���� ���� K-�н� üũī�尡 �� ���� �����Դϴ�.\n");
    }
    else {
        printf("���� KB K-�н� üũī�尡 �� ���� �����Դϴ�.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    // 변수 선언
    int avg_transport_fee;
    int avg_service_fee;
    int avg_additional_fee;
    int previous_month_performance;
    double sh_transport_discount, sh_service_discount, kb_transport_discount, kb_service_discount;
    double sh_total_discount, kb_total_discount;
    double sh_discount_rate, kb_discount_rate;

    // 사용자 입력
    printf("월평균 대중교통 요금을 입력하세요: ");
    scanf_s("%d", &avg_transport_fee);
    while (avg_transport_fee < 0) {
        printf("잘못된 입력입니다. 0 이상의 값을 입력하세요: ");
        scanf_s("%d", &avg_transport_fee);
    }

    printf("월평균 생활서비스 결제액을 입력하세요: ");
    scanf_s("%d", &avg_service_fee);
    while (avg_service_fee < 0) {
        printf("잘못된 입력입니다. 0 이상의 값을 입력하세요: ");
        scanf_s("%d", &avg_service_fee);
    }

    printf("월평균 기타 결제액을 입력하세요: ");
    scanf_s("%d", &avg_additional_fee);
    while (avg_additional_fee < 0) {
        printf("잘못된 입력입니다. 0 이상의 값을 입력하세요: ");
        scanf_s("%d", &avg_additional_fee);
    }

    // 전월 실적 계산
    previous_month_performance = avg_transport_fee + avg_service_fee + avg_additional_fee;

    // 신한카드 할인 계산 (대중교통)
    sh_transport_discount = avg_transport_fee * 0.1; // 대중교통 요금의 10%
    if (previous_month_performance >= 500000) {
        if (sh_transport_discount >= 5000) {
            sh_transport_discount = 5000; // 최대 할인액을 5000원으로 설정
        }
    }
    else if (previous_month_performance >= 200000) {
        if (sh_transport_discount > 2000) {
            sh_transport_discount = 2000; // 최대 할인액을 2000원으로 설정
        }
    }

    else if (previous_month_performance < 200000)
        sh_transport_discount = 0;

    // 생활서비스 할인액 (신한카드)
    sh_service_discount = avg_service_fee * 0.02; // 생활서비스 요금의 2%
    if (previous_month_performance >= 500000) {
        if (sh_service_discount >= 5000) {
            sh_service_discount = 5000; // 최대 할인액을 5000원으로 설정
        }
    }
    else if (previous_month_performance >= 200000) {
        if (sh_service_discount >= 2000) {
            sh_service_discount = 2000; // 최대 할인액을 2000원으로 설정
        }
    }
    else if (previous_month_performance < 200000)
        sh_service_discount = 0;

    // 할인액 합산 및 최대 할인액 제한
    sh_total_discount = sh_transport_discount + sh_service_discount;
    sh_discount_rate = (sh_total_discount / (double)previous_month_performance) * 100; // 할인율 계산

    // 국민카드 할인 계산 (대중교통)
    kb_transport_discount = avg_transport_fee * 0.1; // 대중교통 요금의 10%
    if (previous_month_performance >= 200000) {
        if (kb_transport_discount >= 2000) {
            kb_transport_discount = 2000; // 최대 할인액을 2000원으로 설정
        }
    }
    else if (previous_month_performance < 200000)
        kb_transport_discount = 0;

    // 생활서비스 할인액 (국민카드)
    kb_service_discount = avg_service_fee * 0.02;
    if (previous_month_performance >= 200000) {
        if (kb_service_discount >= 8000)
            kb_service_discount = 8000; // 최대 할인액을 8000원으로 설정
    }
    else if (previous_month_performance < 200000)
        kb_service_discount = 0;

    // 할인액 합산 및 최대 할인액 제한
    kb_total_discount = kb_transport_discount + kb_service_discount;
    kb_discount_rate = (kb_total_discount / (double)previous_month_performance) * 100; // 할인율 계산

    // 결과 출력
    printf("\n예상 할인 금액 및 할인율:\n");
    printf("신한 K-패스 체크카드의 예상 할인 금액 %.0f원이며, 할인율 %.2f%%입니다.\n", sh_total_discount, sh_discount_rate);
    printf("국민 K-패스 체크카드의 예상 할인 금액 %.0f원이며, 할인율 %.2f%%입니다. \n", kb_total_discount, kb_discount_rate);

    // 할인 비교 및 출력
    if (sh_total_discount == kb_total_discount) {
        printf("따라서 어느 것을 선택하셔도 혜택이 동일합니다.\n");
    }
    else if (sh_total_discount > kb_total_discount) {
        printf("따라서 신한 K-패스 체크카드가 더 나은 선택입니다.\n");
    }
    else {
        printf("따라서 KB K-패스 체크카드가 더 나은 선택입니다.\n");
    }

    return 0;
}

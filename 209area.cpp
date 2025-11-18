#include <iostream>
using namespace std;

int main()
{
    double price = 0.8;    // 苹果单价
    int todayApples = 2;   // 今天买的苹果数（第一天）
    int totalApples = 0;   // 总苹果数
    double totalCost = 0;  // 总花费
    int days = 0;          // 天数

    cout << "购买记录：" << endl;
    while (todayApples <= 100) {
        days++;
        double dayCost = todayApples * price;
        totalApples += todayApples;
        totalCost += dayCost;

        cout << "第" << days << "天: 买" << todayApples
            << "个苹果, 花费" << dayCost << "元" << endl;
        todayApples *= 2;
    }
    double averageCost = totalCost / days;
    
    cout << "\n统计结果：" << endl;
    cout << "总天数: " << days << "天" << endl;
    cout << "总苹果数: " << totalApples << "个" << endl;
    cout << "总花费: " << totalCost << "元" << endl;
    cout << "每天平均花费: " << averageCost << "元" << endl;

    return 0;
}
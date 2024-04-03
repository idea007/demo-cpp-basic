#include "../include/log.h"

void log(const string& message) {
    
    // 获取当前日期和时间
    time_t now = time(0);
    struct tm *localTime = localtime(&now);

    // 格式化日期和时间
    char buffer[80];
    strftime(buffer, 80, "%Y-%m-%d %H:%M:%S", localTime);

    // 输出日志信息
    cout << "[" << buffer << "] " << message << endl;
}
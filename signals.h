/*! \file    signals.h
 *  \brief   Функции для работы с сигналами
 *
 *  \details Заголовочный файл, содержащий объявления функций 
 *   для обработки сигналов и настройки таймера
 */

#ifndef SIGNALS_H
#define SIGNALS_H

void signalHandler(int signum);

void timeoutHandler();

FILE* openLogFile(char* logFileName);

void writeLog(const char* format, FILE* logfd, ...);

void setTimer(int timeout);

#endif
# Практическая работа №6. Использование сигналов и средств хронометража в ОС GNU/Linux

Шестая практическая работа по дисциплине Системное программирование

## Цель работы

Изучение особенностей работы с системными часами и сигналами в ОС GNU/Linux.

## Задачи

1. Ознакомиться с краткими теоретическими сведениями по использованию сигналов и средств работы с системными часами в ОС GNU/Linux.
2. Модифицировать результаты выполнения ЛР 5 использованием программных средств для работы с сигналами и средствами хронометража. Обеспечить сборку обеих частей программы, как отдельно, так и полностью, с использованием инструментального набора GNU Autotools. Серверная и клиентская часть при запуске настраиваются аргументами командной строки. Для обработки аргументов командной строки рекомендовано использование функций семейства getopt.
3. Используя изученные механизмы, разработать и отладить:

- серверную часть, в которой должен быть обеспечен перехват сигналов, приводящих к аварийному завершению процесса и настроен таймер неактивности клиентской стороны. Аргументы: 
а) имя log-файла, фиксирующего происходящие события; 
б) количество единиц времени, по прошествии которых сервер автоматически разрывает соединение с клиентом (для протокола TCP) или не ждет сообщений от клиента (для протокола UDP); 
в) другие - по необходимости.

- клиентскую часть, в которой должен быть обеспечен перехват сигналов, приводящих к аварийному завершению процесса и настроен таймер неактивности пользователя. Аргументы: а) имя log-файла, фиксирующего происходящие события; б) количество единиц времени, по прошествии которых клиент автоматически завершает функционирование; в) другие - по необходимости.

4. Составить общее описание результатов, инструкции по сборке и использованию программы, а также инструкцию по получению документации, сформировать архив формата tar.gz и представить на проверку с исходными текстами программы. Внимание: исходные тексты программ должны соответствовать принятому стандарту кодирования, а также содержать комментарии в стиле системы Doxygen.


## Вариант задания

Вариант 22.
Клиент принимает от пользователя целочисленную квадратнуюматрицу и отсылает ее серверу.Сервер принимает целочисленную квадратную матрицу, после этогозаменяет строку с минимальным элементом нулями, а затем  удаляет  путемперемещения   элементов  столбец   с   максимальным   элементом.   На   экранвыводится результирующая матрица, номера модифицированной строки иудаленного столбца.

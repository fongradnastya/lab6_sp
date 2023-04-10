/*! \file    input.h
 *  \brief   Функции для считывания данных из консоли
 *
 *  \details Заголовочный файл, содержащий объявления функций 
 *           для обраотки пользовательского ввода
 */

/*!
 * \brief Считывает строку из консоли
 * \return полученная строка
 */
char* GetString();

/*!
 * \brief Считывает целое число из консоли
 * \param[out] val считанное значение
 * \return код выполнения операции
 */
int InputInt(int* val);

/*!
 * \brief Считывает матрицу из консоли
 * \param[out] matrix матрица для считывания
 * \param[in] size размер матрицы для ввода
 * \return
 */
int InputMatrix(int** matrix, int size);

/*!
 * \brief Считывает размер создаваемой матрицы
 * \return значение размера
 */
int InputSize();
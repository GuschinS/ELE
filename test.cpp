// Задача: вывести в диагностику сообщение Hello, world!

main()
{
    Diagnostics("Hello, world!");
}

main()
{
    new text[] = {"Hello, world!"} //Создать массив.
    Diagnostics("%s", text);
}

// Задача: 
// Объявить новую переменную, присвоить ей значение; 
// Объявить восьмибайтовый одномерный массив, записать эту переменную в массив в первый байт и затем во второй элемент (4хбайтовый); 
// Вывести значение второго элемента массива в диагностику в hex формате.

main()
{
    new a = 3   // Объявить новую переменную, присвоить ей значение;
    new oBuf[2] // Объявить восьмибайтовый одномерный массив,
    oBuf{1} = a //записать эту переменную в массив в первый байт
    oBuf[1] = a //затем во второй элемент (4х байтовый)
    Diagnostics("%x", oBuf[1]);    //Вывести значение второго элемента массива в диагностику в hex формате
}

// Задача: перебрав числа от 0 до 100, вывести в диагностику все числа, кратные 5.

main()
{
    for (new i = 0; i <= 100; i++) //Цикл от 0 до 100
    {
	    if (i%5 == 0) //Проверка кратности 5
        {
            Diagnostics("%d", i); //Если да, то выводим это число в сообщении
        }
    }
}

// Задача: написать функцию определения четности числа, вывести результат в Диагностике.

main()
{
    new c = 2 // Проверяемое число
    new res = myFunc(c)
    if (res != 0) //Проверка возвращенного значения
    {
        Diagnostics("%d - Нечетное число", a)
    }
    else
    {
        Diagnostics("%d - Четное число", a)
    }
}

myFunc(a{})
{
    new b = 1
    if (a%2 == 0) //Проверка четности
    {
        b = 0
    }
    else
    {
        b = 1
    }
    return b //Возвращаемое значение
}













// main()
// {
//     const BUF_SIZE = 512
//     const index = 0
//     const speed = 9600
//     new ioBaf{BUF_SIZE}
//     new bufBite
//     const size = 5
//     new buf{size} = "Hello"

//     PortInit(index, speed, BUF_SIZE)
//     PortWrite(index, buf[], size)
//     PortRead(index, bufBite, timeout)

// }
# 2019_LED_Matrix

## :pager: Overview
Simple library for sending short text messages to MAX7219 32x8 LED matrix. 
It allows you to display alphabetic strings on the LED Matrix.

## :grey_question: Description
This library allows you to send Latin characters using Hercules serial port terminal through the UART Interface and display them on the 32x8 LED Matrix. Every character takes up 8x8 matrix, so with 32x8 matrix you are able to display up to 4 characters at once. Every letter is defined in the Letter.h header file.

The project consists of:
 - PC (Hercules serial port terminal) 
 - UART Interface 
 - STM32F407VG 
 - MAX7219 32x8 LED Matrix
 
 Main modules:
 - MAX7219
 - MAX7219_MatrixDisplay
 - Letters.h
 
## :hammer: Tools 
We used VisualGDB addon for Visual Studio instead of Eclipse IDE. It was needed in order to use C++ and not just C.

## :play_or_pause_button: How to run 
VisualGDB addon for Visual Studio is required in order to use and run this library.

## :cd: How to compile 
With VisualGDB addon installed and the STM32 configured properly there's nothing else needed - you can just click compile.

## :memo: Future improvements 
For now you can send Latin characters only, but it is easily extensible and defining new characters or symbols is not a problem.

## :package: Attributions 
Based on:
https://gitlab.com/petoknm/max7219/

## :book: License 
[MIT](https://choosealicense.com/licenses/mit/)

*The project was conducted during the Microprocessor Lab course held by the
Institute of Control and Information Engineering, Poznan University of Technology.
Supervisor: Marek Kraft/Michał Fularz/Tomasz Mańkowski/Adam Bondyra*

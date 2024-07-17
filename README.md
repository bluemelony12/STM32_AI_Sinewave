# Prediction Sine Value using STM32 X-CUBE-AI 

## Project Outline
This project is based on digikey's TinyML course using STM32 CUBE AI.  
(https://www.youtube.com/watch?v=crJcDqIUbP4)  

The development target is stm32F769i disco board and built based on STM32CubeMX and STM32CubeIDE.  

**--Program version--**  
STM32CUBE F7 v1.17.1  
STM32CUBE IDE 1.15.1  
X-CUBE-AI 9.0.0

## Project Structure
```
STM32_AI_Sinewave
├─ .ai
├─ .cproject
├─ .gitignore
├─ .mxproject
├─ .project
├─ .settings
├─ Core --------------------------- Main application
│  ├─ Inc
│  ├─ Src
│  └─ Startup
├─ Drivers ------------------------ Drivers
│  ├─ CMSIS
│  └─ STM32F7xx_HAL_Driver
├─ Middlewares
│  └─ ST
│     └─ AI ----------------------- X-CUBE-AI Middlewares
├─ README.md
├─ STM32F769NIHX_FLASH.ld
├─ STM32F769NIHX_RAM.ld
├─ Sine_wave.ioc ----------------- CUBE MX .ioc file
├─ Sine_wave.launch
├─ X-CUBE-AI
│  ├─ App ------------------------ AI data file created with CUBE MX
│  └─ LICENSE.txt
└─ sine_model.tflite ------------- AI Model file
```

## AI model information used  

(It is my first deep learning model. :sweat_smile:)  

**1. Training Model**  
![image](https://github.com/user-attachments/assets/3fb5eea6-7cc7-44c6-bf0c-28323c572415)

**2. Model Layer** 
```
_________________________________________________________________
 Layer (type)                Output Shape              Param #   
=================================================================
 dense_16 (Dense)            (None, 128)               256       
                                                                 
 dense_17 (Dense)            (None, 128)               16512     
                                                                 
 dense_18 (Dense)            (None, 1)                 129       
                                                                 
=================================================================
Total params: 16,897
Trainable params: 16,897
Non-trainable params: 0
_________________________________________________________________
```

**3. Loss Graph**  
![image](https://github.com/user-attachments/assets/13afed73-c609-4d3f-b510-901820a6da7b)


## How to run the project
1. Execute the .project file for add the project to the CubeIDE
2. Build project. (Target: stm32F769i disco board)
3. Connect the target board and run it.
4. When the program starts, the input value (x_val) is increased by 0.1 from 0 and the predicted output value Sin(y_val) is output to VCP.

## Problem
1. AI modeling input ranges from 0 to 2pi, so any value higher than that will result in an error.





/*
 * EX4.c
 *
 *  Created on: Sep 30, 2024
 *      Author: kanza
 */

#include <EX9.h>
  const int MAX_LED = 4;
   int index_led = 0;
   int led_buffer[4] = {2, 1, 2, 4};


   void update7SEG(int index)
   {

   	switch(index)
   	{

   	    case 0:
   	      if(index_led >= 0 && index_led <= 3)
   	      {
   	    	switch(led_buffer[index_led])
   	    	{
   	    	    case 0:
   	    	    	 HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
   	    	    	 HAL_GPIO_WritePin(GPIOA, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	    	 HAL_GPIO_WritePin(GPIOB, SEG_6_Pin, SET);
   	    	    	 HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin , RESET);
   	    	         break;
   	    	    case 1:
   	    	    	 HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
   	    	    	 HAL_GPIO_WritePin(GPIOA, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	    	 HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   	    	    	 HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_2_Pin, RESET);
   	    	    	 break;
   	    	    case 2:
   	    	    	HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
   	    	        HAL_GPIO_WritePin(GPIOA, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_2_Pin | SEG_5_Pin , SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_3_Pin | SEG_4_Pin | SEG_6_Pin, RESET);
   	    	        break;
   	    	    case 3:
   	    	    	HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
   	    	    	HAL_GPIO_WritePin(GPIOA, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_4_Pin | SEG_5_Pin , SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_2_Pin | SEG_3_Pin | SEG_6_Pin, RESET);
   	    	    	break;
   	    	    case 4:
   	    	    	HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
   	    	    	HAL_GPIO_WritePin(GPIOA, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin |SEG_2_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   	    	    	break;
   	    	    case 5:
   	    	    	HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
   	    	    	HAL_GPIO_WritePin(GPIOA, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_4_Pin , SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   	    	        break;
   	    	    case 6:
   	    	    	HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
   	    	        HAL_GPIO_WritePin(GPIOA, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_1_Pin , SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   	    	        break;
   	    	    case 7:
   	    	    	HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
   	    	    	HAL_GPIO_WritePin(GPIOA, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin, RESET);
   	    	        break;
   	    	    case 8:
   	    	    	HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
   	    	    	HAL_GPIO_WritePin(GPIOA, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	        HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   	    	        break;
   	    	    case 9:
   	    	    	HAL_GPIO_WritePin(GPIOA, EN0_Pin, RESET);
   	    	    	HAL_GPIO_WritePin(GPIOA, EN1_Pin | EN2_Pin | EN3_Pin, SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_4_Pin, SET);
   	    	    	HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   	    	    	break;
                   default:
                   	break;
   	    	}
   	    	index_led = 1;
   	      }
   	      break;
   	    case 1:
   	       if(index_led >= 0 && index_led <= 3)
   	       {
   	    	  switch(led_buffer[index_led])
   	    	  {
   	    	    case 0:
   	    		    HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
   	    		    HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_6_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin , RESET);
   	    		    break;
   	    		case 1:
   	    			HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_2_Pin, RESET);
   	    		    break;
   	    		case 2:
   					HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_2_Pin | SEG_5_Pin , SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_3_Pin | SEG_4_Pin | SEG_6_Pin, RESET);
   	    		    break;
   	    		case 3:
   	    			HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
   				    HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_4_Pin | SEG_5_Pin , SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_2_Pin | SEG_3_Pin | SEG_6_Pin, RESET);
   	    		    break;
   	    		case 4:
   	    			HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin |SEG_2_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   	    		    break;
   	    		case 5:
   	    			HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_4_Pin , SET);
   	    		    HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   	    		    break;
   				case 6:
   					HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   	    		    break;
   				case 7:
   					HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin, RESET);
   					break;
   				case 8:
   					HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   					break;
   				case 9:
   					HAL_GPIO_WritePin(GPIOA, EN1_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN2_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_4_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   					break;
   				default:
   					break;
   			}
   	    	  index_led = 2;
   		  }
   	       break;
   	    case 2:
   		   if(index_led >= 0 && index_led <= 3)
   		   {
   			  switch(led_buffer[index_led])
   			  {
   				case 0:
   					HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin , RESET);
   					break;
   				case 1:
   					HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_2_Pin, RESET);
   					break;
   				case 2:
   					HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_2_Pin | SEG_5_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_3_Pin | SEG_4_Pin | SEG_6_Pin, RESET);
   					break;
   				case 3:
   					HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_4_Pin | SEG_5_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_2_Pin | SEG_3_Pin | SEG_6_Pin, RESET);
   					break;
   				case 4:
   					HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin |SEG_2_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   					break;
   				case 5:
   					HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_4_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   					break;
   				case 6:
   					HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   					break;
   				case 7:
   					HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin, RESET);
   					break;
   				case 8:
   					HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   					break;
   				case 9:
   					HAL_GPIO_WritePin(GPIOA, EN2_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN3_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_4_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   					break;
   				default:
   					break;
   			}
   			  index_led = 3;
   		  }
   		   break;
   	    case 3:
   	    	if(index_led >= 0 && index_led <= 3)
   		   {
   			  switch(led_buffer[index_led])
   			  {
   				case 0:
   					HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin , RESET);
   					break;
   				case 1:
   					HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_2_Pin, RESET);
   					break;
   				case 2:
   					HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_2_Pin | SEG_5_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_3_Pin | SEG_4_Pin | SEG_6_Pin, RESET);
   					break;
   				case 3:
   					HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_4_Pin | SEG_5_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin |SEG_2_Pin | SEG_3_Pin | SEG_6_Pin, RESET);
   					break;
   				case 4:
   					HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_3_Pin | SEG_4_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin |SEG_2_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   					break;
   				case 5:
   					HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin | SEG_4_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   					break;
   				case 6:
   					HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_1_Pin , SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin |SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, RESET);
   					break;
   				case 7:
   					HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin, RESET);
   					break;
   				case 8:
   					HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_4_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   					break;
   				case 9:
   					HAL_GPIO_WritePin(GPIOA, EN3_Pin, RESET);
   					HAL_GPIO_WritePin(GPIOA, EN0_Pin | EN1_Pin | EN2_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_4_Pin, SET);
   					HAL_GPIO_WritePin(GPIOB, SEG_0_Pin | SEG_1_Pin | SEG_2_Pin | SEG_3_Pin | SEG_5_Pin | SEG_6_Pin , RESET);
   					break;
   				default:
   					break;
   			}
   			  index_led = 0;
   		  }
   	    default:
   			break;
          }
   }

   void  updateClockBuffer(int hour, int minute)
   {
		if(hour < 10)
		{
			led_buffer[0] = 0;
			led_buffer[1] = hour;
		}

		if(hour >= 10 && hour <= 24)
		{
			led_buffer[0] = hour / 10;
			led_buffer[1] = hour % 10;
		}

		if(minute < 10)
		{
			led_buffer[2] = 0;
			led_buffer[3] = minute;
		}

		if(minute >= 10 && minute <= 60)
		{
			led_buffer[2] = minute / 10;
			led_buffer[3] = minute % 10;
		}

   }

//   	   	   	   	   	    	 0    1      2    3     4     5     6      7
   uint8_t matrix_buffer[8] = {0x3C, 0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66};

   void resetLEDMatrix()
    {
    	HAL_GPIO_WritePin(GPIOB, ROW2_Pin | ROW3_Pin | ROW4_Pin | ROW5_Pin | ROW6_Pin | ROW7_Pin | ROW0_Pin | ROW1_Pin, SET);
    }

    void displayLEDMatrix(uint8_t index)
    {
    	switch(index)
    	{

    	case 0x3C:
			HAL_GPIO_WritePin(GPIOA, ENM0_Pin | ENM1_Pin |  ENM6_Pin | ENM7_Pin, SET);
			HAL_GPIO_WritePin(GPIOA, ENM2_Pin | ENM3_Pin |  ENM4_Pin | ENM5_Pin, RESET);
            break;

    	case 0x24:
    	    HAL_GPIO_WritePin(GPIOA, ENM0_Pin | ENM1_Pin | ENM6_Pin | ENM7_Pin, SET);
    		HAL_GPIO_WritePin(GPIOA, ENM2_Pin | ENM3_Pin | ENM4_Pin | ENM5_Pin, RESET);
    		break;
    	case 0x66:
    	    HAL_GPIO_WritePin(GPIOA, ENM0_Pin | ENM3_Pin | ENM4_Pin | ENM7_Pin, SET);
    		HAL_GPIO_WritePin(GPIOA, ENM1_Pin | ENM2_Pin | ENM5_Pin | ENM6_Pin, RESET);
    		break;
    	case 0x7E:
    	    HAL_GPIO_WritePin(GPIOA, ENM0_Pin | ENM7_Pin , SET);
    	    HAL_GPIO_WritePin(GPIOA, ENM1_Pin | ENM2_Pin | ENM3_Pin | ENM4_Pin | ENM5_Pin | ENM6_Pin, RESET);
    	    break;
    	default:
    	    break;
    	}
    }

    void updateLEDMatrix(int index)
    {
		resetLEDMatrix();
    	switch(index)
    	{

          case 0:
       	   HAL_GPIO_WritePin(GPIOB, ROW0_Pin, RESET);
       	   displayLEDMatrix(matrix_buffer[index]);

       	   break;

          case 1:
       	   HAL_GPIO_WritePin(GPIOB, ROW1_Pin, RESET);
   		   displayLEDMatrix(matrix_buffer[index]);

   		   break;

          case 2:
       	   HAL_GPIO_WritePin(GPIOB, ROW2_Pin, RESET);
       	   displayLEDMatrix(matrix_buffer[index]);

       	   break;

          case 3:
       	   HAL_GPIO_WritePin(GPIOB, ROW3_Pin, RESET);
   		   displayLEDMatrix(matrix_buffer[index]);

   		   break;

          case 4:
       	   HAL_GPIO_WritePin(GPIOB, ROW4_Pin, RESET);
   		   displayLEDMatrix(matrix_buffer[index]);

   		   break;

          case 5:
       	   HAL_GPIO_WritePin(GPIOB, ROW5_Pin, RESET);
   		   displayLEDMatrix(matrix_buffer[index]);

   		   break;

          case 6:
       	   HAL_GPIO_WritePin(GPIOB, ROW6_Pin, RESET);
   		   displayLEDMatrix(matrix_buffer[index]);

   		   break;

          case 7:
       	   HAL_GPIO_WritePin(GPIOB, ROW7_Pin, RESET);
   		   displayLEDMatrix(matrix_buffer[index]);

   	       break;

          default:
       	   break;
      }
   }

    //   	   	   	   	   	    	 0    1      2    3     4     5     6      7
//       uint8_t matrix_buffer[8] = {0x3C, 0x66, 0x66, 0x66, 0x7E, 0x66, 0x66, 0x66};

    void shiftDown()
    {
    	uint8_t temp = matrix_buffer[7];
    	matrix_buffer[7] = matrix_buffer[6]; //7
    	matrix_buffer[6] = matrix_buffer[5]; //6
    	matrix_buffer[5] = matrix_buffer[4]; //5
    	matrix_buffer[4] = matrix_buffer[3]; //4
    	matrix_buffer[3] = matrix_buffer[2]; //3
    	matrix_buffer[2] = matrix_buffer[1]; //2
    	matrix_buffer[1] = matrix_buffer[0]; //1
    	matrix_buffer[0] = temp;






    }

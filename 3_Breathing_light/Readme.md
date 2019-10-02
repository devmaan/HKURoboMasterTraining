# Assignment III for Automation
## Breathing light
What you are asked to make is a breathing light.
![image](https://github.com/EE-LiuYunhao/HKURoboMasterTraining/blob/lead_Liu_yuchen/3_Breathing_light/light.gif)

You may implement the tasks below one by one, but you could just record your work that has the most complete function that you can achieve!
(Only fulfill the first task is good enough)
1. use a switch(_output 0v when closed, 5v when open!!!!!_) to control the on/off of the light
   **suggestion: let `PI0`(correction for the training slide) be the input pin and `PI2` be the output pin**
2. make the light to breath periodically
3. make the period to be 2s (1s to brighten and 1s to darken)
## How to hand in your assignment?
- ## Please take a short video of your model and demonstrate the full function of it. Upload you video [here](https://drive.google.com/drive/folders/1Yw7WxppSxigywkYjdmyoB-FW3ukdmkxP?usp=sharing)
### Some hints to help you:
1. use `HAL_Delay(time)` to keep the existing state of the developing board for `time`μs
2. There is no need to create any interrupt, just add your code in the while loop inside `main()`
3. All the techniques you need is taught in the training, so those who didn't come please refer to the slide I attached below or uploaded on slack.
4. You will never know what problems you will encounter if you don't practice those theories by yourself!
5. Ask google or me if there's any uncertainty, my email's u35lyc@connect.hku.hk

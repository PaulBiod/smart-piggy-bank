# smart-piggy-bank
A smart piggy bank for your home assistant instance
![20250512_181409](https://github.com/user-attachments/assets/8a0f2bee-9713-42b3-8339-425e0cb6b09c)

Features : 
- A smart way to count your savings
- keep track of your savings in Home assistant
- a 2.4 tft touchscreen allows you to take money off of the piggy bank without messing with the count
- some lights for the different coins
- when adding a coin the text corresponding to the coin turns green
- a small sound will confirm your coin is saved
- alexa will make an annoucement to tell you how much you have
- With generative AI, alexa will tell it in a funny way
- a lockable door with a code can be used to take the coin drawer off the  piggy bank
- The print includes organizers to keep the electronic safe
- etc..


So, when I first create this project, I was thinking about how to recognize the coins.
It was not an easy issue, cause I tried a sensor for the weight, but some coins were almost the same weight and the sensor was not as accurate as it needed to be.
I know there is some coin organizers but they need some big parts, and this was not imaginable for a piggy bank.
So, I went the secure way, one slot for each coin, one optocoupler for each slot (for euros we have 8 type of coins, so 8 optocouplers), I use an esp32 S3 because the touchscreen is displaying some gifs, and these need more memory. Also, with 8 optocouplers (24 cables) + touchscreen (12 cables) + buzzer (3 cables)

![20250511_172515](https://github.com/user-attachments/assets/7315b1f6-51e0-4d13-a50c-ec30fe425a1e)

So, for this project, you need : 
- 8 optocouplers : (narrow body) https://fr.aliexpress.com/item/1005006209160046.html?spm=a2g0o.order_list.order_list_main.4.13ef5e5b3g0h2y&gatewayAdapt=glo2fra
- 1 passive buzzer : https://fr.aliexpress.com/item/32725486774.html?spm=a2g0o.order_list.order_list_main.19.13ef5e5b3g0h2y&gatewayAdapt=glo2fra
- 1 esp32 S3 (N16R8) : https://fr.aliexpress.com/item/1005006866671541.html?spm=a2g0o.order_list.order_list_main.4.13ef5e5bvWT1hy&gatewayAdapt=glo2fra
- Many dupont cables, I suggest at least 20cm cables for the screen
- Wago connectors to organize all positive and negative optocouplers cables.

Also, I suggest organizing the cables in a way that it won't be a mess, so that you can easily check the wiring if something is not Ok.

The yaml part of the esphome is pretty easy and understandable.
For each optocoupler, you define a pin. On coin inserted, it sends the amount to Home assistant, and home assistant keep the count in an input helper.
The touch screen allows to enter in a menu where you can select the amount you want to take off. Of course, if you want to take more money than you have, it will not let you proceed.
When a coin in inserted, a small funny message on the screen will be displayed. It's in spanish but just do some google translate to understand.

I'm not going to talk about wiring, cause it's pretty easy and can be found online (how to wire a touchscreen, a buzzer, an optocoupler)

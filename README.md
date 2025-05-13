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

On the Home assistant side, this is basically what you get : 

![image](https://github.com/user-attachments/assets/5f7affb2-b7ee-4ad9-b0d3-b5ff4571e609)

![image](https://github.com/user-attachments/assets/7a96f9bd-5534-4105-b9a2-f9513d98d15e)

The print is a little big long, but this is the v2, bigger than v1 which was very hard to arrange the cables. V2 is really pratical cause the coins can't touch the electronic parts, and are removable via a smart drawer.
I made the entire design, except for the locking door, I used this print ( https://makerworld.com/en/models/671454-safe-mini-vault-money-bank-piggy-bank?from=search#profileId-599182 ) to just take the door part that I needed and adapted it to my design 

Here are some pictures to help you see how it's done : 
![20250511_172440](https://github.com/user-attachments/assets/0b1b2f14-5c9c-4a6f-a3af-602bd0a5ca4a)

![20250511_172515](https://github.com/user-attachments/assets/5618958f-5379-4555-8bce-cdd1e9d11900)

![20250512_164216](https://github.com/user-attachments/assets/a1f2a37c-5962-491c-aa76-ae6d1fe4d120)

![20250512_164221](https://github.com/user-attachments/assets/f02801d4-d9f2-46d7-bffe-ad5b2562efdc)

![20250512_164224](https://github.com/user-attachments/assets/78cc710a-667d-4ead-ad88-886817e97c8c)

![20250512_164228](https://github.com/user-attachments/assets/3ed49b94-81fb-45ea-b329-056c8db6a8ce)

![20250512_164637](https://github.com/user-attachments/assets/204d8fde-a033-471b-a799-ce622f6f4c7d)

![20250512_164640](https://github.com/user-attachments/assets/c7bf6d9e-85e7-41f2-aa47-53849121fd76)

![20250512_171628](https://github.com/user-attachments/assets/425ebdcd-8638-4ba3-b094-4ef6d40e06d6)

![20250512_171635](https://github.com/user-attachments/assets/4a172f47-da84-409c-ae60-cf095c8db935)

![20250512_181403](https://github.com/user-attachments/assets/fdcd9665-d2f5-42cc-abdd-302661d50930)




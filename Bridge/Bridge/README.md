#Bridge Pattern


## Intent
- The intent of this pattern is to decouple abstraction from implementation so that the two can vary independently.  
- prefer composition over inheritance

## Concept
- Shape and color example can be best explained.
- One alternative approach is to create Shape for each color, For eg. RedColorShape, BlueColor shape and so on. Now
  Imagine how many sub classes you need to create for each Shape and each color.
  Say shape = N and Colors = M
  With this approach you when ever a new shape is added you need to create M classes.
- With bridge pattern you will maintain color hierarchy separately and shape hirearchy separetly.
- Now when a new shape is added you just need to create 1 class and use color as composed object.
- Look at example code for more detail.


## Comparison
- Similar to Adapter and Strategy pattern.
- As per UML diagram they all look similar but there business purpose(intent) is different.

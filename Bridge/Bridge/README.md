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
- prefer composition over inheritance
- Bridge is a quite often recurring pattern, because it's the solution whenever there are two orthogonal dimensions in the domain.    E.g.shapes and drawing methods, behaviours and platforms, file formats and serializers and so forth.
- From the right point of view, Bridge cannot be confused with Adapter, because they solve a different problem, and composition is superior to inheritance not because of the sake of itself, but because it allows to handle orthogonal concerns separately.
- Look at example code for more detail.


## Comparison
- Similar to Adapter and Strategy pattern.
- As per UML diagram they all look similar but there business purpose(intent) is different.
- code-wise, Adapter and Bridge patterns are very similar. Business-wise, they're different.

# SuspendedScrollBar
Qt悬浮滚动条-滚动条样式

原文链接：https://blog.csdn.net/m32692529/article/details/78579820


我们在Qt开发中经常会用到带有滚动条的控件，但是自带的滚动条实在太丑。于是我们想到用qss美化滚动条，这是一种很常见的做法。但是当我们只是对滚动条通过一个style做一些美化的话，会发现效果并不是那么完美。例如滚动条会占用控件的大小，滚动条的ScrollBarPolicy默认值是Qt::ScrollBarAsNeeded，即需要它的时候才出现。如果我们改变控件大小时，滚动条会出现/消失，导致内容宽度变化这样的话用户体验就不是很好了。如图：


![image](https://user-images.githubusercontent.com/48672376/175806314-bfe27016-d7de-4d82-8fb2-d4eeb5e93b64.png)

      

如上图。左边是没有滚动条的，它可以最大的显示内容，右边出现了滚动条，导致内容显示的宽度变小了。悬浮滚动条的目的就是解决这个问题。再来一张悬浮滚动条效果图。



![image](https://user-images.githubusercontent.com/48672376/175806332-8f38393f-fea4-4157-8ff8-a5c1eaaf25cf.png)




 
 使用效果，如滚动滑动、拖动与一般滚动条一样。


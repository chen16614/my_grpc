#### 第二个实验

###### 模型

多个client和一个server

###### 操作

在不同的terminal里运行client程序，循环给server发送消息，每条消息和实验1结构一样但是server维护两个变量counter0与counter1，每个client受到消息后打印出收到的两个变量的值。

###### 结果

从client的角度看，每次受到两个变量的值应该是一样的，但是有出现差1的情况，这是因为server端多线程处理两个的client的请求，出现的问题，在服务器端加上线程安全的mutex，重新执行上述操作，每个client受到信息返回的值变得一样。
#### 第一个实验

###### 模型

一个server与一个client

###### 操作

client向server发送一条信息（包含一个index），server中有一个counter变量，server受到信息后执行`counter+=index`并返回counter的值，client打印出收到的counter的值
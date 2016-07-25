

#ifndef __CONFIG_H
#define __CONFIG_H


#define DEBUGECONTROLRC             1           //debug模式遥控控制

/***************************************   ↓ 操作手参数  ↓ **********************************************/
#define INFANTRY                    2           //1萨摩   2阿拉斯加   3哈士奇    4 金毛（原来叫边牧的，结果傻狗这厮抢了，还不告诉我）  5 狗蛋

#if INFANTRY == 1               //萨摩参数↓
    #define MAXWORKINGSPEED         850         //正常前进后退速度（最大900）
    #define MAXSHIFTSPEED           1200        //正常平移速度
    #define SNEAKSPEED              100         //潜行速度
    #define QESPINPARAM             27          //QE自旋系数（越大自旋越快，过大会发生底盘响应跟不上）
    #define FRICMOTORWORKINGSPEED   350         //摩擦轮工作速度(230)
    #define POKESTEPSPEED           -250        //拨弹电机步进速度（符号控制方向，不要动）
    #define POKESTEPMINTIMECRACK    265         //步进最小时间间隔（ms）
    #define MOUSESPINPARAM          16.0F       //鼠标自旋系数（越小自旋越快，过小会发生底盘响应跟不上）
    #define MOUSEPITCHPARAM         20.0F       //鼠标pitch控制系数（越小速度越快）
    #define POKESTRUCKDEALLINES     300         //拨弹电机卡弹后反转处理线数
    #define LOWSPEEDOVERRIDE        0.65F       //底盘低速为全速的多少倍（0-1）
    #define DEPOTABSPITCH           -120        //进补给站云台pitch编码器值（0为水平，-200 ~ 200） 
    #define CHASSISMAXPOWERRATE     0.82F       //底盘限制极限功率（80W）比例(例如此值为0.9，则实际限制功率为0.9*80=72W）
    #define AUTOSHOTTICKCRACK       400         //全自动射击时间间隔
    #define LOSTTARGETTICKAUTO      2000        //丢帧指定时间开始巡逻
    #define FULLAUTOCHASSISANGLE    60          //全自动模式底盘旋转单边角度范围
    #define FULLAUTOCHASSISSPEED    0.3F        //全自动模式底盘旋转速度
    
#elif INFANTRY == 2               //阿拉斯加参数↓

    #define FRICMOTORWORKINGSPEED   260         //摩擦轮工作速度(230)
    #define POKESTRUCKDEALLINES     300         //拨弹电机卡弹后反转处理线数
    #define CHASSISMAXPOWERRATE     0.82F       //底盘限制极限功率（80W）比例(例如此值为0.9，则实际限制功率为0.9*80=72W）
    #define POKESTEPSPEED           -250        //拨弹电机步进速度（符号控制方向，不要动）
    #define POKESTEPMINTIMECRACK    265         //步进最小时间间隔（ms）
//    #define MAXWORKINGSPEED         850         //正常前进后退速度（最大900）
//    #define MAXSHIFTSPEED           1200        //正常平移速度
//    #define SNEAKSPEED              100         //潜行速度
//    #define QESPINPARAM             27          //QE自旋系数（越大自旋越快，过大会发生底盘响应跟不上）
//    #define MOUSESPINPARAM          16.0F       //鼠标自旋系数（越小自旋越快，过小会发生底盘响应跟不上）
//    #define MOUSEPITCHPARAM         20.0F       //鼠标pitch控制系数（越小速度越快）
//    #define LOWSPEEDOVERRIDE        0.65F       //底盘低速为全速的多少倍（0-1）
//    #define DEPOTABSPITCH           -120        //进补给站云台pitch编码器值（0为水平，-200 ~ 200）  
//    #define AUTOSHOTTICKCRACK       400         //全自动射击时间间隔
//    #define LOSTTARGETTICKAUTO      2000        //丢帧指定时间开始巡逻
//    #define FULLAUTOCHASSISANGLE    60          //全自动模式底盘旋转单边角度范围
//    #define FULLAUTOCHASSISSPEED    0.3F        //全自动模式底盘旋转速度

#elif INFANTRY == 3               //哈士奇参数↓（射速已调节）

    #define MAXWORKINGSPEED         850         //正常前进后退速度（最大900）
    #define MAXSHIFTSPEED           1200        //正常平移速度
    #define SNEAKSPEED              100         //潜行速度
    #define QESPINPARAM             27          //QE自旋系数（越大自旋越快，过大会发生底盘响应跟不上）
    #define FRICMOTORWORKINGSPEED   285         //摩擦轮工作速度(230)
    #define POKESTEPSPEED           -250        //拨弹电机步进速度（符号控制方向，不要动）
    #define POKESTEPMINTIMECRACK    265         //步进最小时间间隔（ms）
    #define MOUSESPINPARAM          20.0F       //鼠标自旋系数（越小自旋越快，过小会发生底盘响应跟不上）
    #define MOUSEPITCHPARAM         15.0F       //鼠标pitch控制系数（越小速度越快）
    #define POKESTRUCKDEALLINES     300         //拨弹电机卡弹后反转处理线数
    #define LOWSPEEDOVERRIDE        0.65F       //底盘低速为全速的多少倍（0-1）
    #define DEPOTABSPITCH           -350        //进补给站云台pitch编码器值（0为水平，-200 ~ 200） 
    #define CHASSISMAXPOWERRATE     0.82F       //底盘限制极限功率（80W）比例 (例如此值为0.9，则实际限制功率为0.9*80=72W）
    #define AUTOSHOTTICKCRACK       400         //全自动射击时间间隔
    #define LOSTTARGETTICKAUTO      2000        //丢帧指定时间开始巡逻
    #define FULLAUTOCHASSISANGLE    60          //全自动模式底盘旋转单边角度范围
    #define FULLAUTOCHASSISSPEED    0.3F        //全自动模式底盘旋转速度

#elif INFANTRY == 4               //边牧（射速已调节）

    #define MAXWORKINGSPEED         850         //正常前进后退速度（最大900）
    #define MAXSHIFTSPEED           1200        //正常平移速度
    #define SNEAKSPEED              100         //潜行速度
    #define QESPINPARAM             27          //QE自旋系数（越大自旋越快，过大会发生底盘响应跟不上）
    #define FRICMOTORWORKINGSPEED   318         //摩擦轮工作速度(230)
    #define POKESTEPSPEED           -250        //拨弹电机步进速度（符号控制方向，不要动）
    #define POKESTEPMINTIMECRACK    265         //步进最小时间间隔（ms）
    #define MOUSESPINPARAM          10.0F       //鼠标自旋系数（越小自旋越快，过小会发生底盘响应跟不上）
    #define MOUSEPITCHPARAM         10.0F       //鼠标pitch控制系数（越小速度越快）
    #define POKESTRUCKDEALLINES     300         //拨弹电机卡弹后反转处理线数
    #define LOWSPEEDOVERRIDE        0.65F       //底盘低速为全速的多少倍（0-1）
    #define DEPOTABSPITCH           -120        //进补给站云台pitch编码器值（0为水平，-200 ~ 200） 
    #define CHASSISMAXPOWERRATE     0.82F       //底盘限制极限功率（80W）比例 (例如此值为0.9，则实际限制功率为0.9*80=72W）
    #define AUTOSHOTTICKCRACK       400         //全自动射击时间间隔
    #define LOSTTARGETTICKAUTO      2000        //丢帧指定时间开始巡逻
    #define FULLAUTOCHASSISANGLE    60          //全自动模式底盘旋转单边角度范围
    #define FULLAUTOCHASSISSPEED    0.3F        //全自动模式底盘旋转速度

#elif INFANTRY == 5               //狗蛋

    #define MAXWORKINGSPEED         850         //正常前进后退速度（最大900）
    #define MAXSHIFTSPEED           1200        //正常平移速度
    #define SNEAKSPEED              100         //潜行速度
    #define QESPINPARAM             27          //QE自旋系数（越大自旋越快，过大会发生底盘响应跟不上）
    #define FRICMOTORWORKINGSPEED   305         //摩擦轮工作速度(230)
    #define POKESTEPSPEED           -250        //拨弹电机步进速度（符号控制方向，不要动）
    #define POKESTEPMINTIMECRACK    300         //步进最小时间间隔（ms）
    #define MOUSESPINPARAM          20.0F       //鼠标自旋系数（越小自旋越快，过小会发生底盘响应跟不上）
    #define MOUSEPITCHPARAM         10.0F       //鼠标pitch控制系数（越小速度越快）
    #define POKESTRUCKDEALLINES     300         //拨弹电机卡弹后反转处理线数
    #define LOWSPEEDOVERRIDE        0.65F       //底盘低速为全速的多少倍（0-1）
    #define DEPOTABSPITCH           -120        //进补给站云台pitch编码器值（0为水平，-200 ~ 200） 
    #define CHASSISMAXPOWERRATE     0.82F       //底盘限制极限功率（80W）比例 (例如此值为0.9，则实际限制功率为0.9*80=72W）
    #define AUTOSHOTTICKCRACK       400         //全自动射击时间间隔
    #define LOSTTARGETTICKAUTO      2000        //丢帧指定时间开始巡逻
    #define FULLAUTOCHASSISANGLE    60          //全自动模式底盘旋转单边角度范围
    #define FULLAUTOCHASSISSPEED    0.3F        //全自动模式底盘旋转速度

#endif
/***************************************   ↑ 操作手参数  ↑ **********************************************/

#if INFANTRY == 1       //萨摩
    
    #define PITCHMOTORCURRENTPLUSDIR        1           //pitch轴云台电机电流方向为正时转动方向     1 顺时针       0 逆时针
    #define YAWMOTORCURRENTPLUSDIR          1           //yaw轴云台电机电流方向为正时转动方向       1 抬头         0 低头
    
#elif INFANTRY == 2     //阿拉斯加
    
    #define PITCHMOTORCURRENTPLUSDIR        1           //pitch轴云台电机电流方向为正时转动方向     1 顺时针       0 逆时针
    #define YAWMOTORCURRENTPLUSDIR          1           //yaw轴云台电机电流方向为正时转动方向       1 抬头         0 低头

#elif INFANTRY == 3     //哈士奇
    
    #define PITCHMOTORCURRENTPLUSDIR        1           //pitch轴云台电机电流方向为正时转动方向     1 顺时针       0 逆时针
    #define YAWMOTORCURRENTPLUSDIR          1           //yaw轴云台电机电流方向为正时转动方向       1 抬头         0 低头

#elif INFANTRY == 4     //金毛
    
    #define PITCHMOTORCURRENTPLUSDIR        1           //pitch轴云台电机电流方向为正时转动方向     1 顺时针       0 逆时针
    #define YAWMOTORCURRENTPLUSDIR          0           //yaw轴云台电机电流方向为正时转动方向       1 抬头         0 低头

#elif INFANTRY == 5     //狗蛋
    
    #define PITCHMOTORCURRENTPLUSDIR        1           //pitch轴云台电机电流方向为正时转动方向     1 顺时针       0 逆时针
    #define YAWMOTORCURRENTPLUSDIR          1           //yaw轴云台电机电流方向为正时转动方向       1 抬头         0 低头

#endif


#define CANPORT             1           //选择can端口
#define BELLBARKPeriod      100         //蜂鸣器序列时间长度（ms）
#define MONITORPERIOD       100         //监视器周期（ms）
#define GUNSpeed            23.5F       //枪子弹速度(m/s)
#define ACCofGravity        9.87F       //acceleration of gravity重力加速度

#endif



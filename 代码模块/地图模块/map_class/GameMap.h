#pragma once



#include ".\\Tiny_Engine\\T_Map.h"


class GameMap
{


	
	 int MAP_ROWS = 48;					//地图图快总行数
	 int MAP_COLS = 64;					//地图图快总列数
	 int MAP_BKG = 0;					//背景图快编号
	 int TILE_WIDTH = 16;				//图快宽
	 int FILE_HEIGHT = 16;				//图快高
	 int BARRIER[3072] ;	//地图障碍图层数据
	 int BACK[3072];	//地图障碍图层数据
	 static  const int  BarrierVetor[3072];
	 static  const int  BackVetor[3072];
	 static  const int  BarrierVetor2[3072];
	 static  const int  BackVetor2[3072];
	 static  const int  BarrierVetor3[3072];
	 static  const int  BackVetor3[3072];
	//定义要使用的类对象
	T_Map *barrier;//障碍图层地图对象
	T_Map *back;//背景图层地图对象


	//定义全局性的变量
	int wnd_width, wnd_height;	//游戏窗口宽高
	POINT mouse_pt;//当前鼠标位置
	int op;//操作类型（op=0键盘，反之鼠标）

	



	T_Graph bk;


public:
	virtual ~GameMap(void);
	GameMap();
	//定义功能函数
	void LoadMap(); //加载游戏地图场景
	void PaintMap(HDC hdc);//画出游戏地图
	T_Map* getBarrier();
	void setMap(int a);


};


#pragma once



#include ".\\Tiny_Engine\\T_Map.h"


class GameMap
{


	
	 int MAP_ROWS = 48;					//��ͼͼ��������
	 int MAP_COLS = 64;					//��ͼͼ��������
	 int MAP_BKG = 0;					//����ͼ����
	 int TILE_WIDTH = 16;				//ͼ���
	 int FILE_HEIGHT = 16;				//ͼ���
	 int BARRIER[3072] ;	//��ͼ�ϰ�ͼ������
	 int BACK[3072];	//��ͼ�ϰ�ͼ������
	 static  const int  BarrierVetor[3072];
	 static  const int  BackVetor[3072];
	 static  const int  BarrierVetor2[3072];
	 static  const int  BackVetor2[3072];
	 static  const int  BarrierVetor3[3072];
	 static  const int  BackVetor3[3072];
	//����Ҫʹ�õ������
	T_Map *barrier;//�ϰ�ͼ���ͼ����
	T_Map *back;//����ͼ���ͼ����


	//����ȫ���Եı���
	int wnd_width, wnd_height;	//��Ϸ���ڿ��
	POINT mouse_pt;//��ǰ���λ��
	int op;//�������ͣ�op=0���̣���֮��꣩

	



	T_Graph bk;


public:
	virtual ~GameMap(void);
	GameMap();
	//���幦�ܺ���
	void LoadMap(); //������Ϸ��ͼ����
	void PaintMap(HDC hdc);//������Ϸ��ͼ
	T_Map* getBarrier();
	void setMap(int a);


};


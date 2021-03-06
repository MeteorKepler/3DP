#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_dp.h"
#include "objmodel.h"

class DP : public QMainWindow
{
	Q_OBJECT

public:
	DP(QWidget *parent = Q_NULLPTR);

private:
	Ui::DPClass ui;
	ObjModel *obj_model;

public slots:
	void on_clicked_actionOpen();
	void on_clicked_actionColor();
	void on_clicked_actionNeighborPoP();
	void on_clicked_actionNeighborFoP();
	void on_clicked_actionNeighborFoF();
	void on_clicked_actionRegionFromPoints();
	void on_clicked_actionNormalFromFace();
	void on_clicked_actionAddNoise();
	void on_clicked_actionDenoising();
	void on_clicked_actionMSE();
	void on_clicked_actionClear();

	void on_checked_wiredCheckBox(bool);
	void on_checked_axisCheckBox(bool);
	void on_checked_original(bool);
	void on_checked_noiseObj(bool);
	void on_checked_denoiseObj(bool);
	void on_checked_mse(bool);
};

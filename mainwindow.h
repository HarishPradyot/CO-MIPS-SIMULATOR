#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTableWidget>
#include "about_help.h"


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT
public:
    bool isTimeLineLocked;
    static MainWindow* getInstance();
    void setNewTable(int clockCycle, int insCount);
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionReinitialize_and_Load_File_triggered();
    void on_actionQuit_triggered();
    void on_actionInitialize_triggered();

    void on_actionSee_LabelMap_triggered();

    void on_actionSee_DataMap_triggered();

    void on_actionClear_Registers_triggered();

    void on_actionRun_triggered();

    void on_actionRun_Step_By_Step_triggered();

    void on_actionCustom_Function_triggered();

    void on_actionHelp_triggered();

    void on_actionEnable_Forwarding_triggered();

private:
    int tableIndex;
    Ui::MainWindow *ui;
    static bool ValidCodePresent;
    About_Help* helpwindow;
    QTableWidget** timeline;

//methods
private:
    void refreshAllPanels();
    void initialize();
    void newTable(int clockCycle, int insCount);
};
#endif // MAINWINDOW_H

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Lux
{
	class EditorClient;
}

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

	void setEditorClient(Lux::EditorClient& client);
	class SceneView* getSceneView();

private slots:
    void on_actionLog_triggered();

    void on_actionOpen_triggered();

    void on_actionSave_As_triggered();

    void on_actionCreate_triggered();

    void on_actionProperties_triggered();

    void on_actionE_xit_triggered();

private:
    Ui::MainWindow *ui;
	Lux::EditorClient* m_client;
	class LogWidget* m_log;
	class PropertyView* m_property_view;
};

#endif // MAINWINDOW_H

#include <QtWidgets>

class MainWindow : public QMainWindow {
    public:
	   MainWindow() ;
	private:
	   QPushButton *startButton;
};

MainWindow::MainWindow(){
    startButton = new QPushButton("start", this);
    startButton->setGeometry(5, 10, 70, 30);
    
}
int main(int argc, char *argv[]) {
	QApplication app(argc, argv);
	MainWindow mainWin;
	mainWin.show();
	return app.exec();
}

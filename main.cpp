#include <QApplication>
#include <openglwindow.h>
#include <guiwindow.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

//    OpenGLWindow *window = new OpenGLWindow;
//    window->show();

    GuiWindow g;
    g.show();

    return a.exec();
}

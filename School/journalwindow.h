#ifndef JOURNALWINDOW_H
#define JOURNALWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class JournalWindow; }
QT_END_NAMESPACE

class JournalWindow : public QMainWindow
{
    Q_OBJECT

public:
    JournalWindow(QWidget *parent = nullptr);
    ~JournalWindow();

private:
    Ui::JournalWindow *ui;
};
#endif // JOURNALWINDOW_H

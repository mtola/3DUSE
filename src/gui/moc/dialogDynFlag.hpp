#ifndef DIALOGDYNFLAG_HPP
#define DIALOGDYNFLAG_HPP
////////////////////////////////////////////////////////////////////////////////
#include <QDialog>
////////////////////////////////////////////////////////////////////////////////
namespace Ui {
class DialogDynFlag;
}
////////////////////////////////////////////////////////////////////////////////
class DialogDynFlag : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDynFlag(QWidget *parent = 0);
    ~DialogDynFlag();

private:
    Ui::DialogDynFlag *ui;
};
////////////////////////////////////////////////////////////////////////////////
#endif // DIALOGDYNFLAG_HPP

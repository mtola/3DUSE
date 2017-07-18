// Copyright University of Lyon, 2012 - 2017
// Distributed under the GNU Lesser General Public License Version 2.1 (LGPLv2)
// (Refer to accompanying file LICENSE.md or copy at
//  https://www.gnu.org/licenses/old-licenses/lgpl-2.1.html )

////////////////////////////////////////////////////////////////////////////////
#ifndef DIALOGADDBUILDING_HPP
#define DIALOGADDBUILDING_HPP
////////////////////////////////////////////////////////////////////////////////
#include <QDialog>
////////////////////////////////////////////////////////////////////////////////
namespace Ui {
    class DialogAddBuilding;
}
////////////////////////////////////////////////////////////////////////////////
class DialogAddBuilding : public QDialog
{
    Q_OBJECT

public:
    explicit DialogAddBuilding(QWidget *parent = 0);
    ~DialogAddBuilding();

private:
    Ui::DialogAddBuilding *ui;
};
////////////////////////////////////////////////////////////////////////////////
#endif // DIALOGADDBUILDING_HPP

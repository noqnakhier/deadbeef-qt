#ifndef DBFILEDIALOG_H
#define DBFILEDIALOG_H

#include <QFileDialog>
#include <QStringList>


class DBFileDialog : public QFileDialog {
    Q_OBJECT
public:
    DBFileDialog(QWidget *parent,
                 const QString &caption = QString(),
                 const QStringList &filters = QStringList(),
                 FileMode mode = QFileDialog::AnyFile,
                 QFileDialog::Options options = QFileDialog::DontUseNativeDialog);

    QStringList execDialog();
};

#endif // DBFILEDIALOG_H

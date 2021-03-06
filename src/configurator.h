#ifndef SEAFILE_CLIENT_CONFIGURATOR_H
#define SEAFILE_CLIENT_CONFIGURATOR_H

#include <QObject>
#include <QString>

/**
 * Handles ccnet/seafile configuration initialize
 */
class Configurator : public QObject {
    Q_OBJECT

public:
    Configurator();
    void checkInit();

    const QString& ccnetDir() const { return ccnet_dir_; }
    const QString& seafileDir() const { return seafile_dir_; }
    const QString& worktreeDir() const { return worktree_; }

private:
    Q_DISABLE_COPY(Configurator)

    bool needInitConfig();
    void initConfig();
    void validateExistingConfig();
    int readSeafileIni(QString *content);

    void initCcnet();
    void initSeafile();

    QString ccnet_dir_;
    QString seafile_dir_;
    QString worktree_;
};

#endif // SEAFILE_CLIENT_CONFIGURATOR_H

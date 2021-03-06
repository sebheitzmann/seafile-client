#ifndef SEAFILE_CLIENT_SETTINGS_MANAGER_H
#define SEAFILE_CLIENT_SETTINGS_MANAGER_H

#include <QObject>

/**
 * Settings Manager handles seafile client user settings & preferences
 */
class SettingsManager : public QObject {
    Q_OBJECT

public:
    SettingsManager();

    void setAutoSync(bool);

    bool autoSync() { return auto_sync_; }

private:
    Q_DISABLE_COPY(SettingsManager)

    bool auto_sync_;
};

#endif // SEAFILE_CLIENT_SETTINGS_MANAGER_H

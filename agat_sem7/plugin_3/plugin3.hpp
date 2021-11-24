#ifndef PLUGIN3_HPP
#define PLUGIN3_HPP

#include <QtPlugin>
#include <plugininterface.hpp>

class Plugin3
    : public QObject
    , PluginInterface
{

    Q_OBJECT
    Q_PLUGIN_METADATA(IID PluginInterface_iid)
    Q_INTERFACES(PluginInterface)

  public:
    Plugin3();

  public slots:
    void menuSelected();

    // PluginInterface interface
  public:
    QMenu* setup(QFrame* dataInputFrame, MapWidget* map) override;
    void   tick() override;
};

#endif // PLUGIN2_HPP

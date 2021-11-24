#ifndef PLUGIN1_HPP
#define PLUGIN1_HPP

#include <QtPlugin>
#include <plugininterface.hpp>
#include "action.h"
class Plugin1
    :public QObject
    , PluginInterface
{

    Q_OBJECT
    Q_PLUGIN_METADATA(IID PluginInterface_iid)
    Q_INTERFACES(PluginInterface)

  public:
    Plugin1();

  public slots:
    void menuSelected();

    // PluginInterface interface
  public:
    QMenu* setup(QFrame* dataInputFrame, MapWidget* map) override;
    void   tick() override;
  private:
    QFrame *DiF;
    MapWidget* m;
    int position = 0;
};

#endif // PLUGIN1_HPP

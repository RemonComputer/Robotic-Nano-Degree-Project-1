#include <gazebo/gazebo.hh>

namespace gazebo
{
  class MyPlugin : public WorldPlugin
  {
    public: MyPlugin() : WorldPlugin()
            {
              printf("Welcome to Remon's world!\n");
            }

    public: void Load(physics::WorldPtr _world, sdf::ElementPtr _sdf)
            {
            }
  };
  GZ_REGISTER_WORLD_PLUGIN(MyPlugin)
}

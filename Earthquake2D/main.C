/*
  Cellular automaton: Earthquake 2D.
  
  Author: Alejandro Mujica (aledrums@gmail.com)
*/

# include <QApplication>
# include <automatonpanel.H>

int main(int argc, char *argv[])
{
  QApplication app(argc, argv);

  AutomatonPanel v;
  v.show();

  return app.exec();
}


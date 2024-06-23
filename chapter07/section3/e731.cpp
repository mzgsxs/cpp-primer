

class X;
class Y;

class X {
  public:
    Y * py;
};

class Y {
  public:
    X x;
};

int main (){
  X x;
  Y y;
  x.py = &y;
  y.x = x;
}

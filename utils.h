#if !defined(MC_BUILD)
#define MC_BUILD
#endif

// The root of everything.
class Object {
 public:
  Object();
  virtual ~Object();

  int GetObjectIdentifier();

 private:
  int identifier_;
};

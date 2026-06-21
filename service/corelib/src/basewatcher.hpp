#pragma once

namespace synqueen {

class BaseWatcher {
public:
  virtual ~BaseWatcher() = default;

  virtual void watch() = 0;

protected:
  void requestFullSync() {}

  void requestPull() {}
};

} // namespace synqueen

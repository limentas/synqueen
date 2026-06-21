#pragma once

namespace synqueen {

struct Settings {};

class ISettingsProvider {
public:
  virtual ~ISettingsProvider() = default;

  virtual Settings loadSettings() = 0;
};

} // namespace synqueen

#pragma once

namespace synqueen {

class ICloudUploader {
public:
  virtual ~ICloudUploader() = default;

  // virtual bool uploadFile(const std::string& file, const std::string&
  // remoteFolder) = 0;

  // virtual void listFiles(const std::string& remoteFolder) = 0;
};

} // namespace synqueen
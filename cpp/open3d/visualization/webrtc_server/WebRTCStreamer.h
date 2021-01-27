#pragma once

#include <string>

namespace open3d {
namespace visualization {
namespace webrtc_server {

class WebRTCServer {
public:
    WebRTCServer(const std::string& http_address = "localhost:8888",
                 const std::string& web_root =
                         "/home/yixing/repo/Open3D/cpp/open3d/visualization/"
                         "webrtc_server/html")
        : http_address_(http_address), web_root_(web_root) {}

    void Run();

private:
    std::string http_address_;
    std::string web_root_;
};

}  // namespace webrtc_server
}  // namespace visualization
}  // namespace open3d

#pragma once

#include <chrono>
#include <string>

template <typename Prec = std::chrono::milliseconds>
class StopWatch final {
    using time_point = std::chrono::time_point<std::chrono::system_clock>;

public:
    StopWatch() { Start(); }

    void Start() { m_startTime = std::chrono::system_clock::now(); }

    std::string GetElapsedTime() {
        const auto nowTime = std::chrono::system_clock::now();
        return std::to_string(
            std::chrono::duration_cast<Prec>(nowTime - m_startTime).count());
    }

private:
    time_point m_startTime;
};

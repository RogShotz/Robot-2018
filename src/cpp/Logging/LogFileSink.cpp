// Copyright (c) 2014-2018 FRC Team 3512. All Rights Reserved.

#include "Logging/LogFileSink.hpp"

LogFileSink::LogFileSink(std::string filename) {
    m_logfile.open(filename.c_str());
}

void LogFileSink::Log(LogEvent event) {
    m_logfile << event.ToFormattedString();
    m_logfile.flush();
}

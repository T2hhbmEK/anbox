/*
 * Copyright (C) 2016 Simon Fels <morphis@gravedo.de>
 *
 * This program is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 3, as published
 * by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranties of
 * MERCHANTABILITY, SATISFACTORY QUALITY, or FITNESS FOR A PARTICULAR
 * PURPOSE.  See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef ANBOX_SUPPORT_SENSORS_MESSAGE_PROCESSOR_H_
#define ANBOX_SUPPORT_SENSORS_MESSAGE_PROCESSOR_H_

#include "anbox/support/qemud_message_processor.h"

namespace anbox {
namespace support {
class SensorsMessageProcessor : public QemudMessageProcessor {
public:
    SensorsMessageProcessor(const std::shared_ptr<network::SocketMessenger> &messenger);
    ~SensorsMessageProcessor();

protected:
    void handle_command(const std::string &command) override;

private:
    void list_sensors();
};
} // namespace graphics
} // namespace anbox

#endif
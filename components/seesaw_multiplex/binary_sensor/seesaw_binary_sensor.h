#pragma once

#include "esphome/core/component.h"
#include "esphome/components/binary_sensor/binary_sensor.h"
#include "../seesaw.h"

namespace esphome {
namespace seesaw {

class SeesawBinarySensor : public binary_sensor::BinarySensor, public Component {
 public:
  void setup() override;
  void dump_config() override;
  void loop() override;
  void set_parent(Seesaw *parent) { this->parent_ = parent; }
  void set_pin(int pin) { this->pin_ = pin; }
  void set_i2c_id(int i2c_id) { this->i2c_id_ = i2c_id; }

 protected:
  Seesaw *parent_;
  int pin_;
  int i2c_id_;
};

}  // namespace seesaw
}  // namespace esphome

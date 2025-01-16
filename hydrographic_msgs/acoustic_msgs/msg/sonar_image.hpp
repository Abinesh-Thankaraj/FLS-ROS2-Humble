// sonar_image.hpp
#ifndef ACOUSTIC_MSGS__MSG__SONAR_IMAGE_HPP_
#define ACOUSTIC_MSGS__MSG__SONAR_IMAGE_HPP_

#include <vector>
#include "std_msgs/msg/header.hpp"

namespace acoustic_msgs
{
namespace msg
{

struct SonarImage
{
  // Header for the message (timestamp and frame ID)
  std_msgs::msg::Header header;

  // Center frequency of sonar in Hz (0 if unavailable/unknown)
  float frequency;

  // Speed of sound (m/s) used to calculate ranges (0 if unavailable/unknown)
  float sound_speed;

  // Beam width in the azimuth direction (radians)
  float azimuth_beamwidth;

  // Beam width in the elevation direction (radians)
  float elevation_beamwidth;

  // Azimuth for each beam, in radians
  std::vector<float> azimuth_angles;

  // Elevation for each beam, in radians (empty if all beams have elevation of 0)
  std::vector<float> elevation_angles;

  // Center of each range bin in meters
  std::vector<float> ranges;

  // True if data is big endian
  bool is_bigendian;

  // Size of each datum in bytes
  uint8_t data_size;

  // Intensity data in device-specific units
  std::vector<uint8_t> intensities;
};

}  // namespace msg
}  // namespace acoustic_msgs

#endif  // ACOUSTIC_MSGS__MSG__SONAR_IMAGE_HPP_


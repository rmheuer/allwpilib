// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

// THIS FILE WAS AUTO-GENERATED BY ./wpilibc/generate_pwm_motor_controllers.py. DO NOT MODIFY

#include "frc/motorcontrol/Koors40.h"

#include <hal/FRCUsageReporting.h>

using namespace frc;

Koors40::Koors40(int channel) : PWMMotorController("Koors40", channel) {
  m_pwm.SetBounds(2.004_ms, 1.52_ms, 1.5_ms, 1.48_ms, 0.997_ms);
  m_pwm.SetPeriodMultiplier(PWM::kPeriodMultiplier_4X);
  m_pwm.SetSpeed(0.0);
  m_pwm.SetZeroLatch();

  HAL_Report(HALUsageReporting::kResourceType_Koors40, GetChannel() + 1);
}

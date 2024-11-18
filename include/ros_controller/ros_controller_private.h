/*
 * ros_controller_private.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "ros_controller".
 *
 * Model version              : 1.8
 * Simulink Coder version : 24.1 (R2024a) 19-Nov-2023
 * C++ source code generated on : Mon Nov 18 14:34:32 2024
 *
 * Target selection: ert.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Generic->Unspecified (assume 32-bit Generic)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef ros_controller_private_h_
#define ros_controller_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"
#include "ros_controller.h"
#include "ros_controller_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"

extern void ros_contr_EnabledSubsystem_Init(B_EnabledSubsystem_ros_contro_T
  *localB, P_EnabledSubsystem_ros_contro_T *localP);
extern void ros_controller_EnabledSubsystem(boolean_T rtu_Enable, const
  SL_Bus_ros_controller_std_msgs_Float64 *rtu_In1,
  B_EnabledSubsystem_ros_contro_T *localB);

#endif                                 /* ros_controller_private_h_ */

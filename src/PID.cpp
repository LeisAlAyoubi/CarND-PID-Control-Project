#include "PID.h"
#include <iostream>

/**
 * TODO: Complete the PID class. You may add any additional desired functions.
 */

PID::PID() {}

PID::~PID() {}

void PID::Init(double Kp_, double Ki_, double Kd_, double prev_cte_, double int_cte_) {
  /**
   * TODO: Initialize PID coefficients (and errors, if needed)
   */
  Kp = Kp_;
  Ki = Ki_;
  Kd = Kd_;
  prev_cte = prev_cte_;
  int_cte = int_cte_;

}

void PID::UpdateError(double cte_) {
  /**
   * TODO: Update PID errors based on cte.
   */
  cte = cte_;
  diff_cte = cte - prev_cte;
  prev_cte = cte_;
  int_cte += cte_;


}

double PID::TotalError() {
  /**
   * TODO: Calculate and return the total error
   */

  return -Kp * cte - Kd * diff_cte - Ki * int_cte;  // TODO: Add your total error calc here!
}
#ifndef PID_H
#define PID_H

class PID {
 public:
  /**
   * Constructor
   */
  PID();

  /**
   * Destructor.
   */
  virtual ~PID();

  /**
   * Initialize PID.
   * @param (Kp_, Ki_, Kd_) The initial PID coefficients
   */
  void Init(double Kp_, double Ki_, double Kd_, double prev_cte_, double int_cte_);

  /**
   * Update the PID error variables given cross track error.
   * @param cte The current cross track error
   */
  void UpdateError(double cte_);

  /**
   * Calculate the total PID error.
   * @output The total PID error
   */
  double TotalError();

 private:
  /**
   * PID Errors
   */
  double p_error;
  double i_error;
  double d_error;
  
  double cte;
  double diff_cte;
  double int_cte;
  double prev_cte;

  /**
   * PID Coefficients
   */ 
  double Kp;
  double Ki;
  double Kd;
};

#endif  // PID_H
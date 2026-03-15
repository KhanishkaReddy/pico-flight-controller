#ifndef IMU_H
#define IMU_H

// EKF State Variables
extern float state[6];  // [px, py, pz, vx, vy, vz]
ext em float covariance[6][6];

// EKF Functions
void ekf_init();
void ekf_predict(float dt);
void ekf_update(float accel[3], float gyro[3]);

#endif // IMU_H

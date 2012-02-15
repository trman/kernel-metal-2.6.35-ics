#ifndef _ISL29018_H_
#define _ISL29018_H_

#define ISL29018_DRIVER_NAME "isl29018"

#define  POWER_DOWN   0
#define  ALS_ONCE  1
#define  IR_ONCE  2
#define  PROXIMITY_ONCE  3
#define  ALS_CONTINUOUS  4
#define  IR_CONTINUOUS  5
#define  PROXIMITY_CONTINUOUS  6

#define ISL29018_IOC_MAGIC              'I'
#define PROXIMITY_SENSOR_IOCTL_ENABLE	        _IOW(ISL29018_IOC_MAGIC, 1, int *)
#define PROXIMITY_SENSOR_IOCTL_GET_ENABLE	_IOR(ISL29018_IOC_MAGIC, 2, int *)
#define LIGHT_SENSOR_IOCTL_ENABLE		_IOW(ISL29018_IOC_MAGIC, 3, int *)
#define LIGHT_SENSOR_IOCTL_GET_ENABLE	        _IOR(ISL29018_IOC_MAGIC, 4, int *)

#define ISL29018_IOC_MAXNR              5

#endif  // _ISL29018_H_

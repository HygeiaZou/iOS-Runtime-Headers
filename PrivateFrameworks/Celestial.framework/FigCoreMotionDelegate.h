/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@class CMMotionManager;

@interface FigCoreMotionDelegate : NSObject  {
    struct _opaque_pthread_mutex_t { 
        long __sig; 
        BOOL __opaque[40]; 
    } ringMutex;
    CMMotionManager *motionManager;
    BOOL manageFusedMotion;
    BOOL manageAccel;
    BOOL manageGravity;
    int accelRingIndex;
    float accelRingX[128];
    float accelRingY[128];
    float accelRingZ[128];
    double accelRingTime[128];
    int fusedRingIndex;
    double fusedRingTime[128];
    BOOL fusedRingSync[128];
    struct { 
        float x; 
        float y; 
        float z; 
    } fusedRingAccel[128];
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    } fusedRingQuaternion[128];
    struct { 
        float x; 
        float y; 
        float z; 
    } fusedRingPosition[128];
    BOOL copyingAllData;
    double dLatestFusedMotionCopied;
    double dLatestTimestamp;
    double dGyroUpdateInterval;
    double timestampLatency;
    BOOL gettingAttitudeChange;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    } previousQuaternion;
    struct { 
        double w; 
        double x; 
        double y; 
        double z; 
    } currentQuaternion;
    BOOL computingPosition;
    struct { 
        double timestamp; 
        float x; 
        float y; 
        float z; 
    } position;
    struct { 
        double timestamp; 
        float x; 
        float y; 
        float z; 
    } velocity;
}


- (id)init;
- (void)dealloc;
- (void)getPosition:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;
- (BOOL)managingFusedMotion;
- (BOOL)managingAccel;
- (id)initWithAccelerometer:(BOOL)arg1 gravityZ:(BOOL)arg2 fusedMotion:(BOOL)arg3 accelUpdateInterval:(float)arg4 fusedMotionUpdateInterval:(float)arg5;
- (void)didUpdatePositionWithAcceleration:(struct { float x1; float x2; float x3; }*)arg1 forTimeStamp:(double)arg2;
- (void)didUpdateVelocityWithAcceleration:(struct { float x1; float x2; float x3; }*)arg1 forTimeStamp:(double)arg2;
- (void)didUpdatePositionWithTimeStamp:(double)arg1;
- (void)getCurrentDeltaQuaternion:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)didUpdateFusedMotionWithDeviceMotion:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; double x_1_1_4; } x1; struct { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; struct { float x_3_1_1; float x_3_1_2; float x_3_1_3; } x3; struct { float x_4_1_1; float x_4_1_2; float x_4_1_3; } x4; int x5; })arg1 time:(double)arg2 ifsync:(BOOL)arg3;
- (BOOL)managingGravity;
- (void)didUpdateGravity:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (void)didUpdateAcceleration:(struct { float x1; float x2; float x3; })arg1 time:(double)arg2;
- (void)updateDeviceCallback:(BOOL)arg1 fusedMotionUpdateInterval:(float)arg2;
- (void)updateGyroInterval:(float)arg1;
- (BOOL)isCopyingAllData;
- (id)copyAllFusedMotionData;
- (id)copyNewFusedMotionData;
- (void)getGravityZ:(float*)arg1 forTimeStamp:(double)arg2;
- (void)updateCurrentQuaternionForTimeStamp:(double)arg1;
- (void)getCurrentDeltaAttitude:(double*)arg1 :(double*)arg2 :(double*)arg3;
- (void)getCurrentAttitude:(double*)arg1 :(double*)arg2 :(double*)arg3;
- (void)getFusedVector:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;
- (void)updateCurrentQuaternionForTimeStamps:(double)arg1 withEnd:(double)arg2;
- (void)getCurrentQuaternion:(struct { double x1; double x2; double x3; double x4; }*)arg1;
- (void)updateCurrentQuaternionForTimeStamps:(double)arg1 withSynced:(double)arg2;
- (void)getVector:(float*)arg1 :(float*)arg2 :(float*)arg3 forTimeStamp:(double)arg4;

@end
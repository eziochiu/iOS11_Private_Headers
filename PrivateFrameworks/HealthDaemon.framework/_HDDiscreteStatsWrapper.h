/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDDiscreteStatsWrapper : NSObject {
    struct { 
        double avg; 
        double max; 
        double min; 
        unsigned long long count; 
    }  stats;
}

- (id)description;
- (void)incorporateStats:(const struct { double x1; double x2; double x3; unsigned long long x4; }*)arg1;
- (id)initWithStats:(const struct { double x1; double x2; double x3; unsigned long long x4; }*)arg1;

@end
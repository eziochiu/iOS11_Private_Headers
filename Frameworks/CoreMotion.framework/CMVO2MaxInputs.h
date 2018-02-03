/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMVO2MaxInputs : NSObject <NSCopying, NSSecureCoding> {
    double  fCadence;
    double  fGrade;
    long long  fGradeType;
    bool  fHasGPS;
    bool  fHasStrideCal;
    double  fHeartRate;
    double  fHeartRateConfidence;
    long long  fMetSource;
    double  fMets;
    double  fPace;
    unsigned long long  fRecordId;
    NSDate * fStartDate;
    long long  fWorkoutType;
}

@property (nonatomic, readonly) double cadence;
@property (nonatomic, readonly) double grade;
@property (nonatomic, readonly) long long gradeType;
@property (nonatomic, readonly) bool hasGPS;
@property (nonatomic, readonly) bool hasStrideCal;
@property (nonatomic, readonly) double heartRate;
@property (nonatomic, readonly) double heartRateConfidence;
@property (nonatomic, readonly) long long metSource;
@property (nonatomic, readonly) double mets;
@property (nonatomic, readonly) double pace;
@property (nonatomic, readonly) unsigned long long recordId;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic, readonly) long long workoutType;

+ (struct VO2MaxInput { unsigned long long x1; unsigned char x2[16]; float x3; double x4; float x5; float x6; int x7; double x8; bool x9; bool x10; int x11; long long x12; double x13; double x14; bool x15; })VO2MaxInputFromCMVO2MaxInputs:(id)arg1;
+ (bool)supportsSecureCoding;

- (double)cadence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)grade;
- (long long)gradeType;
- (bool)hasGPS;
- (bool)hasStrideCal;
- (double)heartRate;
- (double)heartRateConfidence;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordId:(unsigned long long)arg1 startDate:(id)arg2 mets:(double)arg3 metSource:(long long)arg4 heartRate:(double)arg5 heartRateConfidence:(double)arg6 grade:(double)arg7 gradeType:(long long)arg8 cadence:(double)arg9 pace:(double)arg10 hasGPS:(bool)arg11 hasStrideCal:(bool)arg12 workoutType:(long long)arg13;
- (id)initWithSample:(struct VO2MaxInput { unsigned long long x1; unsigned char x2[16]; float x3; double x4; float x5; float x6; int x7; double x8; bool x9; bool x10; int x11; long long x12; double x13; double x14; bool x15; })arg1;
- (long long)metSource;
- (double)mets;
- (double)pace;
- (unsigned long long)recordId;
- (id)startDate;
- (long long)workoutType;

@end
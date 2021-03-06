/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CrashReporterSupport.framework/CrashReporterSupport
 */

@interface LogCounterObject : NSObject {
    unsigned long long  _count;
}

@property (nonatomic) unsigned long long count;

+ (id)counter;

- (unsigned long long)count;
- (id)description;
- (id)init;
- (void)setCount:(unsigned long long)arg1;

@end

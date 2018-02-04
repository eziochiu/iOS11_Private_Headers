/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriTasks.framework/SiriTasks
 */

@interface STGenericIntentLocation : NSObject <NSCoding> {
    bool  _isLatLong;
    double  _latitude;
    double  _longitude;
    NSString * _name;
}

@property (nonatomic) bool isLatLong;
@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic, copy) NSString *name;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 latitude:(double)arg2 longitude:(double)arg3;
- (bool)isLatLong;
- (double)latitude;
- (double)longitude;
- (id)name;
- (void)setIsLatLong:(bool)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLongitude:(double)arg1;
- (void)setName:(id)arg1;

@end
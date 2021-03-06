/* made by EzioChiu
   Image: /System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNObservation : NSObject <NSCopying, NSSecureCoding> {
    float  _confidence;
    NSUUID * _uuid;
}

@property (nonatomic) float confidence;
@property (setter=setUUID:, nonatomic, retain) NSUUID *uuid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setConfidence:(float)arg1;
- (void)setUUID:(id)arg1;
- (id)uuid;

@end

/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKServerFormattedStringParameters : NSObject <NSCoding, NSCopying> {
    long long  _instructionsDistanceDetailLevel;
    NSDictionary * _variableOverides;
}

@property (nonatomic, readonly) long long instructionsDistanceDetailLevel;
@property (nonatomic, readonly, copy) NSDictionary *variableOverides;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithInstructionsDistanceDetailLevel:(long long)arg1 variableOverrides:(id)arg2;
- (long long)instructionsDistanceDetailLevel;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToServerFormattedStringParameters:(id)arg1;
- (id)variableOverides;

@end

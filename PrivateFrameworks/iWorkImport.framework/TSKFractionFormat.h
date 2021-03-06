/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKFractionFormat : TSKFormat <NSCopying> {
    int  _fractionAccuracy;
}

@property (nonatomic, readonly) int fractionAccuracy;

- (id)asFractionFormat;
- (int)fractionAccuracy;
- (unsigned long long)hash;
- (id)initWithFormatType:(int)arg1;
- (id)initWithFractionAccuracy:(int)arg1;
- (bool)isEqual:(id)arg1;
- (id)stringFromDouble:(double)arg1 locale:(id)arg2;

@end

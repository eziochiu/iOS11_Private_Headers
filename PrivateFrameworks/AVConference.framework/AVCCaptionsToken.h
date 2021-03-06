/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface AVCCaptionsToken : NSObject {
    double  _confidence;
    bool  _hasSpaceAfter;
    NSString * _text;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) bool hasSpaceAfter;
@property (nonatomic, readonly) NSString *text;

- (double)confidence;
- (void)dealloc;
- (id)description;
- (bool)hasSpaceAfter;
- (id)initWithText:(id)arg1 confidence:(double)arg2 spaceAfter:(bool)arg3;
- (id)text;

@end

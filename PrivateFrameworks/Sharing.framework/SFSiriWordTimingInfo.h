/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
 */

@interface SFSiriWordTimingInfo : NSObject {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRange;
    double  _timeOffset;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;
@property (nonatomic) double timeOffset;

+ (id)serializableArrayWithTimingInfoArray:(id)arg1;
+ (id)timingInfoArrayWithSerializableArray:(id)arg1;

- (id)dictionary;
- (id)initWithDictionary:(id)arg1;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTimeOffset:(double)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;
- (double)timeOffset;

@end

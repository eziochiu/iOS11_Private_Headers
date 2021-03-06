/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

@interface SUGradientColorStop : NSObject <NSCoding> {
    double  _a;
    double  _b;
    double  _g;
    double  _offset;
    double  _r;
    struct CGColor { } * _rawColor;
}

@property (nonatomic, readonly) double offset;

- (long long)compare:(id)arg1;
- (struct CGColor { }*)copyCGColor;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithColor:(struct CGColor { }*)arg1 offset:(double)arg2;
- (double)offset;

@end

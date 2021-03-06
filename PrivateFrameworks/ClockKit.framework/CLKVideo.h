/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
 */

@interface CLKVideo : NSObject <NSCopying> {
    NSString * _name;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSURL *url;

+ (id)_videoNamed:(id)arg1 bundle:(id)arg2 modifier:(id)arg3;
+ (id)videoNamed:(id)arg1;
+ (id)videoNamed:(id)arg1 bundle:(id)arg2;
+ (id)videoWithName:(id)arg1 url:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)initWithName:(id)arg1 url:(id)arg2;
- (id)name;
- (id)url;

@end

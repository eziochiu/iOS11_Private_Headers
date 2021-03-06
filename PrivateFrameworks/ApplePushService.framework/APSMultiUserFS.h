/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSMultiUserFS : NSObject {
    bool  _isMultiUser;
    NSString * _systemPathCache;
}

@property (readonly) bool isMultiUser;

+ (id)sharedInstance;

- (id)initWithIsMultiUserMode:(bool)arg1;
- (bool)isMultiUser;
- (id)systemPath;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PencilKit.framework/PencilKit
 */

@interface PKGLUtility : NSObject

+ (bool)canUseOpenGL;
+ (void)initialize;
+ (void)postGLActiveNotification;
+ (void)postGLInactiveNotification;

@end

/* made by EzioChiu.
 */

@protocol _HMMediaProfileDelegate <NSObject>

@required

- (void)mediaProfile:(_HMMediaProfile *)arg1 didUpdateMediaSession:(HMMediaSession *)arg2;
- (void)mediaProfile:(_HMMediaProfile *)arg1 didUpdateRootGroup:(_HMAccessorySettingGroup *)arg2;

@end

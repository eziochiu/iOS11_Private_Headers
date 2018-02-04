/* made by EzioChiu.
 */

@protocol SXVolumeObserver <NSObject>

@optional

- (void)muteStateChanged:(bool)arg1;
- (void)volumeLevelChanged:(double)arg1;

@end

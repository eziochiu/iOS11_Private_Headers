/* made by EzioChiu.
 */

@protocol MPCPlayerPlaybackRateCommand <MPCPlayerCommand>

@required

- (MPCPlayerCommandRequest *)setPlaybackRate:(float)arg1;
- (NSArray *)supportedPlaybackRates;

@end

/* made by EzioChiu.
 */

@protocol EARPSRAudioProcessorDelegate <NSObject>

@required

- (void)psrAudioProcessor:(EARPSRAudioProcessor *)arg1 hasResult:(NSData *)arg2 numElements:(unsigned long long)arg3;

@end

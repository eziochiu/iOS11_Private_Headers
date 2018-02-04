/* made by EzioChiu.
 */

@protocol HAPWACScanControlDelegate <NSObject>

@required

- (void)startWACScan;
- (void)stopWACScan;

@end

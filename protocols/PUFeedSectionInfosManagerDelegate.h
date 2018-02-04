/* made by EzioChiu.
 */

@protocol PUFeedSectionInfosManagerDelegate <NSObject>

@required

- (void)feedSectionInfosManager:(PUFeedSectionInfosManager *)arg1 sectionInfosDidChange:(PUFeedSectionInfosChange *)arg2;

@end

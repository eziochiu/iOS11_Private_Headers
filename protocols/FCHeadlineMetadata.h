/* made by EzioChiu.
 */

@protocol FCHeadlineMetadata <NSObject, NSCopying>

@required

- (NSDate *)displayDate;
- (NSString *)storyType;

@end

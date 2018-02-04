/* made by EzioChiu.
 */

@protocol MPTracklistEnumerationItem <MPTracklistEnumerationResult>

@required

- (bool)isRemoved;
- (NSString *)itemIdentifier;
- (NSString *)sectionIdentifier;

@end

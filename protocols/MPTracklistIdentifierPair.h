/* made by EzioChiu.
 */

@protocol MPTracklistIdentifierPair <NSObject, NSCoding, NSCopying>

@required

- (NSString *)itemIdentifier;
- (NSString *)sectionIdentifier;

@end

/* made by EzioChiu.
 */

@protocol DCCachedDirectory

@required

- (NSArray *)contents;
- (bool)isDropBox;
- (NSArray *)localItems;

@end

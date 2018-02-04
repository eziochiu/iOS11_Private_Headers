/* made by EzioChiu.
 */

@protocol MTContentSizeCategoryAdjusting <UIContentSizeCategoryAdjusting>

@required

- (bool)adjustForContentSizeCategoryChange;

@optional

- (NSString *)preferredContentSizeCategory;
- (void)setPreferredContentSizeCategory:(NSString *)arg1;

@end

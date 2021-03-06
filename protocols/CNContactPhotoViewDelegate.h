/* made by EzioChiu.
 */

@protocol CNContactPhotoViewDelegate <NSObject>

@required

- (CNContactViewCache *)contactViewCache;
- (void)photoViewDidSaveEditsForImageDrop:(CNContactPhotoView *)arg1;
- (void)photoViewDidUpdate:(CNContactPhotoView *)arg1;
- (UIViewController *)viewControllerForPhotoView:(CNContactPhotoView *)arg1;

@end

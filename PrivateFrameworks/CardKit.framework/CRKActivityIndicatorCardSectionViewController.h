/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit
 */

@interface CRKActivityIndicatorCardSectionViewController : CRKCardSectionViewController

+ (id)cardSectionClasses;

- (bool)_expectsSearchUIView;
- (bool)_isIndicatingActivity;
- (bool)_shouldRenderButtonOverlay;

@end

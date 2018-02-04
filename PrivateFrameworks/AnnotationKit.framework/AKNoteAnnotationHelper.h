/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
 */

@interface AKNoteAnnotationHelper : NSObject

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForClosedPopupAnnotation:(id)arg1 havingParent:(id)arg2 onPageController:(id)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_boundsForOpenPopupAnnotation:(id)arg1 withClosedBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 havingParent:(id)arg3 onPageController:(id)arg4;
+ (id)newPopupAnnotationWithParent:(id)arg1 onPageController:(id)arg2;

@end
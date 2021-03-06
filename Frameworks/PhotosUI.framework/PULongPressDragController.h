/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PULongPressDragController : NSObject <UIGestureRecognizerDelegate> {
    UILongPressGestureRecognizer * __longPressGestureRecognizer;
    bool  __needsUpdateGestureRecognizers;
    <PULongPressDragControllerDelegate> * _delegate;
    struct { 
        bool viewHostingGestureRecognizers; 
        bool tilingView; 
        bool delegateForGestureRecognizer; 
        bool canLongPressBeginAtLocationFromProvider; 
        bool dragController; 
    }  _delegateRespondsTo;
}

@property (nonatomic, retain) UILongPressGestureRecognizer *_longPressGestureRecognizer;
@property (nonatomic) bool _needsUpdateGestureRecognizers;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PULongPressDragControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILongPressGestureRecognizer *longPressGestureRecognizer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleLongPressGestureRecognizer:(id)arg1;
- (void)_invalidateGestureRecognizers;
- (double)_longPressDragMinimumPressDuration;
- (id)_longPressGestureRecognizer;
- (bool)_needsUpdateGestureRecognizers;
- (void)_updateGestureRecognizersIfNeeded;
- (id)_userTransformViewAtLocationFromProvider:(id)arg1;
- (id)delegate;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)init;
- (void)invalidateViewHostingGestureRecognizers;
- (id)longPressGestureRecognizer;
- (void)setDelegate:(id)arg1;
- (void)set_longPressGestureRecognizer:(id)arg1;
- (void)set_needsUpdateGestureRecognizers:(bool)arg1;
- (bool)shouldLongPressBeginAtLocationFromProvider:(id)arg1;

@end

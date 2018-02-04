/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVolumeHUDController : NSObject {
    NSMutableSet * _categories;
    NSMutableArray * _contexts;
}

@property (nonatomic, readonly) id mainContext;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_updateVisibility;
- (id)init;
- (id)mainContext;
- (void)popContext;
- (id)pushContext;
- (void)registerView:(id)arg1 inContext:(id)arg2;
- (void)setNeedsUpdate;
- (void)unregisterView:(id)arg1 inContext:(id)arg2;

@end

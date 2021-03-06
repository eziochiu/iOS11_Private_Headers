/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIFocusFastScrollingIndexBarEntryTrimmer : NSObject {
    NSArray * _allEntries;
    <_UIFocusFastScrollingIndexBarEntryTrimmerDelegate> * _delegate;
}

@property (nonatomic, copy) NSArray *allEntries;
@property (nonatomic) <_UIFocusFastScrollingIndexBarEntryTrimmerDelegate> *delegate;

- (void).cxx_destruct;
- (id)_trimEntries:(id)arg1 toFitCount:(long long)arg2;
- (id)allEntries;
- (id)delegate;
- (id)entriesTrimmedToFitCount:(unsigned long long)arg1;
- (void)setAllEntries:(id)arg1;
- (void)setDelegate:(id)arg1;

@end

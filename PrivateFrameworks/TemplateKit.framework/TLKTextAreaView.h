/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
 */

@interface TLKTextAreaView : TLKStackView <NUIContainerStackViewDelegate, TLKTextAreaViewTesting> {
    NSObject<OS_dispatch_queue> * _concurrentQueue;
    NSMutableArray * _detailsFields;
    bool  _disableAllObservers;
    TLKRichTextField * _footnoteLabel;
    unsigned long long  _style;
    TLKTitleContainerView * _titleContainer;
}

@property (retain) NSObject<OS_dispatch_queue> *concurrentQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSMutableArray *detailsFields;
@property bool disableAllObservers;
@property (retain) TLKRichTextField *footnoteLabel;
@property (readonly) unsigned long long hash;
@property unsigned long long style;
@property (readonly) Class superclass;
@property (retain) TLKTitleContainerView *titleContainer;

+ (id)footNoteLabelFont;

- (void).cxx_destruct;
- (id)concurrentQueue;
- (struct UIEdgeInsets { double x1; double x2; double x3; double x4; })containerStackView:(id)arg1 minimumSpacingAdjecentToArrangedSubview:(id)arg2;
- (id)detailsFields;
- (bool)disableAllObservers;
- (void)disableObserversOnLabels:(bool)arg1;
- (void)disableUnbatchedUpdates;
- (id)footnoteLabel;
- (id)footnoteLabelString;
- (id)init;
- (bool)noFootNote;
- (bool)noRichTextFields;
- (id)secondaryTitleLabelString;
- (void)setConcurrentQueue:(id)arg1;
- (void)setDetailsFields:(id)arg1;
- (void)setDisableAllObservers:(bool)arg1;
- (void)setFootnoteLabel:(id)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTitleContainer:(id)arg1;
- (unsigned long long)style;
- (void)styleDidChange:(unsigned long long)arg1;
- (id)textAreaLabelStrings;
- (id)titleContainer;
- (id)titleLabelString;
- (void)updateDetails:(id)arg1 withDisabledObservers:(bool)arg2;
- (void)updateExistingDetailText:(id)arg1;
- (void)updateFootnote:(id)arg1;
- (void)updateResultWithTitle:(id)arg1 secondaryTitle:(id)arg2 image:(id)arg3 detached:(bool)arg4;
- (id)viewForFirstBaselineLayout;

@end

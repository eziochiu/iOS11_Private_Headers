/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
 */

@interface SearchUISuggestionCardSectionTableCell : SearchUICardSectionTableCell {
    bool  _sectionHasHeader;
}

@property bool sectionHasHeader;

- (void)_setShouldHaveFullLengthBottomSeparator:(bool)arg1;
- (bool)_shouldHideSeparator;
- (bool)_showSeparatorAtTopOfSection;
- (id)initWithRowModel:(id)arg1 style:(unsigned long long)arg2 feedbackDelegate:(id)arg3;
- (bool)sectionHasHeader;
- (void)setSectionHasHeader:(bool)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TPHeaderRep : TSWPHeaderRep {
    bool  _hideKnobs;
}

@property (nonatomic) bool hideKnobs;
@property (nonatomic, readonly) TPPaginatedPageInfo *pageInfo;

- (bool)hideKnobs;
- (bool)p_isInDocumentSetup;
- (bool)p_isMiddleFooterRep;
- (bool)p_isMiddleHeaderRep;
- (bool)p_shouldCreateArrowKnobs;
- (id)pageInfo;
- (id)pageLayout;
- (void)setHideKnobs:(bool)arg1;
- (bool)shouldIgnoreSingleTapAtPoint:(struct CGPoint { double x1; double x2; })arg1 withRecognizer:(id)arg2;
- (bool)shouldShowHyperlinkUI;

@end

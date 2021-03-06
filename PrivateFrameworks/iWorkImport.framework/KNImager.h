/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNImager : TSDImager <TSDConnectedInfoReplacing> {
    double  _elementListThumbnailContentInset;
    struct CGSize { 
        double width; 
        double height; 
    }  _elementListThumbnailSize;
    KNBodyPlaceholderInfo * _replacementBodyPlaceholder;
    KNTitlePlaceholderInfo * _replacementTitlePlaceholder;
    bool  _shouldShowInstructionalText;
    KNAbstractSlide * _slide;
    unsigned long long  _slideNumber;
}

@property (nonatomic, readonly) <TSDCanvasProxyDelegate> *canvasProxyDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double elementListThumbnailContentInset;
@property (nonatomic, readonly) TSUImage *elementListThumbnailImage;
@property (nonatomic) struct CGSize { double x1; double x2; } elementListThumbnailSize;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) KNBodyPlaceholderInfo *replacementBodyPlaceholder;
@property (nonatomic, retain) KNTitlePlaceholderInfo *replacementTitlePlaceholder;
@property (nonatomic) bool shouldShowInstructionalText;
@property (nonatomic) KNAbstractSlide *slide;
@property (nonatomic) unsigned long long slideNumber;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)elementListThumbnailContentInset;
- (id)elementListThumbnailImage;
- (struct CGSize { double x1; double x2; })elementListThumbnailSize;
- (id)infoToConnectToForConnectionLineConnectedToInfo:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;
- (bool)isInfoAKeynoteMasterObject:(id)arg1;
- (bool)p_requiresModifiedStrokeForDrawable:(id)arg1 atScaleFactor:(double)arg2;
- (double)p_sizeMultiplierForDrawable:(id)arg1;
- (id)p_strokeForShapeInfo:(id)arg1;
- (double)p_strokeWidthForScaleFactor:(double)arg1 drawable:(id)arg2;
- (id)replacementBodyPlaceholder;
- (id)replacementTitlePlaceholder;
- (void)setElementListThumbnailContentInset:(double)arg1;
- (void)setElementListThumbnailSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setReplacementBodyPlaceholder:(id)arg1;
- (void)setReplacementTitlePlaceholder:(id)arg1;
- (void)setShouldShowInstructionalText:(bool)arg1;
- (void)setSlide:(id)arg1;
- (void)setSlideNumber:(unsigned long long)arg1;
- (bool)shouldShowInstructionalText;
- (id)slide;
- (unsigned long long)slideNumber;

@end

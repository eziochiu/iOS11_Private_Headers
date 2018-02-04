/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFAnnotationPrivateVars : NSObject {
    NSMutableDictionary * PDFAnnotationDictionary;
    NSDictionary * PDFAnnotationKeyMapping;
    PDFAccessibilityNode * accessibilityNode;
    PDFAKAnnotationAdaptor * akAnnotationAdaptor;
    <NSCopying> * akAnnotationForCopying;
    struct CGPDFAnnotation { } * cgAnnotation;
    struct CGPath {} ** cgPaths;
    bool  constructingDictionaryRef;
    id  control;
    struct __CFDictionary { } * dictionaryRef;
    struct CGPDFForm { } * downAppearance;
    struct CGPDFForm { } * downOffAppearance;
    bool  editingTextWidget;
    bool  export;
    bool  isFullyConstructed;
    bool  isHighlighted;
    bool  isSelected;
    bool  isSignature;
    bool  loggingEnabled;
    struct CGPDFForm { } * normalAppearance;
    struct CGPDFForm { } * normalOffAppearance;
    PDFPage * page;
    PDFAnnotation * parent;
    NSLock * pathLock;
    NSString * pdfAnnotationUUID;
    PDFAnnotation * popup;
    struct CGPDFDictionary { } * popupDictionary;
    bool  popupDrawCloseWidget;
    bool  popupDrawText;
    struct CGPDFForm { } * rolloverAppearance;
    struct CGPDFForm { } * rolloverOffAppearance;
    bool  saveAppearance;
    double  scaleFactor;
    bool  shouldBurnIn;
    struct CGPDFDictionary { } * sourceDictionary;
    NSString * widgetOnStateString;
}

- (void).cxx_destruct;

@end

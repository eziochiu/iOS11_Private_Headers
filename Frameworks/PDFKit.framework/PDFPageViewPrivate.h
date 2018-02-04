/* made by EzioChiu
   Image: /System/Library/Frameworks/PDFKit.framework/PDFKit
 */

@interface PDFPageViewPrivate : NSObject {
    UITextView * activeTextView;
    UIImage * backgroundImage;
    CALayer * backgroundLayer;
    int  backgroundQuality;
    CALayer * bookmarkLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  bookmarkSize;
    NSObject<PDFPageLayerGeometryInterface> * geometryInterface;
    bool  isPerformingUndo;
    struct CGImage { } * lollipopImageMask;
    CALayer * lollipopMagnifierLayer;
    struct CGSize { 
        double width; 
        double height; 
    }  lollipopSize;
    struct CGImage { } * magnifierImageMask;
    struct CGSize { 
        double width; 
        double height; 
    }  magnifierSize;
    PDFPage * page;
    NSMutableArray * pageAnnotationEffects;
    PDFPageLayer * pageLayer;
    NSMutableArray * pageMarkups;
    NSMutableArray * pageSignatures;
    NSMapTable * pageWidgetMapTable;
    PDFPagePopupLayer * popupLayer;
    PDFRenderingProperties * renderingProperties;
    PDFPageSearchLayer * searchLayer;
    PDFPageSelectionLayer * selectionLayer;
    CALayer * textMagnifierLayer;
    unsigned long long  visibilityDelegateIndex;
}

- (void).cxx_destruct;

@end

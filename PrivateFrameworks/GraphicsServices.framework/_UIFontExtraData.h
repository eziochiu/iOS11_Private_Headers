/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GraphicsServices.framework/GraphicsServices
 */

@interface _UIFontExtraData : NSObject {
    double  _ascender;
    NSCharacterSet * _coveredCharacterSet;
    double  _descender;
    struct __fFlags { 
        unsigned int _initialized : 1; 
        unsigned int _isSystemFont : 1; 
        unsigned int _hasKernPair : 1; 
        unsigned int _unused : 1; 
        unsigned int _isIBTextStyleFont : 1; 
        unsigned int _isIBScaledFont : 1; 
    }  _fFlags;
    double  _lineGap;
    double  _lineHeight;
    double  _maximumPointSizeAfterScaling;
    double  _pointSizeForScaling;
    NSString * _textStyleForScaling;
}

- (void)dealloc;

@end

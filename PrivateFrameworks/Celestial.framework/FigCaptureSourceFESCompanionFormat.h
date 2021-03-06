/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceFESCompanionFormat : NSObject {
    struct { 
        int width; 
        int height; 
    }  _fesDimensions;
    int  _formatIndex;
}

@property (readonly) struct { int x1; int x2; } fesDimensions;
@property (readonly) int formatIndex;

- (void)dealloc;
- (id)description;
- (struct { int x1; int x2; })fesDimensions;
- (int)formatIndex;
- (id)initWithFESCompanionFormatDictionary:(id)arg1;

@end

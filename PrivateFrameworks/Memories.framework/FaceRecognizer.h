/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface FaceRecognizer : NSObject {
    bool  _highAccuracy;
}

@property (nonatomic) bool highAccuracy;

+ (id)sharedRecognizer;

- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containingRect:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containingRectForFaces:(id)arg1 scaleEachFaceRectBy:(double)arg2;
- (id)facesInImage:(id)arg1;
- (bool)highAccuracy;
- (void)setHighAccuracy:(bool)arg1;

@end
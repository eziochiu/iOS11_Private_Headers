/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMTextLayoutManager : NSObject

- (id)_assembleLayoutLines:(id)arg1;
- (id)_assembleLayoutRegions:(id)arg1;
- (id)_assembleLayoutSequences:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2 context:(id)arg3;
- (id)_axmVisionFeatureForFeature:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2 context:(id)arg3;
- (id)_textDocumentWithFeatures:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2 context:(id)arg3 error:(id*)arg4;
- (id)textDocumentWithFutharkFeatures:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2 context:(id)arg3 error:(id*)arg4;
- (id)textDocumentWithVisionObservations:(id)arg1 canvasSize:(struct CGSize { double x1; double x2; })arg2 context:(id)arg3 error:(id*)arg4;

@end

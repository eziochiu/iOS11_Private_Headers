/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CVML.framework/CVML
 */

@interface CVMLCreateFaceprintRequest : CVMLRequest

- (void)internalDetermineFacesToProcessFrom:(id)arg1 outputFacesThatNeedNoProcessing:(id)arg2 outputFacesThatNeedAlignment:(id)arg3 outputFacesThatNeedFaceprints:(id)arg4;
- (bool)internalProcessWithHandler:(id)arg1 error:(id*)arg2;

@end

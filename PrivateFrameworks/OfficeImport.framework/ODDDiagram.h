/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface ODDDiagram : OADDrawable {
    ODDColorTransform * mColorTransform;
    ODDNodePoint * mDocumentPoint;
    ODDStyleDefinition * mStyleDefinition;
}

- (id)colorTransform;
- (void)dealloc;
- (id)description;
- (id)documentPoint;
- (id)init;
- (void)setDocumentPoint:(id)arg1;
- (void)setParentTextListStyle:(id)arg1;
- (id)styleDefinition;

@end

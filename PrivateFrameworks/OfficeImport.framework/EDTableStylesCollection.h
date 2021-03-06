/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTableStylesCollection : EDCollection {
    NSString * mDefaultPivotStyleName;
    NSString * mDefaultTableStyleName;
}

- (void)dealloc;
- (id)defaultPivotStyle;
- (id)defaultPivotStyleName;
- (id)defaultTableStyle;
- (id)defaultTableStyleName;
- (id)objectWithName:(id)arg1;
- (void)setDefaultPivotStyleName:(id)arg1;
- (void)setDefaultTableStyleName:(id)arg1;

@end

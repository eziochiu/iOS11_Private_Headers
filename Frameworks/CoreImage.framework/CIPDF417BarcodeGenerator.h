/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIPDF417BarcodeGenerator : CICodeGenerator {
    NSNumber * inputAlwaysSpecifyCompaction;
    NSNumber * inputCompactStyle;
    NSNumber * inputCompactionMode;
    NSNumber * inputCorrectionLevel;
    NSNumber * inputDataColumns;
    NSNumber * inputMaxHeight;
    NSNumber * inputMaxWidth;
    NSNumber * inputMinHeight;
    NSNumber * inputMinWidth;
    NSNumber * inputPreferredAspectRatio;
    NSNumber * inputRows;
}

@property (nonatomic, copy) NSNumber *inputAlwaysSpecifyCompaction;
@property (nonatomic, copy) NSNumber *inputCompactStyle;
@property (nonatomic, copy) NSNumber *inputCompactionMode;
@property (nonatomic, copy) NSNumber *inputCorrectionLevel;
@property (nonatomic, copy) NSNumber *inputDataColumns;
@property (nonatomic, copy) NSNumber *inputMaxHeight;
@property (nonatomic, copy) NSNumber *inputMaxWidth;
@property (nonatomic, copy) NSNumber *inputMinHeight;
@property (nonatomic, copy) NSNumber *inputMinWidth;
@property (nonatomic, copy) NSNumber *inputPreferredAspectRatio;
@property (nonatomic, copy) NSNumber *inputRows;

+ (id)customAttributes;

- (id)inputAlwaysSpecifyCompaction;
- (id)inputCompactStyle;
- (id)inputCompactionMode;
- (id)inputCorrectionLevel;
- (id)inputDataColumns;
- (id)inputMaxHeight;
- (id)inputMaxWidth;
- (id)inputMinHeight;
- (id)inputMinWidth;
- (id)inputPreferredAspectRatio;
- (id)inputRows;
- (struct CGImage { }*)outputCGImage;
- (void)setInputAlwaysSpecifyCompaction:(id)arg1;
- (void)setInputCompactStyle:(id)arg1;
- (void)setInputCompactionMode:(id)arg1;
- (void)setInputCorrectionLevel:(id)arg1;
- (void)setInputDataColumns:(id)arg1;
- (void)setInputMaxHeight:(id)arg1;
- (void)setInputMaxWidth:(id)arg1;
- (void)setInputMinHeight:(id)arg1;
- (void)setInputMinWidth:(id)arg1;
- (void)setInputPreferredAspectRatio:(id)arg1;
- (void)setInputRows:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;

@end

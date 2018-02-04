/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKBarcodeStickerView : UIButton {
    UILabel * _altTextLabel;
    PKBarcode * _barcode;
    UIImageView * _barcodeView;
    bool  _drawBarcode;
    long long  _layoutMode;
    NSMutableArray * _matteConstraints;
    UIImageView * _matteView;
    NSMutableArray * _stickerConstraints;
    long long  _validity;
}

@property (nonatomic, readonly) UIView *matteView;
@property (nonatomic) long long validity;

+ (struct PKBarcodeQuietZone { double x1; double x2; double x3; double x4; })_quiteZoneForBarcode:(id)arg1;
+ (struct CGSize { double x1; double x2; })_sizeForBarcode:(id)arg1;

- (void).cxx_destruct;
- (void)_generateMatteRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 barcodeRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 altTextRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg3 boundingSize:(struct CGSize { double x1; double x2; })arg4;
- (id)_resizedBarcode:(id)arg1 desiredSize:(struct CGSize { double x1; double x2; })arg2;
- (void)_updateValidity;
- (struct CGSize { double x1; double x2; })_varianceForBarcode:(id)arg1;
- (id)initWithBarcode:(id)arg1 validityState:(long long)arg2 layoutMode:(long long)arg3;
- (void)layoutSubviews;
- (id)matteView;
- (void)setValidity:(long long)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (long long)validity;

@end
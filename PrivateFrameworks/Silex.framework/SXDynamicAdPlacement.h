/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDynamicAdPlacement : NSObject {
    bool  _allowMediumRectangle;
    unsigned long long  _bannerType;
    struct _SXConvertibleValue { 
        double value; 
        unsigned long long unit; 
    }  _bottomMargin;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _characterRange;
    NSArray * _path;
    NSString * _referenceComponentIdentifier;
    struct _SXConvertibleValue { 
        double value; 
        unsigned long long unit; 
    }  _topMargin;
}

@property (nonatomic) bool allowMediumRectangle;
@property (nonatomic) unsigned long long bannerType;
@property (nonatomic) struct _SXConvertibleValue { double x1; unsigned long long x2; } bottomMargin;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } characterRange;
@property (nonatomic, readonly) NSArray *path;
@property (nonatomic, readonly) NSString *referenceComponentIdentifier;
@property (nonatomic) struct _SXConvertibleValue { double x1; unsigned long long x2; } topMargin;

- (void).cxx_destruct;
- (bool)allowMediumRectangle;
- (unsigned long long)bannerType;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })bottomMargin;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })characterRange;
- (id)description;
- (id)initWithReferenceComponentIdentifier:(id)arg1 andPath:(id)arg2;
- (id)path;
- (id)referenceComponentIdentifier;
- (void)setAllowMediumRectangle:(bool)arg1;
- (void)setBannerType:(unsigned long long)arg1;
- (void)setBottomMargin:(struct _SXConvertibleValue { double x1; unsigned long long x2; })arg1;
- (void)setCharacterRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTopMargin:(struct _SXConvertibleValue { double x1; unsigned long long x2; })arg1;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })topMargin;

@end

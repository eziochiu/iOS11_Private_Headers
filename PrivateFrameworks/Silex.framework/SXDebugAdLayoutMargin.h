/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXDebugAdLayoutMargin : NSObject <SXEdgeSpacing> {
    struct _SXConvertibleValue { 
        double value; 
        unsigned long long unit; 
    }  _bottom;
    struct _SXConvertibleValue { 
        double value; 
        unsigned long long unit; 
    }  _left;
    struct _SXConvertibleValue { 
        double value; 
        unsigned long long unit; 
    }  _right;
    struct _SXConvertibleValue { 
        double value; 
        unsigned long long unit; 
    }  _top;
}

@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } bottom;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } left;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } right;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct _SXConvertibleValue { double x1; unsigned long long x2; } top;

- (struct _SXConvertibleValue { double x1; unsigned long long x2; })bottom;
- (id)initWithMargin:(struct _SXConvertibleValue { double x1; unsigned long long x2; })arg1;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })left;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })right;
- (struct _SXConvertibleValue { double x1; unsigned long long x2; })top;

@end
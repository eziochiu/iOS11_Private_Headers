/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface EQKitEquation : NSObject {
    EQKitEnvironment * mEnvironment;
    <EQKitExpression> * mRoot;
    NSData * mSource;
}

@property (nonatomic, readonly) EQKitEnvironment *environment;
@property (nonatomic, readonly) <EQKitExpression> *root;

+ (id)equationWithData:(id)arg1 format:(int)arg2 environment:(id)arg3 error:(id*)arg4;
+ (id)equationWithString:(id)arg1 format:(int)arg2 environment:(id)arg3 error:(id*)arg4;
+ (id)equationWithString:(id)arg1 format:(int)arg2 error:(id*)arg3;
+ (id)equationWithXMLDoc:(struct _xmlDoc { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; int x10; int x11; struct _xmlDtd {} *x12; struct _xmlDtd {} *x13; struct _xmlNs {} *x14; char *x15; char *x16; void *x17; void *x18; char *x19; int x20; struct _xmlDict {} *x21; void *x22; int x23; int x24; }*)arg1 node:(struct _xmlNode { void *x1; int x2; char *x3; struct _xmlNode {} *x4; struct _xmlNode {} *x5; struct _xmlNode {} *x6; struct _xmlNode {} *x7; struct _xmlNode {} *x8; struct _xmlDoc {} *x9; struct _xmlNs {} *x10; char *x11; struct _xmlAttr {} *x12; struct _xmlNs {} *x13; void *x14; unsigned short x15; unsigned short x16; }*)arg2 environment:(id)arg3 error:(id*)arg4;
+ (int)formatFromData:(id)arg1;
+ (int)formatFromString:(id)arg1;
+ (id)mathMLStringFromLaTeXString:(id)arg1 environment:(id)arg2 error:(id*)arg3;

- (void)dealloc;
- (id)description;
- (id)environment;
- (bool)exportToXMLWriter:(struct _xmlTextWriter { }*)arg1 ns:(const char *)arg2 prefix:(const char *)arg3 characterCount:(int*)arg4;
- (id)init;
- (id)initWithRoot:(id)arg1 source:(id)arg2;
- (bool)isBaseFontNameUsed;
- (id)newLayout;
- (id)pdfDataWithLayout:(id)arg1 layoutContext:(id)arg2;
- (id)pdfDataWithLayoutContext:(id)arg1 baselineOffset:(double*)arg2;
- (id)root;

@end
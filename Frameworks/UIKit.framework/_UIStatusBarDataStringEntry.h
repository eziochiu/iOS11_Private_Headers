/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIStatusBarDataStringEntry : _UIStatusBarDataEntry {
    NSString * _stringValue;
}

@property (nonatomic, copy) NSString *stringValue;

+ (id)entryWithStringValue:(id)arg1;

- (void).cxx_destruct;
- (id)_ui_descriptionBuilder;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initFromData:(const struct { bool x1[35]; BOOL x2[64]; BOOL x3[64]; int x4; int x5; BOOL x6[100]; BOOL x7[100]; BOOL x8[2][100]; BOOL x9[1024]; unsigned int x10; int x11; int x12; unsigned int x13; int x14; unsigned int x15; BOOL x16[150]; int x17; int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; BOOL x22[256]; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; BOOL x33[256]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; double x38; unsigned int x39 : 1; }*)arg1 type:(int)arg2 string:(const char *)arg3 maxLength:(int)arg4;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setStringValue:(id)arg1;
- (id)stringValue;

@end

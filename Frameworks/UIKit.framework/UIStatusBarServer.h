/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarServer : NSObject {
    struct __CFRunLoopSource { } * _source;
    <UIStatusBarServerClient> * _statusBar;
}

@property (nonatomic, retain) <UIStatusBarServerClient> *statusBar;

+ (unsigned int)_publisherPort;
+ (unsigned int)_serverPort;
+ (void)addStatusBarItem:(int)arg1;
+ (void)addStyleOverrides:(int)arg1;
+ (id)getDoubleHeightStatusStringForStyle:(long long)arg1;
+ (double)getGlowAnimationEndTimeForStyle:(long long)arg1;
+ (bool)getGlowAnimationStateForStyle:(long long)arg1;
+ (const struct { bool x1[35]; BOOL x2[64]; BOOL x3[64]; int x4; int x5; BOOL x6[100]; BOOL x7[100]; BOOL x8[2][100]; BOOL x9[1024]; unsigned int x10; int x11; int x12; unsigned int x13; int x14; unsigned int x15; BOOL x16[150]; int x17; int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; BOOL x22[256]; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; BOOL x33[256]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; double x38; unsigned int x39 : 1; }*)getStatusBarData;
+ (struct { bool x1[35]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; struct { bool x_27_1_1[35]; BOOL x_27_1_2[64]; BOOL x_27_1_3[64]; int x_27_1_4; int x_27_1_5; BOOL x_27_1_6[100]; BOOL x_27_1_7[100]; BOOL x_27_1_8[2][100]; BOOL x_27_1_9[1024]; unsigned int x_27_1_10; int x_27_1_11; int x_27_1_12; unsigned int x_27_1_13; int x_27_1_14; unsigned int x_27_1_15; BOOL x_27_1_16[150]; int x_27_1_17; int x_27_1_18; unsigned int x_27_1_19 : 1; unsigned int x_27_1_20 : 1; unsigned int x_27_1_21 : 1; BOOL x_27_1_22[256]; unsigned int x_27_1_23 : 1; unsigned int x_27_1_24 : 1; unsigned int x_27_1_25 : 1; unsigned int x_27_1_26 : 1; unsigned int x_27_1_27 : 1; unsigned int x_27_1_28; unsigned int x_27_1_29 : 1; unsigned int x_27_1_30 : 1; unsigned int x_27_1_31 : 1; BOOL x_27_1_32[256]; BOOL x_27_1_33[256]; BOOL x_27_1_34[100]; unsigned int x_27_1_35 : 1; unsigned int x_27_1_36 : 1; unsigned int x_27_1_37 : 1; double x_27_1_38; unsigned int x_27_1_39 : 1; } x27; }*)getStatusBarOverrideData;
+ (int)getStyleOverrides;
+ (void)permanentizeStatusBarOverrideData;
+ (void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2;
+ (void)postGlowAnimationState:(bool)arg1 forStyle:(long long)arg2;
+ (void)postStatusBarData:(const struct { bool x1[35]; BOOL x2[64]; BOOL x3[64]; int x4; int x5; BOOL x6[100]; BOOL x7[100]; BOOL x8[2][100]; BOOL x9[1024]; unsigned int x10; int x11; int x12; unsigned int x13; int x14; unsigned int x15; BOOL x16[150]; int x17; int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; BOOL x22[256]; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; BOOL x33[256]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; double x38; unsigned int x39 : 1; }*)arg1 withActions:(int)arg2;
+ (void)postStatusBarOverrideData:(struct { bool x1[35]; unsigned int x2 : 1; unsigned int x3 : 1; unsigned int x4 : 1; unsigned int x5 : 1; unsigned int x6 : 2; unsigned int x7 : 1; unsigned int x8 : 1; unsigned int x9 : 1; unsigned int x10 : 1; unsigned int x11 : 1; unsigned int x12 : 1; unsigned int x13 : 1; unsigned int x14 : 1; unsigned int x15 : 1; unsigned int x16 : 1; unsigned int x17 : 1; unsigned int x18 : 1; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; unsigned int x22; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; struct { bool x_27_1_1[35]; BOOL x_27_1_2[64]; BOOL x_27_1_3[64]; int x_27_1_4; int x_27_1_5; BOOL x_27_1_6[100]; BOOL x_27_1_7[100]; BOOL x_27_1_8[2][100]; BOOL x_27_1_9[1024]; unsigned int x_27_1_10; int x_27_1_11; int x_27_1_12; unsigned int x_27_1_13; int x_27_1_14; unsigned int x_27_1_15; BOOL x_27_1_16[150]; int x_27_1_17; int x_27_1_18; unsigned int x_27_1_19 : 1; unsigned int x_27_1_20 : 1; unsigned int x_27_1_21 : 1; BOOL x_27_1_22[256]; unsigned int x_27_1_23 : 1; unsigned int x_27_1_24 : 1; unsigned int x_27_1_25 : 1; unsigned int x_27_1_26 : 1; unsigned int x_27_1_27 : 1; unsigned int x_27_1_28; unsigned int x_27_1_29 : 1; unsigned int x_27_1_30 : 1; unsigned int x_27_1_31 : 1; BOOL x_27_1_32[256]; BOOL x_27_1_33[256]; BOOL x_27_1_34[100]; unsigned int x_27_1_35 : 1; unsigned int x_27_1_36 : 1; unsigned int x_27_1_37 : 1; double x_27_1_38; unsigned int x_27_1_39 : 1; } x27; }*)arg1;
+ (void)removeStatusBarItem:(int)arg1;
+ (void)removeStyleOverrides:(int)arg1;
+ (void)runServer;
+ (const char *)serviceName;

- (void).cxx_destruct;
- (void)_receivedDoubleHeightStatus:(const char *)arg1 forStyle:(long long)arg2;
- (void)_receivedGlowAnimationState:(bool)arg1 forStyle:(long long)arg2;
- (void)_receivedStatusBarData:(struct { bool x1[35]; BOOL x2[64]; BOOL x3[64]; int x4; int x5; BOOL x6[100]; BOOL x7[100]; BOOL x8[2][100]; BOOL x9[1024]; unsigned int x10; int x11; int x12; unsigned int x13; int x14; unsigned int x15; BOOL x16[150]; int x17; int x18; unsigned int x19 : 1; unsigned int x20 : 1; unsigned int x21 : 1; BOOL x22[256]; unsigned int x23 : 1; unsigned int x24 : 1; unsigned int x25 : 1; unsigned int x26 : 1; unsigned int x27 : 1; unsigned int x28; unsigned int x29 : 1; unsigned int x30 : 1; unsigned int x31 : 1; BOOL x32[256]; BOOL x33[256]; BOOL x34[100]; unsigned int x35 : 1; unsigned int x36 : 1; unsigned int x37 : 1; double x38; unsigned int x39 : 1; }*)arg1 actions:(int)arg2 animated:(bool)arg3;
- (void)_receivedStyleOverrides:(int)arg1;
- (void)dealloc;
- (id)initWithStatusBar:(id)arg1;
- (void)setStatusBar:(id)arg1;
- (id)statusBar;

@end
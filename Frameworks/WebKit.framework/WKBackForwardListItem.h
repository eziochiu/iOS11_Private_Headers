/* made by EzioChiu
   Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKBackForwardListItem : NSObject <WKObject> {
    struct ObjectStorage<WebKit::WebBackForwardListItem> { 
        struct type { 
            unsigned char __lx[264]; 
        } data; 
    }  _item;
}

@property (readonly, copy) NSURL *URL;
@property (readonly) /* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*_apiObject;
@property (readonly) struct WebBackForwardListItem { int (**x1)(); id x2; bool x3; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x4; BOOL x5; void*x6; void*x7; out const void*x8; void*x9; const double x10; unsigned long x11; int x12; short x13; void*x14; unsigned int x15; void*x16; void*x17; void*x18; unsigned short x19; void*x20; void*x21; void*x22; void*x23; void*x24; unsigned long long x25; struct PageState { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_26_1_1; struct FrameState { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_2_2_1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_2_3_1; } x_2_2_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_3_3_1; } x_2_2_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_4_3_1; } x_2_2_4; struct x_2_2_5; } x_26_1_2; } x26; }*_item; /* unknown property attribute:  16>=^{FrameState}II}}i}{RefPtr<WebKit::ViewSnapshot>=^{ViewSnapshot}}}Q} */
@property (setter=_sf_setSecurityInfo:, nonatomic, retain) _SFSecurityInfo *_sf_securityInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSURL *initialURL;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *title;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (id)URL;
- (/* Warning: unhandled struct encoding: '{Object=^^?@}' */ struct Object { int (**x1)(); id x2; }*)_apiObject;
- (struct CGImage { }*)_copySnapshotForTesting;
- (struct WebBackForwardListItem { int (**x1)(); id x2; bool x3; /* Warning: Unrecognized filer type: 'a' using 'void*' */ void*x4; BOOL x5; void*x6; void*x7; out const void*x8; void*x9; const double x10; unsigned long x11; int x12; short x13; void*x14; unsigned int x15; void*x16; void*x17; void*x18; unsigned short x19; void*x20; void*x21; void*x22; void*x23; void*x24; unsigned long long x25; struct PageState { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_3_1; } x_1_2_1; } x_26_1_1; struct FrameState { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_1_3_1; } x_2_2_1; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_2_3_1; } x_2_2_2; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_3_3_1; } x_2_2_3; struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_4_1; } x_4_3_1; } x_2_2_4; struct Vector<WTF::String, 0, WTF::CrashOnOverflow, 16> { struct String {} *x_5_3_1; unsigned int x_5_3_2; unsigned int x_5_3_3; } x_2_2_5; struct optional<WTF::Vector<unsigned char, 0, WTF::CrashOnOverflow, 16> > { bool x_6_3_1; union storage_t<WTF::Vector<unsigned char, 0, WTF::CrashOnOverflow, 16> > { unsigned char x_2_4_1; struct Vector<unsigned char, 0, WTF::CrashOnOverflow, 16> { char *x_2_5_1; unsigned int x_2_5_2; unsigned int x_2_5_3; } x_2_4_2; } x_6_3_2; } x_2_2_6; long long x_2_2_7; long long x_2_2_8; struct IntPoint { int x_9_3_1; int x_9_3_2; } x_2_2_9; bool x_2_2_10; float x_2_2_11; struct optional<WebKit::HTTPBody> { bool x_12_3_1; union storage_t<WebKit::HTTPBody> { unsigned char x_2_4_1; struct HTTPBody { struct String { struct RefPtr<WTF::StringImpl> { struct StringImpl {} *x_1_7_1; } x_1_6_1; } x_2_5_1; struct Vector<WebKit::HTTPBody::Element, 0, WTF::CrashOnOverflow, 16> { struct Element {} *x_2_6_1; unsigned int x_2_6_2; unsigned int x_2_6_3; } x_2_5_2; } x_2_4_2; } x_12_3_2; } x_2_2_12; } x_26_1_2; } x26; }*)_item;
- (void)dealloc;
- (id)initialURL;
- (id)title;

// Image: /System/Library/Frameworks/SafariServices.framework/SafariServices

- (id)_sf_securityInfo;
- (void)_sf_setSecurityInfo:(id)arg1;

@end

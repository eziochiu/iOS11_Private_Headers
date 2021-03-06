/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebGeolocationPositionInternal : NSObject {
    struct RefPtr<WebCore::GeolocationPosition> { 
        struct GeolocationPosition {} *m_ptr; 
    }  _position;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithCoreGeolocationPosition:(struct RefPtr<WebCore::GeolocationPosition> { struct GeolocationPosition {} *x1; }*)arg1;

@end

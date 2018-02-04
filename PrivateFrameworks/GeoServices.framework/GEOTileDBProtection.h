/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileDBProtection : NSObject {
    int  _currentState;
    int  _notifyToken;
}

+ (id)sharedObject;

- (void)_statusChanged;
- (void)dealloc;
- (id)init;
- (int)state;
- (void)updateState;

@end

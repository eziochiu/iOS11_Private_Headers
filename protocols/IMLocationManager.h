/* made by EzioChiu.
 */

@protocol IMLocationManager <NSObject>

@required

- (NSError *)error;
- (CLLocation *)location;
- (bool)locationAuthorizationDenied;
- (void)startUpdatingCurrentLocationWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, CLLocation *, NSError *, void*

@end

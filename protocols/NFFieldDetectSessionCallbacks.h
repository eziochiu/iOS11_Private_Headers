/* made by EzioChiu.
 */

@protocol NFFieldDetectSessionCallbacks <NSObject, NFSessionCallbackInterface>

@required

- (void)didDetectField:(bool)arg1;
- (void)didDetectTechnology:(NFTechnologyEvent *)arg1;

@end

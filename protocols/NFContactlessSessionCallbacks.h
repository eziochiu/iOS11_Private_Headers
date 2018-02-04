/* made by EzioChiu.
 */

@protocol NFContactlessSessionCallbacks <NSObject, NFSessionCallbackInterface>

@required

- (void)didDetectField:(bool)arg1;
- (void)didDetectTechnology:(NFTechnologyEvent *)arg1;
- (void)didSelectApplet:(NSString *)arg1;

@optional

- (void)didFelicaStateChange:(NSDictionary *)arg1;

@end

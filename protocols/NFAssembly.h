/* made by EzioChiu.
 */

@protocol NFAssembly <NSObject>

@required

- (void)loadPublicContainer:(id <NFRegistrationContainer>)arg1 privateContainer:(id <NFRegistrationContainer>)arg2;

@optional

- (void)loadedContainer:(id <NFResolver>)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXHostApplication : SXHost {
    UIApplication * _application;
}

@property (nonatomic) UIApplication *application;

- (void).cxx_destruct;
- (bool)active;
- (id)application;
- (bool)canOpenURL:(id)arg1;
- (id)initWithApplication:(id)arg1;
- (void)openURL:(id)arg1 completion:(id /* block */)arg2;
- (void)setApplication:(id)arg1;

@end

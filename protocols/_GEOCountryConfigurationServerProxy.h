/* made by EzioChiu.
 */

@protocol _GEOCountryConfigurationServerProxy <NSObject>

@required

- (<_GEOCountryConfigurationServerProxyDelegate> *)delegate;
- (void)setDelegate:(id <_GEOCountryConfigurationServerProxyDelegate>)arg1;
- (void)updateCountryCode:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

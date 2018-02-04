/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapItemMetadataDealRequest : MKMapItemMetadataRequest {
    id /* block */  _dealHandler;
}

@property (nonatomic, copy) id /* block */ dealHandler;

+ (id)requestWithMapItem:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)dealHandler;
- (void)handleData:(id)arg1;
- (void)handleError:(id)arg1;
- (void)setDealHandler:(id /* block */)arg1;
- (id)url;
- (id)urlRequest;

@end

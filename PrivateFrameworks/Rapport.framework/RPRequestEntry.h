/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPRequestEntry : NSObject {
    id /* block */  _responseHandler;
    unsigned int  _xpcID;
}

@property (nonatomic, copy) id /* block */ responseHandler;
@property (nonatomic) unsigned int xpcID;

- (void).cxx_destruct;
- (id /* block */)responseHandler;
- (void)setResponseHandler:(id /* block */)arg1;
- (void)setXpcID:(unsigned int)arg1;
- (unsigned int)xpcID;

@end

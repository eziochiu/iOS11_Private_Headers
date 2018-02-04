/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICRadioResponse : NSObject {
    NSDate * _expirationDate;
    NSDictionary * _responseDictionary;
    ICURLResponse * _urlResponse;
}

@property (nonatomic, readonly, copy) NSDictionary *contentDictionary;
@property (nonatomic, readonly, copy) ICStoreDialogResponse *dialog;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;
@property (nonatomic, readonly, copy) NSError *serverError;
@property (nonatomic, readonly) ICURLResponse *urlResponse;

- (void).cxx_destruct;
- (id)contentDictionary;
- (id)dialog;
- (id)expirationDate;
- (id)initWithURLResponse:(id)arg1;
- (id)responseDictionary;
- (id)serverError;
- (id)urlResponse;

@end

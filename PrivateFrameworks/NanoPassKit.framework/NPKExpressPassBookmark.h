/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKExpressPassBookmark : PKExpressPassInformation {
    unsigned long long  _setupStatus;
}

@property (nonatomic, readonly) NSString *appletIdentifier;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) unsigned long long setupStatus;

- (id)appletIdentifier;
- (id)description;
- (id)dictionary;
- (id)initForExpressMode:(id)arg1 withPassUniqueIdentifier:(id)arg2 paymentApplicationIdentifier:(id)arg3 setupStatus:(unsigned long long)arg4;
- (id)initWithDictionary:(id)arg1;
- (unsigned long long)setupStatus;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
 */

@interface PRSModelContext : NSObject {
    PRSDirectivesManager * _directivesManager;
    SSCoreMLInterface * _model;
    unsigned long long  _type;
    NSString * _version;
}

@property (nonatomic, retain) PRSDirectivesManager *directivesManager;
@property (nonatomic, retain) SSCoreMLInterface *model;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSString *version;

- (void).cxx_destruct;
- (id)directivesManager;
- (id)initWithModel:(id)arg1 directivesManager:(id)arg2 type:(unsigned long long)arg3;
- (id)model;
- (void)setDirectivesManager:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setVersion:(id)arg1;
- (unsigned long long)type;
- (id)version;

@end
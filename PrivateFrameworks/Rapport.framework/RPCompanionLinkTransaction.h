/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPCompanionLinkTransaction : NSObject {
    RPCompanionLinkClient * _client;
    NSString * _identifier;
    NSString * _label;
}

@property (nonatomic, retain) RPCompanionLinkClient *client;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *label;

- (void).cxx_destruct;
- (id)client;
- (id)identifier;
- (void)invalidate;
- (id)label;
- (void)setClient:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLabel:(id)arg1;

@end

/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

@interface CRBasicPayloadCommand : NSObject <CRPayloadCommand> {
    <NSSecureCoding> * payload;
    NSDictionary * userInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <NSSecureCoding> *payload;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (void).cxx_destruct;
- (id)payload;
- (void)setPayload:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (unsigned long long)crk_intrinsicInteractiveBehavior;
- (bool)handleForCardViewController:(id)arg1;

@end

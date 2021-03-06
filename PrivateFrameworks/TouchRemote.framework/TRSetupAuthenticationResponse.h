/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRSetupAuthenticationResponse : TRResponseMessage {
    NSSet * _unauthenticatedAccountServices;
}

@property (nonatomic, retain) NSSet *unauthenticatedAccountServices;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUnauthenticatedAccountServices:(id)arg1;
- (id)unauthenticatedAccountServices;

@end

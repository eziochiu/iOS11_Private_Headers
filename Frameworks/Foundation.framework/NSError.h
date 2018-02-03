/* made by EzioChiu
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSError : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    long long  _code;
    NSString * _domain;
    void * _reserved;
    NSDictionary * _userInfo;
}

@property (readonly) long long code;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *domain;
@property (nonatomic, readonly) NSURL *fp_collidingURL;
@property (nonatomic, readonly) bool fp_isRemoteCrashError;
@property (nonatomic, readonly) bool fp_isSyncAnchorExpiredError;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *helpAnchor;
@property (readonly, copy) NSString *localizedDescription;
@property (readonly, copy) NSString *localizedFailureReason;
@property (readonly, copy) NSArray *localizedRecoveryOptions;
@property (readonly, copy) NSString *localizedRecoverySuggestion;
@property (readonly) id recoveryAttempter;
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *userInfo;

// Image: /System/Library/Frameworks/Foundation.framework/Foundation

+ (void)_registerBuiltInFormatters;
+ (void)_registerFormatter:(int (*)arg1 forErrorKey:(id)arg2 parameters:(const char *)arg3;
+ (void)_web_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 URL:(id)arg3;
+ (id)_web_errorWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
+ (id)errorWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
+ (void)setUserInfoValueProviderForDomain:(id)arg1 provider:(id /* block */)arg2;
+ (bool)supportsSecureCoding;
+ (id /* block */)userInfoValueProviderForDomain:(id)arg1;

- (unsigned long long)_cfTypeID;
- (id)_cocoaErrorString:(id)arg1;
- (id)_cocoaErrorString:(id)arg1 fromBundle:(id)arg2 tableName:(id)arg3;
- (id)_cocoaErrorStringWithKind:(id)arg1;
- (id)_cocoaErrorStringWithKind:(id)arg1 variant:(id)arg2;
- (long long)_collectApplicableUserInfoFormatters:(struct { /* ? */ }**)arg1 max:(long long)arg2;
- (id)_formatCocoaErrorString:(id)arg1 parameters:(const char *)arg2 applicableFormatters:(struct { /* ? */ }**)arg3 count:(long long)arg4;
- (struct __CFString { }*)_retainedUserInfoCallBackForKey:(id)arg1;
- (bool)_web_errorIsInDomain:(id)arg1;
- (id)_web_failingURL;
- (id)_web_initWithDomain:(id)arg1 code:(long long)arg2 failingURL:(id)arg3;
- (id)_web_initWithDomain_nowarn:(id)arg1 code:(long long)arg2 URL:(id)arg3;
- (id)_web_localizedDescription;
- (long long)code;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)helpAnchor;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1 code:(long long)arg2 userInfo:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedDescription;
- (id)localizedFailureReason;
- (id)localizedRecoveryOptions;
- (id)localizedRecoverySuggestion;
- (id)recoveryAttempter;
- (id)replacementObjectForPortCoder:(id)arg1;
- (id)userInfo;

// Image: /System/Library/Frameworks/Accounts.framework/Accounts

- (id)_sanitizeObject:(id)arg1;
- (id)ac_secureCodingError;

// Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion

- (void)cl_json_serializeValue:(struct value_ostream { bool x1; struct ostream {} *x2; }*)arg1;

// Image: /System/Library/Frameworks/FileProvider.framework/FileProvider

+ (id)fileProviderErrorForCollisionWithItem:(id)arg1;
+ (id)fileProviderErrorForNonExistentItemWithIdentifier:(id)arg1;
+ (id)fp_errorForCollisionWithURL:(id)arg1;
+ (id)fp_errorWithPOSIXCode:(int)arg1;
+ (id)fp_errorWithPOSIXCode:(int)arg1 description:(id)arg2;
+ (id)fp_invalidArgumentError:(id)arg1;
+ (void)load;

- (id)fileProviderCollidingFPItem;
- (id)fileProviderCollidingItem;
- (id)fp_annotatedErrorWitName:(id)arg1 path:(id)arg2 variant:(id)arg3;
- (id)fp_annotatedErrorWithItem:(id)arg1 variant:(id)arg2;
- (id)fp_annotatedErrorWithItems:(id)arg1 variant:(id)arg2;
- (id)fp_annotatedErrorWithURL:(id)arg1 variant:(id)arg2;
- (id)fp_collidingURL;
- (bool)fp_isFileProviderError:(long long)arg1;
- (bool)fp_isRemoteCrashError;
- (bool)fp_isSyncAnchorExpiredError;
- (id)fp_strippedError;
- (id)fp_userInfoValueForKey:(id)arg1;

// Image: /System/Library/Frameworks/Metal.framework/Metal

- (id)initWithIOAccelError:(long long)arg1;

// Image: /System/Library/Frameworks/UserNotifications.framework/UserNotifications

+ (id)_un_descriptionForUNErrorCode:(long long)arg1;
+ (id)_un_descriptionForUNPrivateErrorCode:(long long)arg1;
+ (id)_updateUserInfo:(id)arg1 withLocalizedDescription:(id)arg2;
+ (id)un_errorWithUNErrorCode:(long long)arg1 userInfo:(id)arg2;
+ (id)un_errorWithUNPrivateErrorCode:(long long)arg1 userInfo:(id)arg2;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)bs_timeoutError;

- (bool)bs_isCancelledError;
- (bool)bs_isTimeoutError;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

// Image: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices

+ (id)sceneMessageErrorWithCode:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration

+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 errorType:(id)arg4;
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 suggestion:(id)arg4 USEnglishSuggestion:(id)arg5 underlyingError:(id)arg6 errorType:(id)arg7;
+ (id)MCErrorWithDomain:(id)arg1 code:(long long)arg2 descriptionArray:(id)arg3 underlyingError:(id)arg4 errorType:(id)arg5;

- (bool)MCContainsErrorDomain:(id)arg1 code:(long long)arg2;
- (id)MCCopyAsPrimaryError;
- (id)MCErrorType;
- (id)MCFindPrimaryError;
- (id)MCUSEnglishDescription;
- (id)MCUSEnglishSuggestion;
- (id)MCVerboseDescription;

// Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy

+ (void)_registerWebKitErrors;
+ (id)_webKitErrorWithCode:(int)arg1 failingURL:(id)arg2;
+ (id)_webKitErrorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;
+ (void)_webkit_addErrorsWithCodesAndDescriptions:(id)arg1 inDomain:(id)arg2;
+ (id)_webkit_errorWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

- (id)_initWithPluginErrorCode:(int)arg1 contentURL:(id)arg2 pluginPageURL:(id)arg3 pluginName:(id)arg4 MIMEType:(id)arg5;
- (id)_webkit_initWithDomain:(id)arg1 code:(int)arg2 URL:(id)arg3;

@end

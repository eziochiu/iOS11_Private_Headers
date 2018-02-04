/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAGuidanceGuideSnippet : SAUISnippet

@property (nonatomic, retain) SAUIAppPunchOut *appStorePunchOut;
@property (nonatomic, copy) NSArray *domainSnippets;
@property (nonatomic, copy) NSString *headerText;
@property (nonatomic, copy) NSArray *intentEnabledAppSnippets;

+ (id)guideSnippet;
+ (id)guideSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)appStorePunchOut;
- (id)domainSnippets;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)headerText;
- (id)intentEnabledAppSnippets;
- (void)setAppStorePunchOut:(id)arg1;
- (void)setDomainSnippets:(id)arg1;
- (void)setHeaderText:(id)arg1;
- (void)setIntentEnabledAppSnippets:(id)arg1;

@end
